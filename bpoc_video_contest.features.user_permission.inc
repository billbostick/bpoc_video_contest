<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function bpoc_video_contest_user_default_permissions() {
  $permissions = array();

  // Exported permission: create video_submission content
  $permissions['create video_submission content'] = array(
    'name' => 'create video_submission content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit own video_submission content
  $permissions['edit own video_submission content'] = array(
    'name' => 'edit own video_submission content',
    'roles' => array(),
  );

  return $permissions;
}
