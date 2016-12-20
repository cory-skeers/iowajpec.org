<?php
/**
 * @file
 * jpec_person.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_person_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function jpec_person_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function jpec_person_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: person_node.
  $custom_breadcrumbs['person_node'] = array(
    'name' => 'Person node',
    'titles' => 'People Directory',
    'paths' => 'people-directory',
    'visibility_php' => '',
    'node_type' => 'person',
    'language' => '',
    'machine_name' => 'person_node',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function jpec_person_node_info() {
  $items = array(
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_weight_features_default_settings().
 */
function jpec_person_weight_features_default_settings() {
  $settings = array();

  $settings['person'] = array(
    'enabled' => 1,
    'range' => 10,
    'menu_weight' => 0,
    'default' => 1,
    'sync_translations' => 0,
  );

  return $settings;
}
