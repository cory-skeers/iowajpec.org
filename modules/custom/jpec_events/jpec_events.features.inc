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
 * Implements hook_image_default_styles().
 */
function jpec_events_image_default_styles() {
  $styles = array();

  // Exported image style: event.
  $styles['event'] = array(
    'label' => 'Event',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 480,
          'height' => 300,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'event',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
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
