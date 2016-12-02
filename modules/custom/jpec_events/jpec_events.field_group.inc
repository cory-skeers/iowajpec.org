<?php
/**
 * @file
 * jpec_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_content|node|event|form';
  $field_group->group_name = 'group_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'When & where',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_date',
      1 => 'field_event_location',
      2 => 'field_event_room',
      3 => 'field_event_deadline',
      4 => 'field_event_time',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'When & where',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-event-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_content|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_info|node|event|form';
  $field_group->group_name = 'group_event_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_event_image',
      2 => 'field_event_audience',
      3 => 'field_event_info',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_info|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Info');
  t('When & where');

  return $field_groups;
}
