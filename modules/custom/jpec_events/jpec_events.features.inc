<?php
/**
 * @file
 * jpec_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_events_ctools_plugin_api($module = NULL, $api = NULL) {
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
function jpec_events_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: event_node.
  $custom_breadcrumbs['event_node'] = array(
    'name' => 'Event node',
    'titles' => 'Events',
    'paths' => 'events',
    'visibility_php' => '',
    'node_type' => 'event',
    'language' => '',
    'machine_name' => 'event_node',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function jpec_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
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
