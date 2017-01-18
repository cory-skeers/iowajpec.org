<?php
/**
 * @file
 * jpec_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_pages_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_block1|fieldable_panels_pane|homepage_panes|form';
  $field_group->group_name = 'group_homepage_block1';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'homepage_panes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Block 1',
    'weight' => '2',
    'children' => array(
      0 => 'field_homepage_text_1',
      1 => 'field_header_image_tall',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-block1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_homepage_block1|fieldable_panels_pane|homepage_panes|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_homepage_block2|fieldable_panels_pane|homepage_panes|form';
  $field_group->group_name = 'group_homepage_block2';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'homepage_panes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Block 2',
    'weight' => '3',
    'children' => array(
      0 => 'field_homepage_text_2',
      1 => 'field_homepage_text_3',
      2 => 'field_homepage_image_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-homepage-block2 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_homepage_block2|fieldable_panels_pane|homepage_panes|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Block 1');
  t('Block 2');

  return $field_groups;
}
