<?php
/**
 * @file
 * Theme and preprocess functions for menus
 */

/**
 * Implements theme_menu_tree().
 */
function jpec_menu_tree__jpec_megamenu__main_menu(&$variables) {
  return '<ul class="dropdown-menu">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_menu_tree().
 */
function jpec_menu_tree__jpec_megamenu__main_menu_first_level(&$variables) {
  return '<ul class="nav navbar-nav">' . $variables['tree'] . '</ul>';
}
