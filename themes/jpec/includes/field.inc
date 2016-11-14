<?php
/**
 * @file
 * Theme and preprocess functions for fields.
 */

/**
 * Implements THEME_field().
 *
 * Override default THEME_field() for the content block field, to remove
 * unnecessary div structure.
 */
function tippie_field__field_content_block($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $output .= drupal_render($item);
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implements hook_preprocess_field().
 */
function tippie_preprocess_field(&$variables) {
  switch ($variables['element']['#field_name']) {
    case 'field_2x2_1_title':
    case 'field_2x2_2_title':
    case 'field_2x2_3_title':
      $variables['classes_array'][] = 'field-title';
      break;

    case 'field_2x2_1_description':
    case 'field_2x2_2_description':
    case 'field_2x2_3_description':
      $variables['classes_array'][] = 'field-description';
      break;

    case 'field_social_recruiting_events':
    case 'field_org_twitter':
    case 'field_facebook_page_name': 
      $variables['classes_array'][] = 'social-card';
      break;
    case 'field_facebook_app_id':
      $variables['classes_array'][] = 'hidden';
      break;
    default:
      break;
  }

}
