<?php
/**
 * @file
 * jpec_pages.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function jpec_pages_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'homepage_next_steps';
  $fieldable_panels_pane_type->title = 'Homepage Next Steps';
  $fieldable_panels_pane_type->description = '';
  $export['homepage_next_steps'] = $fieldable_panels_pane_type;

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'homepage_panes';
  $fieldable_panels_pane_type->title = 'Homepage Panes';
  $fieldable_panels_pane_type->description = '';
  $export['homepage_panes'] = $fieldable_panels_pane_type;

  return $export;
}
