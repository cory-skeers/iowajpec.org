<?php
/**
 * @file
 * jpec_paragraphs.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function jpec_paragraphs_paragraphs_info() {
  $items = array(
    'text_area' => array(
      'name' => 'Text area',
      'bundle' => 'text_area',
      'locked' => '1',
    ),
  );
  return $items;
}
