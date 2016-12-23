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
function jpec_field__field_content_block($variables) {
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
function jpec_preprocess_field(&$variables) {
  //dpm($variables['element']['#field_name']);
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

    case 'field_social_events':
    case 'field_twitter_username':
    case 'field_facebook_page_name': 
      $variables['classes_array'][] = 'social-card';
      break;

    default:
      break;
  }

}
