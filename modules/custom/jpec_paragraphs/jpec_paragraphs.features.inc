<?php
/**
 * @file
 * jpec_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function jpec_paragraphs_paragraphs_info() {
  $items = array(
    '2x2_feature' => array(
      'name' => '2x2 Feature',
      'bundle' => '2x2_feature',
      'locked' => '1',
    ),
    'card' => array(
      'name' => 'Card Reference',
      'bundle' => 'card',
      'locked' => '1',
    ),
    'factoids' => array(
      'name' => 'Factoids',
      'bundle' => 'factoids',
      'locked' => '1',
    ),
    'image' => array(
      'name' => 'Image',
      'bundle' => 'image',
      'locked' => '1',
    ),
    'social' => array(
      'name' => 'Up and coming',
      'bundle' => 'social',
      'locked' => '1',
    ),
    'story_featured' => array(
      'name' => 'Story reference',
      'bundle' => 'story_featured',
      'locked' => '1',
    ),
    'text_area' => array(
      'name' => 'Text area',
      'bundle' => 'text_area',
      'locked' => '1',
    ),
  );
  return $items;
}