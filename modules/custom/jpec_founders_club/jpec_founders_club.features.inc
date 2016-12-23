<?php
/**
 * @file
 * jpec_founders_club.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_founders_club_ctools_plugin_api($module = NULL, $api = NULL) {
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
function jpec_founders_club_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function jpec_founders_club_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: founders_club_profile.
  $custom_breadcrumbs['founders_club_profile'] = array(
    'name' => 'Founders Club Profile',
    'titles' => 'Founders Club',
    'paths' => 'founders-club',
    'visibility_php' => '',
    'node_type' => 'founders_profile',
    'language' => '',
    'machine_name' => 'founders_club_profile',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function jpec_founders_club_node_info() {
  $items = array(
    'founders_profile' => array(
      'name' => t('Founders Club Profile'),
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