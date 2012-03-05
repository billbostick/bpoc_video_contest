<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function bpoc_video_contest_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function bpoc_video_contest_node_info() {
  $items = array(
    'video_submission' => array(
      'name' => t('Video Submission'),
      'module' => 'features',
      'description' => t('A submitted entry for a video contest.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
