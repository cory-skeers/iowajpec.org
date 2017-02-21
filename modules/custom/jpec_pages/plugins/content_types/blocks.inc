<?php
/**
 * @file
 * Ctools content type plugin file for signage panes module.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Homepage block'),
  'description' => t('Shows homepage block.'),
  'category' => t('Homepage'),
  'edit form' => 'jpec_blocks_edit_form',
  'render callback' => 'jpec_blocks_render',
  'admin info' => 'jpec_blocks_admin_info',
);


/**
 * The 'admin info' callback for panel pane.
 */
function jpec_blocks_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Showing homepage blocks');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function jpec_blocks_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function jpec_blocks_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    if (isset($form_state['values'][$key])) {
      $form_state['conf'][$key] = $form_state['values'][$key];
    }
  }
}

/**
 * Run-time rendering of the body of the block (content type).
 *
 * See ctools_plugin_examples for more advanced info.
 */
function jpec_blocks_render($subtype, $conf, $panel_args, $context = NULL) {
  //loading the queue-ed homepage node
  $queue = entityqueue_subqueue_load('homepage_content');
  $node_id = $queue->eq_node['und'][0]['target_id'];
  $homepage_node = node_load($node_id);
  $wrapper = entity_metadata_wrapper('node', $node_id);
  $block2_text = $wrapper->field_homepage_block_2->value->value();
  $block3_text = $wrapper->field_homepage_block_3->value->value();
  $block_image1 = $wrapper->field_homepage_block_image->value();
  $block_image1_path = file_create_url($block_image1['uri']);
  $block_image1_alt = $block_image1['alt'];

  $block = new stdClass();
  $block->title = '';
  $block->content = array(
    '#prefix' => '<div class="content"><div class="container"><div class="row no-gutters">',
    'first' => array(
      '#prefix' => '<div class="col-md-6">',
      'block1' => array(
        '#prefix' => '<div class="homepage-block-2">',
        '#markup' => $block2_text,
        '#suffix' => '</div>',
      ),
      'block2' => array(
        '#prefix' => '<div class="homepage-block-3">',
        '#markup' => $block3_text,
        '#suffix' => '</div>',
      ), 
      '#suffix' => '</div>'
    ), 
    'second' => array(
      '#prefix' => '<div class="col-md-6 block-bg">',
      'image1' => array(
        '#prefix' => '<div class="homepage-image-block">',
        '#theme' => 'image',
        '#path' => $block_image1_path,
        '#alt' => t($block_image1_alt),
        '#suffix' => '</div>',
      ),
      '#suffix' => '</div>',
    ),
    
    '#suffix' => '</div></div></div>',
  );
  return $block;
}
