<?php
/**
 * @file
 * jpec_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jpec_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_page';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_page';
  $strongarm->value = '<?php 
$array1= \'[node:field-page-title]\';
$array2= \'[node:field-section-title]\';
if(empty($array2)) {
  return  $array1;
} else {
  return  $array1 . " - " . $array2;
}';
  $export['auto_entitylabel_pattern_node_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_page';
  $strongarm->value = 1;
  $export['auto_entitylabel_php_node_page'] = $strongarm;

  return $export;
}
