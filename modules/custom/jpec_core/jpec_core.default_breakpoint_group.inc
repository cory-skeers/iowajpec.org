<?php
/**
 * @file
 * jpec_core.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function jpec_core_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'general_widths';
  $breakpoint_group->name = 'General Widths';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.large',
    1 => 'custom.user.medium',
    2 => 'custom.user.small',
    3 => 'custom.user.extra_small',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['general_widths'] = $breakpoint_group;

  return $export;
}
