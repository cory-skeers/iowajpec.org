<?php
/**
 * @file
 * jpec_pages.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function jpec_pages_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'homepage_content';
  $queue->label = 'Homepage content';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'homepage' => 'homepage',
    ),
    'min_size' => '1',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['homepage_content'] = $queue;

  return $export;
}
