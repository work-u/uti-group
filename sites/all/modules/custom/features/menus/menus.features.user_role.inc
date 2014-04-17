<?php
/**
 * @file
 * menus.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function menus_user_default_roles() {
  $roles = array();

  // Exported role: Contributeur.
  $roles['Contributeur'] = array(
    'name' => 'Contributeur',
    'weight' => 3,
  );

  // Exported role: Validateur.
  $roles['Validateur'] = array(
    'name' => 'Validateur',
    'weight' => 4,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
