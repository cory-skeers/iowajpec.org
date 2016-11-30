<?php
/**
 * @file
 * jpec_person.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_person_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_contact|node|person|form';
  $field_group->group_name = 'group_person_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '2',
    'children' => array(
      0 => 'field_person_office',
      1 => 'field_person_building',
      2 => 'field_person_phone',
      3 => 'field_person_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_person_contact|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_more|node|person|form';
  $field_group->group_name = 'group_person_more';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_person_biography',
      1 => 'field_person_education',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-more field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_person_more|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_person_personal|node|person|form';
  $field_group->group_name = 'group_person_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personal Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_person_fname',
      1 => 'field_person_lname',
      2 => 'field_person_title',
      3 => 'field_person_image',
      4 => 'field_person_category',
      5 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-person-personal field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_person_personal|node|person|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Info');
  t('More Info');
  t('Personal Info');

  return $field_groups;
}
