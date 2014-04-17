<?php
/**
 * @file
 * galerie_photos.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function galerie_photos_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-galerie_photos-body'
  $field_instances['node-galerie_photos-body'] = array(
    'bundle' => 'galerie_photos',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-galerie_photos-field_images'
  $field_instances['node-galerie_photos-field_images'] = array(
    'bundle' => 'galerie_photos',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'juicebox',
        'settings' => array(
          'apply_markup_filter' => 1,
          'caption_source' => 'alt',
          'custom_parent_classes' => '',
          'image_style' => '',
          'incompatible_file_action' => 'show_icon_and_link',
          'jlib_backgroundColor' => '#222222',
          'jlib_galleryHeight' => '100%',
          'jlib_galleryWidth' => '100%',
          'jlib_showExpandButton' => 1,
          'jlib_showOpenButton' => 1,
          'jlib_showThumbsButton' => 1,
          'jlib_textColor' => 'rgba(255,255,255,1)',
          'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
          'jlib_useFullscreenExpand' => 0,
          'jlib_useThumbDots' => 0,
          'linkurl_source' => '',
          'linkurl_target' => '_blank',
          'manual_config' => '',
          'show_debug_links' => 0,
          'thumb_style' => 'juicebox_square_thumbnail',
          'title_source' => 'title',
        ),
        'type' => 'juicebox_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_images',
    'label' => 'images',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'juicebox_square_thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('images');

  return $field_instances;
}
