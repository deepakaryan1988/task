<?php
/**
 * @file
 * user_registration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_registration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer smtp module'.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: 'edit any interest profile'.
  $permissions['edit any interest profile'] = array(
    'name' => 'edit any interest profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any social_profile profile'.
  $permissions['edit any social_profile profile'] = array(
    'name' => 'edit any social_profile profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own interest profile'.
  $permissions['edit own interest profile'] = array(
    'name' => 'edit own interest profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own social_profile profile'.
  $permissions['edit own social_profile profile'] = array(
    'name' => 'edit own social_profile profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any interest profile'.
  $permissions['view any interest profile'] = array(
    'name' => 'view any interest profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any social_profile profile'.
  $permissions['view any social_profile profile'] = array(
    'name' => 'view any social_profile profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own interest profile'.
  $permissions['view own interest profile'] = array(
    'name' => 'view own interest profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own social_profile profile'.
  $permissions['view own social_profile profile'] = array(
    'name' => 'view own social_profile profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
