<?php
/**
 * @file
 * jpec_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function jpec_news_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: news_node.
  $custom_breadcrumbs['news_node'] = array(
    'name' => 'News node',
    'titles' => 'News',
    'paths' => 'news',
    'visibility_php' => '',
    'node_type' => 'news',
    'language' => '',
    'machine_name' => 'news_node',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function jpec_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News Item'),
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
