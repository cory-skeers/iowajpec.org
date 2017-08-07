<?php
/**
 * @file
 * Theme and preprocess functions for pages.
 */

/**
 * Implements hook_preprocess_page().
 */
function jpec_preprocess_page(&$variables) {

  // Create header_classes_array.
  $variables['header_classes_array'] = array('page-header');

  // Create header_attributes_array.
  $variables['header_attributes_array'] = array();

  if (!empty($variables['node'])) {

    $wrapper = entity_metadata_wrapper('node', $variables['node']);

    // Get value of the header type field if there is one.
    if (isset($wrapper->field_header_type)) {
      $header_type = $wrapper->field_header_type->value();
    }

    if (!empty($header_type)) {
      // Add header type as a class to the header.
      $variables['header_classes_array'][] = drupal_clean_css_identifier($header_type);

      switch ($header_type) {

        // Short background images.
        case 'short_image':

          $header_image = $wrapper->field_header_image_short->value();

          if (!empty($header_image)) {

            $header_image_url = image_style_url('short_header', $header_image['uri']);

            $variables['header_attributes_array']['style'][] = 'background:url(' . $header_image_url . ') no-repeat center center';
          }
          break;

        case 'tall_image_story':

          // Add generic tall-image class for layout.
          $variables['header_classes_array'][] = 'tall-image';

          $header_image = $wrapper->field_header_image_tall->value();

          if (!empty($header_image)) {

            $header_image_tall = field_view_field('node', $variables['node'], 'field_header_image_tall', $display = 'default', $langcode = NULL);

            $variables['header_image_tall'] = $header_image_tall;

          }

          // Create reference to story entity.
          //$story = $wrapper->field_header_story;

          // Create reference to profile entity.
          $profile = $wrapper->field_header_profile;          

          $variables['header_fields']['custom_text'] = array(
            '#prefix' => '<span class="custom-text">',
            '#markup' => $profile->field_profile_intro->value->value(),
            '#suffix' => '</span>',
          );

          $variables['header_suffix_fields']['custom_text'] = array(
            '#prefix' => '<span class="custom-text">',
            '#markup' => $profile->field_profile_intro->value->value(),
            '#suffix' => '</span>',
          );

          $first_name = trim($profile->field_profile_fname->value()) . "'s";

          $variables['header_fields']['button'] = array(
            '#theme' => 'link',
            '#text' => "Read " . $first_name . " story",
            '#path' => 'node/' . $profile->getIdentifier(),
            '#options' => array(
              'attributes' => array('class' => array('primary-button')),
            ),
          );

          $variables['header_suffix_fields']['button'] = array(
            '#theme' => 'link',
            '#text' => "Read " . $first_name . " story",
            '#path' => 'node/' . $profile->getIdentifier(),
            '#options' => array(
              'attributes' => array('class' => array('primary-button')),
            ),
          );

          break;

        case 'tall_image_custom':

          // Add generic tall-image class for layout.
          $variables['header_classes_array'][] = 'tall-image';

          $header_image = $wrapper->field_header_image_tall->value();

          if (!empty($header_image)) {

            $header_image_tall = field_view_field('node', $variables['node'], 'field_header_image_tall', $display = 'default', $langcode = NULL);

            $variables['header_image_tall'] = $header_image_tall;

          }

          $custom_text = $wrapper->field_header_custom_text->value();

          if (!empty($custom_text)) {

            $variables['header_fields'] = array(
              '#prefix' => '<span class="custom-text">',
              '#markup' => $custom_text,
              '#suffix' => '<span>',
            );
          }

          break;

        default:
          break;
      }
    }
 
    switch ($variables['node']->type) {

      case 'competition':
      case 'page':

        if (!empty($variables['node']->field_section_title)) {

          // Reset the title to the page title field.
          $variables['title'] = $wrapper->field_page_title->value();

          // Add section_title field.
          $variables['section_title'] = $wrapper->field_section_title->value();
        }

        break;       

      case 'profile':
        
        // Get the content that goes in the header.
        $subtitle = field_view_field('node', $variables['node'], 'field_profile_subtitle', $display = 'default', $langcode = NULL);
        $intro = field_view_field('node', $variables['node'], 'field_profile_intro', $display = 'default', $langcode = NULL);

        $variables['header_fields'] = array(
          'subtitle' => $subtitle,
          'intro' => $intro,
        );

        $variables['header_classes_array'][] = 'tall-image';
        $header_image = $wrapper->field_profile_image->value();

        if (!empty($header_image)) {
          $header_image_tall = field_view_field('node', $variables['node'], 'field_profile_image', $display = 'default', $langcode = NULL);
          $variables['header_image_tall'] = $header_image_tall;
        }

        break;     

      case 'founders_profile': 
          // Reset the title to "Founders Club"
          $variables['title'] = 'Founders Club Business';
        break;

      case 'mandela_fellow': 
          // Reset the title to "Mandela Washington Fellow"
          $variables['title'] = 'Mandela Washington Fellow';
        break;               

      default:
        break;
    }
  }

  // Events page - add a Featured Event view to Extra_content field so it can be printed then in the page.tpl.php
  if ($variables['theme_hook_suggestions'][0] == 'page__events') {
    $variables['extra_content'] = views_embed_view('calendar', 'featured_event_block'); 
  }

  // Front page configuration.
  if ($variables['is_front']) {

    $queue = entityqueue_subqueue_load('homepage_content');
    $node_id = $queue->eq_node['und'][0]['target_id'];
    $homepage_node = node_load($node_id);
    $wrapper = entity_metadata_wrapper('node', $node_id);

    //header
    $variables['header_classes_array'][] = 'tall-image';
    $variables['title'] = $wrapper->title->value();
    $header_image = $wrapper->field_header_image_tall->value();

    if (!empty($header_image)) {
      $header_image_tall = field_view_field('node', $homepage_node, 'field_header_image_tall', $display = 'default', $langcode = NULL);
      $variables['header_image_tall'] = $header_image_tall;
    }

    $header_text = $wrapper->field_homepage_block_1->value->value();
    $variables['header_fields'] = array(
      '#prefix' => '<span class="custom-text">',
      '#markup' => $header_text,
      '#suffix' => '<span>',
    );
  }

  // Add a body class for taxonomy vocabulary machine names
  if (arg(0) == 'taxonomy' && arg(1) == 'term') {
    $term = taxonomy_term_load(arg(2));
    $voc_name = strtolower($term->vocabulary_machine_name);
    $variables['classes_array'][] = 'vocabulary-' . $voc_name;

    // Overwrite the title of the term page with 'Tagged: <tag name>' for 'news' vocabulary;
    switch ($voc_name) {
      case 'news':
        $new_title = 'Tagged: ' . $term->name;
        drupal_set_title($new_title);
        break;        
      
      default:
        break;
    }

  }

}

/**
 * Implements hook_process_page().
 */
function jpec_process_page(&$variables) {
  $variables['header_classes'] = implode(' ', $variables['header_classes_array']);

  $variables['header_attributes'] = drupal_attributes($variables['header_attributes_array']);
}

/**
 * Implements hook_preprocess_html().
 */ 
function jpec_preprocess_html() {
  // Setup IE meta tag to force IE rendering mode.
  $meta_ie_render_engine = array(
     '#type' => 'html_tag',
     '#tag' => 'meta',
     '#attributes' => array(
       'content' =>  'IE=edge,chrome=1',
       'http-equiv' => 'X-UA-Compatible',
     )
   );
  // Add header meta tag for IE head.
  drupal_add_html_head($meta_ie_render_engine, 'meta_ie_render_engine');
}
