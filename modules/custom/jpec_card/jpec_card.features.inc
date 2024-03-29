<?php
/**
 * @file
 * jpec_card.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_card_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jpec_card_node_info() {
  $items = array(
    'card_content' => array(
      'name' => t('Card content'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
