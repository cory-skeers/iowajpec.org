<?php
/**
 * @file
 * jpec_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jpec_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function jpec_core_image_default_styles() {
  $styles = array();

  // Exported image style: card_640x325.
  $styles['card_640x325'] = array(
    'label' => 'Card (640x325)',
    'effects' => array(
      10 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 640,
          'height' => 325,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'card_640x325',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: short_header.
  $styles['short_header'] = array(
    'label' => 'Short Header',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2000,
          'height' => 290,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_290x290.
  $styles['square_290x290'] = array(
    'label' => 'Square (290x290)',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 290,
          'height' => 290,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'square_290x290',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: square_585x585.
  $styles['square_585x585'] = array(
    'label' => 'Square (585x585)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 585,
          'height' => 585,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tall_header_large.
  $styles['tall_header_large'] = array(
    'label' => 'Tall Header - Large',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 700,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'tall_header_large',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: tall_header_medium.
  $styles['tall_header_medium'] = array(
    'label' => 'Tall Header - Medium',
    'effects' => array(
      5 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'tall_header_large',
          'apply_all_effects' => 1,
        ),
        'weight' => 0,
      ),
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 992,
          'height' => 578.6,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: tall_header_original.
  $styles['tall_header_original'] = array(
    'label' => 'Tall Header Original',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2000,
          'height' => 700,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: tall_header_small.
  $styles['tall_header_small'] = array(
    'label' => 'Tall Header - Small',
    'effects' => array(
      8 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reuse_crop_style' => 'tall_header_large',
          'apply_all_effects' => 1,
        ),
        'weight' => 0,
      ),
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 768,
          'height' => 448,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function jpec_core_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('General Resource page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
