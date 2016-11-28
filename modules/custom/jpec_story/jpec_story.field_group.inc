<?php
/**
 * @file
 * jpec_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_story_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_content|node|profile|form';
  $field_group->group_name = 'group_profile_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_profile_subtitle',
      1 => 'field_profile_image',
      2 => 'field_profile_full_story',
      3 => 'field_profile_fname',
      4 => 'field_profile_lname',
      5 => 'field_profile_email',
      6 => 'field_profile_intro',
      7 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Profile Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-profile-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_profile_content|node|profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_stories|node|profile|form';
  $field_group->group_name = 'group_profile_stories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Stories',
    'weight' => '1',
    'children' => array(
      0 => 'field_profile_stories',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-stories field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_profile_stories|node|profile|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Profile Info');
  t('Stories');

  return $field_groups;
}
