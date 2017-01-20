<?php
/**
 * @file
 * jpec_pages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jpec_pages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uuid_features_entity_fieldable_panels_pane';
  $strongarm->value = array(
    'homepage_next_steps' => 'homepage_next_steps',
    'homepage_panes' => 'homepage_panes',
  );
  $export['uuid_features_entity_fieldable_panels_pane'] = $strongarm;

  return $export;
}
