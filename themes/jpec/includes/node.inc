<?php
/**
 * @file
 * Theme and preprocess functions for nodes.
 */

/**
 * Implements hook_preprocess_node().
 */
function jpec_preprocess_node(&$variables) {

  // Add theme suggestion per view mode.
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];

  // Add view mode class.
  $variables['classes_array'][] = 'node-' . $variables['type'] . '-' . $variables['view_mode'];

  if ($variables['type'] == 'cta') {
    // Add theme suggestion and class based on link type per view mode.
    if ($variables['page']) {
      // On full nodes, there is no LANGUAGE_NONE key.
      $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'] . '__' . $variables['field_cta_type'][0]['value'];
      $variables['classes_array'][] = $variables['type'] . '-' . $variables['field_cta_type'][0]['value'];
    }
    else {
      $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'] . '__' . $variables['field_cta_type'][LANGUAGE_NONE][0]['value'];
      $variables['classes_array'][] = $variables['type'] . '-' . $variables['field_cta_type'][LANGUAGE_NONE][0]['value'];
    }
  }
}
