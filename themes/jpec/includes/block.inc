<?php
/**
 * @file
 * Theme and preprocess functions for blocks.
 */

/**
 * Implements hook_preprocess_block().
 */
function jpec_preprocess_block(&$variables) {
  if ($variables['block_html_id'] == 'block-menu-block-1') {
    $variables['classes_array'][] = 'container';
  }
}
