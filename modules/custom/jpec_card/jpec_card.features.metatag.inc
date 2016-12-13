<?php
/**
 * @file
 * jpec_card.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function jpec_card_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [current-page:pager][site:name]',
      ),
      'description' => array(
        'value' => '[node:summary]',
      ),
    ),
  );

  return $config;
}
