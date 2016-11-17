<?php
/**
 * @file
 * jpec_paragraphs.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function jpec_paragraphs_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_paragraph_body'.
  $field_bases['field_paragraph_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_paragraph_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_paragraph_container_style'.
  $field_bases['field_paragraph_container_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_paragraph_container_style',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'classy_paragraphs',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'cp_list',
  );

  return $field_bases;
}
