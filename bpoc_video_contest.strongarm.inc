<?php

/**
 * Implementation of hook_strongarm().
 */
function bpoc_video_contest_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video_submission';
  $strongarm->value = '0';
  $export['comment_anonymous_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_video_submission';
  $strongarm->value = '3';
  $export['comment_controls_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video_submission';
  $strongarm->value = '4';
  $export['comment_default_mode_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_video_submission';
  $strongarm->value = '1';
  $export['comment_default_order_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video_submission';
  $strongarm->value = '50';
  $export['comment_default_per_page_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video_submission';
  $strongarm->value = '0';
  $export['comment_form_location_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video_submission';
  $strongarm->value = '1';
  $export['comment_preview_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video_submission';
  $strongarm->value = '1';
  $export['comment_subject_field_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video_submission';
  $strongarm->value = '0';
  $export['comment_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_video_submission';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '10',
    'author' => '11',
    'options' => '12',
    'comment_settings' => '13',
    'menu' => '8',
    'path' => '14',
    'locations' => '9',
    'path_redirect' => '15',
    'xmlsitemap' => '16',
    'custom_breadcrumbs' => '17',
  );
  $export['content_extra_weights_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video_submission';
  $strongarm->value = array();
  $export['node_options_video_submission'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_video_submission';
  $strongarm->value = '0';
  $export['upload_video_submission'] = $strongarm;

  return $export;
}
