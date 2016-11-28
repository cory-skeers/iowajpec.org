<?php
/**
 * @file
 * Theme and preprocess functions for breadcrumbs, messages, tabs..etc
 */

/**
 * Implementation of theme_breadcrumb().
 */
function tippie_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  // hide breadcumbs if it's just Home
  if (!empty($breadcrumb) && count($breadcrumb)>1) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode('&#8594; ', $breadcrumb) . '</div>';
    return $output;
  }
}