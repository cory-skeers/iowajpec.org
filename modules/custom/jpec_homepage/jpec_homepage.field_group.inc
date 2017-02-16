<?php
/**
 * @file
 * jpec_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_homepage_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_content|node|homepage|form';
  $field_group->group_name = 'group_homepage_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Block content',
    'weight' => '1',
    'children' => array(
      0 => 'field_homepage_block_2',
      1 => 'field_homepage_block_3',
      2 => 'field_homepage_block_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_homepage_content|node|homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_header|node|homepage|form';
  $field_group->group_name = 'group_homepage_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_homepage_block_1',
      1 => 'field_header_image_tall',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-header field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_homepage_header|node|homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_next|node|homepage|form';
  $field_group->group_name = 'group_homepage_next';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Next steps',
    'weight' => '3',
    'children' => array(
      0 => 'field_homepage_next_steps_block',
      1 => 'field_homepage_steps_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Next steps',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-homepage-next field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_homepage_next|node|homepage|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block content');
  t('Header');
  t('Next steps');

  return $field_groups;
}
