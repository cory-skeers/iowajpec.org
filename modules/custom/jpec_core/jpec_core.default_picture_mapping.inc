<?php
/**
 * @file
 * jpec_core.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function jpec_core_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Tall Header';
  $picture_mapping->machine_name = 'tall_header';
  $picture_mapping->breakpoint_group = 'general_widths';
  $picture_mapping->mapping = array(
    'custom.user.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tall_header_original',
      ),
    ),
    'custom.user.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tall_header_large',
      ),
    ),
    'custom.user.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tall_header_medium',
      ),
    ),
    'custom.user.extra_small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'tall_header_small',
      ),
    ),
  );
  $export['tall_header'] = $picture_mapping;

  return $export;
}
