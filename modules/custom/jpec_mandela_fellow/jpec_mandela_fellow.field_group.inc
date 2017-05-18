<?php
/**
 * @file
 * jpec_mandela_fellow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_mandela_fellow_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mwf_info|node|mandela_fellow|form';
  $field_group->group_name = 'group_mwf_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mandela_fellow';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_mwf_first_name',
      1 => 'field_mwf_last_name',
      2 => 'field_mwf_title',
      3 => 'field_mwf_city',
      4 => 'field_mwf_country',
      5 => 'field_mwf_body',
      6 => 'field_mwf_education',
      7 => 'field_mwf_image',
      8 => 'field_mwf_year',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mwf-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_mwf_info|node|mandela_fellow|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Info');

  return $field_groups;
}
