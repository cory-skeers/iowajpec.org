<?php
/**
 * @file
 * jpec_event_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jpec_event_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_slick_optionset';
  $strongarm->value = array(
    'default' => FALSE,
  );
  $export['default_slick_optionset'] = $strongarm;

  return $export;
}
