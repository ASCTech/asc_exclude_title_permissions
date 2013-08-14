<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function asc_exclude_title_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer exclude node title
  $permissions['administer exclude node title'] = array(
    'name' => 'administer exclude node title',
    'roles' => array(
      '0' => 'Site Administrator',
    ),
  );

  // Exported permission: exclude any node title
  $permissions['exclude any node title'] = array(
    'name' => 'exclude any node title',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  // Exported permission: exclude own node title
  $permissions['exclude own node title'] = array(
    'name' => 'exclude own node title',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Manager',
      '2' => 'Site Administrator',
    ),
  );

  // Exported permission: use exclude node title
  $permissions['use exclude node title'] = array(
    'name' => 'use exclude node title',
    'roles' => array(
      '0' => 'Content Administrator',
      '1' => 'Content Editor',
      '2' => 'Content Manager',
      '3' => 'Form Manager',
      '4' => 'Form Viewer',
      '5' => 'Site Administrator',
      '6' => 'anonymous user',
      '7' => 'authenticated user',
    ),
  );

  return $permissions;
}
