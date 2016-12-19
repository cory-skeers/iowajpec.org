<?php
/**
 * @file
 * jpec_competitions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_competitions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function jpec_competitions_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: competition.
  $custom_breadcrumbs['competition'] = array(
    'name' => 'Competition',
    'titles' => 'Competitions',
    'paths' => 'competitions',
    'visibility_php' => '',
    'node_type' => 'competition',
    'language' => '',
    'machine_name' => 'competition',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function jpec_competitions_node_info() {
  $items = array(
    'competition' => array(
      'name' => t('Competition'),
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
