<?php
/**
 * @file
 * jpec_factoid.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_factoid_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factoid_content|node|factoid|form';
  $field_group->group_name = 'group_factoid_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factoid';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_factoid_image',
      1 => 'field_factoid_description',
      2 => 'field_factoid_body',
      3 => 'field_factoid_source',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factoid-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factoid_content|node|factoid|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
