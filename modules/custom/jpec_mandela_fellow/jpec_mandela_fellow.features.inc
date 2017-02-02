<?php
/**
 * @file
 * jpec_mandela_fellow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_mandela_fellow_ctools_plugin_api($module = NULL, $api = NULL) {
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
function jpec_mandela_fellow_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: fellows.
  $custom_breadcrumbs['fellows'] = array(
    'name' => 'Fellows',
    'titles' => 'Mandela Washington Fellows',
    'paths' => 'mandela-washington-fellows',
    'visibility_php' => '',
    'node_type' => 'mandela_fellow',
    'language' => '',
    'machine_name' => 'fellows',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function jpec_mandela_fellow_node_info() {
  $items = array(
    'mandela_fellow' => array(
      'name' => t('Mandela Washington Fellow'),
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
