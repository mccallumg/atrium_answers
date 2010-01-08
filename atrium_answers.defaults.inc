<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _atrium_answers_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'answers',
    'description' => 'Questions and Answers, with User Reputations.',
    'node' => array(
      '0' => 'question',
    ),
    'views' => array(
      '0' => 'atrium_answers',
    ),
    'menu' => 'answers',
    'block' => array(
      'views_atrium_answers-block_1' => array(
        'module' => 'views',
        'delta' => 'atrium_answers-block_1',
        'weight' => 34,
        'region' => 'right',
        'status' => '0',
        'label' => 'atrium_answers: Block',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _atrium_answers_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Answers',
    'path' => 'answers',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Answers'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _atrium_answers_user_default_permissions() {
  $permissions = array();

  // Exported permission: create question content
  $permissions[] = array(
    'name' => 'create question content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any question content
  $permissions[] = array(
    'name' => 'delete any question content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own question content
  $permissions[] = array(
    'name' => 'delete own question content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any question content
  $permissions[] = array(
    'name' => 'edit any question content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own question content
  $permissions[] = array(
    'name' => 'edit own question content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  $permissions[] = array(
    'name' => 'use vote up/down',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );
  $permissions[] = array(
    'name' => 'use vote up/down on comments',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );
  $permissions[] = array(
    'name' => 'use vote up/down on nodes',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );
  $permissions[] = array(
    'name' => 'reset vote up/down votes',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );
  $permissions[] = array(
    'name' => 'access vote up/down statistics',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );
  $permissions[] = array(
    'name' => 'see vote up/down node stats',
    'roles' => array(
      '0' => 'admin',
      '1' => 'manager',
    ),
  );

  $permissions[] = array(
    'name' => 'view own userpoints',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );
  $permissions[] = array(
    'name' => 'view userpoints',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
