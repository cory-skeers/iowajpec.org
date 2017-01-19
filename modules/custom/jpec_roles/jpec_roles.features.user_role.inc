<?php
/**
 * @file
 * jpec_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jpec_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: founders club editor.
  $roles['founders club editor'] = array(
    'name' => 'founders club editor',
    'weight' => 2,
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 4,
  );

  return $roles;
}
