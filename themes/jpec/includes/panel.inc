<?php
/**
 * @file
 * Theme and preprocess functions for panels and panes.
 */
function jpec_preprocess_panels_pane(&$vars) {
  
  // hide pane title from the homepage
  switch ($vars['content']['#bundle']) {
    case 'homepage_panes':
      unset($vars['title']);
      
      // $block2_image = $vars['content']['field_homepage_image_2'];
      
      // if (!empty($block2_image)) {

      //   $block2_image_url = file_create_url($block2_image['#items'][0]['uri']); 

      //   $vars['attributes_array']['style'][] = 'background:url(' . $block2_image_url . ') no-repeat top right';
      // }
      // hide($vars['content']['field_homepage_image_2']);
      // dpm($vars);
      break;
    default:
    break;
  }
}