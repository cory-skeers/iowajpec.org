<?php
/**
 * @file
 * jpec_competitions.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_competitions_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_competition_content|node|competition|form';
  $field_group->group_name = 'group_competition_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'competition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_content_block',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-competition-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_competition_content|node|competition|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_competition_header|node|competition|form';
  $field_group->group_name = 'group_competition_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'competition';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header',
    'weight' => '0',
    'children' => array(
      0 => 'field_section_title',
      1 => 'field_page_title',
      2 => 'field_header_image_short',
      3 => 'field_header_type',
      4 => 'field_header_image_tall',
      5 => 'field_header_custom_text',
      6 => 'field_header_profile',
      7 => 'field_header_story',
      8 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-competition-header field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_competition_header|node|competition|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Header');

  return $field_groups;
}
