<?php

/**
 * Implementation of hook_content_default_fields().
 */
function bpoc_video_contest_content_default_fields() {
  $fields = array();

  // Exported field: field_contest_address
  $fields['video_submission-field_contest_address'] = array(
    'field_name' => 'field_contest_address',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '3',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_contest_address][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '1',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_contest_birth
  $fields['video_submission-field_contest_birth'] = array(
    'field_name' => 'field_contest_birth',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_contest_birth][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Date of Birth',
      'weight' => '2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contest_description
  $fields['video_submission-field_contest_description'] = array(
    'field_name' => 'field_contest_description',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_contest_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Description',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_contest_email
  $fields['video_submission-field_contest_email'] = array(
    'field_name' => 'field_contest_email',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '1',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email Address',
      'weight' => '-1',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_contest_name
  $fields['video_submission-field_contest_name'] = array(
    'field_name' => 'field_contest_name',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_contest_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Name',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contest_parent
  $fields['video_submission-field_contest_parent'] = array(
    'field_name' => 'field_contest_parent',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_contest_parent][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent or Guardian Name',
      'weight' => '3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contest_parent_agree
  $fields['video_submission-field_contest_parent_agree'] = array(
    'field_name' => 'field_contest_parent_agree',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|I do not agree
1|I am the parent or legal guardian of this child. I have read and agree to the Contest Rules.',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent Agreement',
      'weight' => '5',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_contest_parent_email
  $fields['video_submission-field_contest_parent_email'] = array(
    'field_name' => 'field_contest_parent_email',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Parent or Guardian Email',
      'weight' => '4',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_contest_phone
  $fields['video_submission-field_contest_phone'] = array(
    'field_name' => 'field_contest_phone',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_contest_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone Number',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contest_ref
  $fields['video_submission-field_contest_ref'] = array(
    'field_name' => 'field_contest_ref',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'contest' => 'contest',
      'announcement' => 0,
      'banner' => 0,
      'blog_import_balboa_park_beat' => 0,
      'blog_import_cosmo_doggie_blog' => 0,
      'blog_import_la_gema' => 0,
      'blog' => 0,
      'calendar_feed' => 0,
      'dashboard' => 0,
      'decembernights' => 0,
      'december_nights_activities' => 0,
      'december_nights_areas' => 0,
      'decembernights_image' => 0,
      'instance' => 0,
      'feed' => 0,
      'feed_item' => 0,
      'frontpage_image' => 0,
      'frontpage_overlay' => 0,
      'gift_store' => 0,
      'image' => 0,
      'insiders_guide' => 0,
      'institution' => 0,
      'event_location' => 0,
      'masthead_image' => 0,
      'mobile' => 0,
      'organization' => 0,
      'page' => 0,
      'photo_album' => 0,
      'photo_submission' => 0,
      'plaza_image' => 0,
      'plaza_photo_gallery' => 0,
      'plaza_slide' => 0,
      'photo_galleries' => 0,
      'press_photos' => 0,
      'press_release' => 0,
      'product' => 0,
      'books' => 0,
      'maps' => 0,
      'souvenirs' => 0,
      'series' => 0,
      'sponsor' => 0,
      'stages' => 0,
      'story' => 0,
      'summer_camp' => 0,
      'video_gallery' => 0,
      'video_submission' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 0,
        'full' => 0,
        'title' => '',
        'hover_title' => '',
        'destination' => 'default',
      ),
      'fallback' => 'autocomplete',
      'edit_fallback' => 0,
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Contest',
      'weight' => '7',
      'description' => 'The contest that this entry is being submitted to.',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_contest_user_agreement
  $fields['video_submission-field_contest_user_agreement'] = array(
    'field_name' => 'field_contest_user_agreement',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '0|I do not agree to the contest rules and terms of use.
1|I agree to the contest rules and terms of use.',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 0,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'User Agreement',
      'weight' => '6',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_contest_video
  $fields['video_submission-field_contest_video'] = array(
    'field_name' => 'field_contest_video',
    'type_name' => 'video_submission',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '1',
    'multiple' => '0',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 0,
        'description' => 0,
      ),
      'providers' => array(
        'hulu' => 'hulu',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
        'flickr_sets' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'media_flickr_ir_repeat_video' => 'list',
      'media_flickr_ir_rotatetime_video' => '5',
      'media_flickr_ir_shownavigation_video' => 1,
      'media_flickr_ir_showicons_video' => 1,
      'media_flickr_ir_shuffle_video' => 0,
      'media_flickr_ir_allowfullscreen_video' => 1,
      'media_flickr_ir_logo_video' => '',
      'media_flickr_ir_transition_video' => 'random',
      'media_flickr_player_video' => 'flash',
      'media_flickr_playlist_video' => 'right',
      'media_flickr_playlistsize_video' => '86',
      'media_flickr_repeat_video' => 'list',
      'media_flickr_delay_video' => '10',
      'media_flickr_controlbar_video' => 'none',
      'media_flickr_allowfullscreen_video' => 1,
      'media_flickr_logo_video' => '',
      'media_flickr_ir_repeat_preview' => 'list',
      'media_flickr_ir_rotatetime_preview' => '5',
      'media_flickr_ir_shownavigation_preview' => 1,
      'media_flickr_ir_showicons_preview' => 1,
      'media_flickr_ir_shuffle_preview' => 0,
      'media_flickr_ir_allowfullscreen_preview' => 1,
      'media_flickr_ir_logo_preview' => '',
      'media_flickr_ir_transition_preview' => 'random',
      'media_flickr_player_preview' => 'flash',
      'media_flickr_playlist_preview' => 'right',
      'media_flickr_playlistsize_preview' => '86',
      'media_flickr_repeat_preview' => 'list',
      'media_flickr_delay_preview' => '10',
      'media_flickr_controlbar_preview' => 'none',
      'media_flickr_allowfullscreen_preview' => 1,
      'media_flickr_logo_preview' => '',
      'label' => 'Video',
      'weight' => '-4',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Contest');
  t('Date of Birth');
  t('Description');
  t('Email Address');
  t('Name');
  t('Parent Agreement');
  t('Parent or Guardian Email');
  t('Parent or Guardian Name');
  t('Phone Number');
  t('User Agreement');
  t('Video');

  return $fields;
}
