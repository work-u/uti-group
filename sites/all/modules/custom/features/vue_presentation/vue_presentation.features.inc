<?php
/**
 * @file
 * vue_presentation.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vue_presentation_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vue_presentation_image_default_styles() {
  $styles = array();

  // Exported image style: image_item.
  $styles['image_item'] = array(
    'name' => 'image_item',
    'label' => 'image article',
    'effects' => array(
      3 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 226,
          'height' => 241,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
