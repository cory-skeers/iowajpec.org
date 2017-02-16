<?php
/**
 * @file
 * Ctools content type plugin file for signage panes module.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Next Steps'),
  'description' => t('Shows the Next Steps section.'),
  'category' => t('Homepage'),
  'edit form' => 'jpec_next_steps_edit_form',
  'render callback' => 'jpec_next_steps_render',
  'admin info' => 'jpec_next_steps_admin_info',
);

/**
 * The 'admin info' callback for panel pane.
 */
function jpec_next_steps_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
    $block->content = t('Showing next steps.');
    return $block;
  }
}

/**
 * The 'Edit form' callback for the content type.
 */
function jpec_next_steps_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  return $form;
}

/**
 * The submit form stores the data in $conf.
 */
function jpec_next_steps_edit_form_submit($form, &$form_state) {
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
function jpec_next_steps_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();

  $block->title = '';

  $queue = entityqueue_subqueue_load('homepage_content');
  $node_id = $queue->eq_node['und'][0]['target_id'];
  $homepage_node = node_load($node_id);
  $wrapper = entity_metadata_wrapper('node', $node_id);
  $next_steps_text = $wrapper->field_homepage_next_steps_block->value->value();

  $block->content = array(
    '#prefix' => '<div id="next-steps"><div class="content container">',
    'first' => array(
      '#prefix' => '<h2>',
      '#markup' => t('Next Steps'),
      '#suffix' => '</h2>',
    ),
    'second' => array(
      //prefix' => '<div class="cta-items ctas-horizontal-list">',
      '#markup' => $next_steps_text,
      //'#suffix' => '</div>',           
    ),
    '#suffix' => '</div></div>',
  );
  return $block;
}
