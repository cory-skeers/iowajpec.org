<?php
/**
 * @file
 * jpec_founders_club.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_founders_club_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_contact|node|founders_profile|form';
  $field_group->group_name = 'group_fp_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'founders_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '2',
    'children' => array(
      0 => 'field_founders_profile_location',
      1 => 'field_founders_profile_url',
      2 => 'field_founders_profile_email',
      3 => 'field_founders_profile_phone',
      4 => 'field_founders_profile_facebook',
      5 => 'field_founders_profile_twitter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fp-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_fp_contact|node|founders_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_info|node|founders_profile|form';
  $field_group->group_name = 'group_fp_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'founders_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_card_image',
      1 => 'field_founders_profile_body',
      2 => 'field_founder_profile_category',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fp-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_fp_info|node|founders_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_students|node|founders_profile|form';
  $field_group->group_name = 'group_fp_students';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'founders_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student(s)',
    'weight' => '1',
    'children' => array(
      0 => 'field_founders_profile_student',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fp-students field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_fp_students|node|founders_profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contacts');
  t('Info');
  t('Student(s)');

  return $field_groups;
}
