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
  $field_group->identifier = 'group_event_action|node|event|form';
  $field_group->group_name = 'group_event_action';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Action & deadline',
    'weight' => '2',
    'children' => array(
      0 => 'field_event_action_label',
      1 => 'field_event_url',
      2 => 'field_event_external_url',
      3 => 'group_event_deadline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Action & deadline',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-event-action field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_event_action|node|event|form'] = $field_group;

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
      1 => 'group_event_location',
      2 => 'group_event_time',
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
  $field_group->identifier = 'group_event_deadline|node|event|form';
  $field_group->group_name = 'group_event_deadline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_action';
  $field_group->data = array(
    'label' => 'Deadline',
    'weight' => '13',
    'children' => array(
      0 => 'field_event_deadline',
      1 => 'field_event_deadline_text',
      2 => 'field_event_deadline_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-deadline field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_deadline|node|event|form'] = $field_group;

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
      0 => 'field_event_image',
      1 => 'field_event_audience',
      2 => 'field_event_featured',
      3 => 'field_event_body',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_location|node|event|form';
  $field_group->group_name = 'group_event_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_content';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '7',
    'children' => array(
      0 => 'field_event_location',
      1 => 'field_event_room',
      2 => 'field_event_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-location field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_location|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_time|node|event|form';
  $field_group->group_name = 'group_event_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_content';
  $field_group->data = array(
    'label' => 'Time',
    'weight' => '4',
    'children' => array(
      0 => 'field_event_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-time field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_time|node|event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Action & deadline');
  t('Deadline');
  t('Info');
  t('Location');
  t('Time');
  t('When & where');

  return $field_groups;
}
