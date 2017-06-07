<?php
/**
 * @file
 * jpec_webform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_webform_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function jpec_webform_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: webform_node.
  $custom_breadcrumbs['webform_node'] = array();

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function jpec_webform_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
