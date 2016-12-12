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
}
