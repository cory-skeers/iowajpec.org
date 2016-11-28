<?php
/**
 * @file
 * jpec_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jpec_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2x2_1|paragraphs_item|2x2_feature|form';
  $field_group->group_name = 'group_2x2_1';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2x2_feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_2x2';
  $field_group->data = array(
    'label' => 'Item One',
    'weight' => '2',
    'children' => array(
      0 => 'field_2x2_1_image',
      1 => 'field_2x2_1_title',
      2 => 'field_2x2_1_description',
      3 => 'field_2x2_1_url',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_2x2_1|paragraphs_item|2x2_feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2x2_2|paragraphs_item|2x2_feature|form';
  $field_group->group_name = 'group_2x2_2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2x2_feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_2x2';
  $field_group->data = array(
    'label' => 'Item Two',
    'weight' => '3',
    'children' => array(
      0 => 'field_2x2_2_image',
      1 => 'field_2x2_2_title',
      2 => 'field_2x2_2_description',
      3 => 'field_2x2_2_url',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_2x2_2|paragraphs_item|2x2_feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2x2_3|paragraphs_item|2x2_feature|form';
  $field_group->group_name = 'group_2x2_3';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2x2_feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_2x2';
  $field_group->data = array(
    'label' => 'Item Three',
    'weight' => '4',
    'children' => array(
      0 => 'field_2x2_3_image',
      1 => 'field_2x2_3_title',
      2 => 'field_2x2_3_description',
      3 => 'field_2x2_3_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_2x2_3|paragraphs_item|2x2_feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2x2_main|paragraphs_item|2x2_feature|form';
  $field_group->group_name = 'group_2x2_main';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2x2_feature';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_2x2';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '1',
    'children' => array(
      0 => 'field_2x2_image',
      1 => 'field_2x2_title',
      2 => 'field_2x2_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_2x2_main|paragraphs_item|2x2_feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2x2|paragraphs_item|2x2_feature|form';
  $field_group->group_name = 'group_2x2';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = '2x2_feature';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab group',
    'weight' => '0',
    'children' => array(
      0 => 'group_2x2_1',
      1 => 'group_2x2_main',
      2 => 'group_2x2_2',
      3 => 'group_2x2_3',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-2x2 field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_2x2|paragraphs_item|2x2_feature|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|paragraphs_item|image|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_paragraph_body',
      1 => 'field_paragraph_container_style',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content|paragraphs_item|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|paragraphs_item|image|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tabs';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '1',
    'children' => array(
      0 => 'field_image_image',
      1 => 'field_image_image_position',
      2 => 'field_image_image_style',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_image|paragraphs_item|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tabs|paragraphs_item|image|form';
  $field_group->group_name = 'group_tabs';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab group',
    'weight' => '0',
    'children' => array(
      0 => 'group_image',
      1 => 'group_content',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tabs field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tabs|paragraphs_item|image|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Image');
  t('Item One');
  t('Item Three');
  t('Item Two');
  t('Main');
  t('Tab group');

  return $field_groups;
}
