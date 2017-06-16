<?php
/**
 * @file
 * jpec_paragraphs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jpec_paragraphs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'youtube_color';
  $strongarm->value = 0;
  $export['youtube_color'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'youtube_privacy';
  $strongarm->value = 0;
  $export['youtube_privacy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'youtube_suggest';
  $strongarm->value = 0;
  $export['youtube_suggest'] = $strongarm;

  return $export;
}
