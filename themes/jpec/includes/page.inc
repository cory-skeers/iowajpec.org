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
          $story = $wrapper->field_header_story;

          $variables['header_fields']['custom_text'] = array(
            '#prefix' => '<span class="custom-text">',
            '#markup' => $story->field_story_quote->value->value(),
            '#suffix' => '</span>',
          );

          $variables['header_suffix_fields']['custom_text'] = array(
            '#prefix' => '<span class="custom-text">',
            '#markup' => $story->field_story_quote->value->value(),
            '#suffix' => '</span>',
          );

          // Create reference to profile entity.
          $profile = $wrapper->field_header_profile;

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

      case 'page':

        if (!empty($variables['node']->field_section_title)) {

          // Reset the title to the page title field.
          $variables['title'] = $wrapper->field_page_title->value();

          // Add section_title field.
          $variables['section_title'] = $wrapper->field_section_title->value();
        }

        break;       

      case 'profile':

        // Add generic tall-image class for layout.
        $variables['header_classes_array'][] = 'tall-image';

        // Get profile image field and set it as the tall header image.
        $header_image_tall = field_view_field('node', $variables['node'], 'field_profile_image', $display = 'default', $langcode = NULL);

        $variables['header_image_tall'] = $header_image_tall;

        // Get the content that goes in the header.
        $subtitle = field_view_field('node', $variables['node'], 'field_profile_subtitle', $display = 'default', $langcode = NULL);
        $intro = field_view_field('node', $variables['node'], 'field_profile_intro', $display = 'default', $langcode = NULL);

        $variables['header_fields'] = array(
          'subtitle' => $subtitle,
          'intro' => $intro,
        );

        break;      

      // case 'webform':
      //   if (!empty($variables['node']->field_webform_public_title)) {
      //     // Set the title to the Public Title field.
      //     $variables['title'] = $wrapper->field_webform_public_title->value();
      //     // Add section_title field.
      //     $variables['section_title'] = $wrapper->field_section_title->value();
      //   }
      //   break;

      default:
        break;
    }
  }

  // Events page - add a Featured Event view to Extra_content field so it can be printed then in the page.tpl.php
  if ($variables['theme_hook_suggestions'][0] == 'page__events') {
    $variables['extra_content'] = views_embed_view('calendar', 'featured_event_block'); 
  }

  // Front page configuration.
  // if ($variables['is_front']) {

  //   // Add generic tall-image class for layout.
  //   $variables['header_classes_array'][] = 'tall-image';

  //   $variables['header_classes_array'][] = 'tall-image-custom';

  //   drupal_set_title(variable_get('tippie_homepage_title', 'Hard to Beat'));

  //   $video_uri = drupal_get_path("module", "tippie_pages") . '/video/';

  //   $variables['header_image_tall'] = array(
  //     '#markup' => '<video autoplay loop poster="' . $video_uri . 'poster.png" id="headervid">
  //             <source src="' . $video_uri . 'homepage.mp4" type="video/mp4"></video>',
  //   );

  //   $variables['video_uri'] = drupal_get_path('module', 'tippie_pages') . '/video/homepage.mp4';



  //   $variables['header_fields'] = array(
  //     'subtitle' => array(
  //       '#prefix' => '<span class="home-subtitle">',
  //       '#suffix' => '</span>',
  //       '#markup' => variable_get('tippie_homepage_subtitle', 'For business'),
  //     ),
  //     'button' => array(
  //       '#theme' => 'link',
  //       '#text' => 'Watch the Video<i class="fa fa-play" aria-hidden="true"></i>',
  //       '#path' => '"#"',
  //       '#options' => array(
  //         'external' => TRUE,
  //         'attributes' => array(
  //           'class' => array('video-launcher', 'primary-button'),
  //           'data-toggle' => 'modal',
  //           'data-target' => '#video_modal',
  //           'data-theVideo' => variable_get('tippie_homepage_video_url'),
  //         ),
  //         'html' => TRUE,
  //       ),
  //     ),      
  //   );

  //   $variables['video_modal'] = array(
  //     'modal' => array(
  //       '#prefix' => '<div class="modal fade" id="video_modal" tabindex="-1" role="dialog" aria-labelledby="videoModal" aria-hidden="true">',
  //       '#suffix' => '</div>',
  //       'modal_dialog' => array(
  //         '#prefix' => '<div class="modal-dialog full-overlay"><div class="modal-content">',
  //         '#suffix' => '</div></div>',
  //         'content' => array(
  //           'header' => array(
  //             '#prefix' => '<div class="modal-header">',
  //             '#suffix' => '</div>',
  //             '#markup' => '<button type="button" class="close" data-dismiss="modal" aria-hidden="true"><i class="fa fa-times"></i></button>'
  //           ),
  //           'video' => array(
  //             '#prefix' => '<div class="modal-body">',
  //             '#suffix' => '</div>',
  //             '#markup' => '<div id="player"></div>',
  //           ),
  //         ),
  //       ),
  //     ),
  //   );


  //   // $variables['header_fields']['button']['#attached']['js'][] = array(
  //   //   'type' => 'external',
  //   //   'data' => 'https://www.youtube.com/iframe_api',
  //   // );


  //   $variables['header_fields']['button']['#attached']['js'][] = array(
  //     'type' => 'file',
  //     'data' => drupal_get_path('theme', 'tippie') . '/js/tippie.youtube.js',
  //   );

  // }

 
  // Add a body class for taxonomy vocabulary machine names
  if (arg(0) == 'taxonomy' && arg(1) == 'term') {
    $term = taxonomy_term_load(arg(2));
    $voc_name = strtolower($term->vocabulary_machine_name);
    $variables['classes_array'][] = 'vocabulary-' . $voc_name;

    // Overwrite the title of the term page with 'Tagged: <tag name>' for 'news' vocabulary;
    // 'Location:' <tag name> - for program locations
    switch ($voc_name) {
      case 'news':
        $new_title = 'Tagged: ' . $term->name;
        drupal_set_title($new_title);
        break;

      case 'program_locations':
        $new_title = 'Location: ' . $term->name;
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
