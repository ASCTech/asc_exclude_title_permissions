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
      '0' => 'superuser',
    ),
  );

  // Exported permission: exclude any node title
  $permissions['exclude any node title'] = array(
    'name' => 'exclude any node title',
    'roles' => array(
      '0' => 'superuser',
    ),
  );

  // Exported permission: exclude own node title
  $permissions['exclude own node title'] = array(
    'name' => 'exclude own node title',
    'roles' => array(
      '0' => 'superuser',
    ),
  );

  // Exported permission: use exclude node title
  $permissions['use exclude node title'] = array(
    'name' => 'use exclude node title',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'superuser',
    ),
  );

  return $permissions;
}
