<?php
/**
 * @file
 * page_services.features.inc
 */

/**
 * Implements hook_views_api().
 */
function page_services_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function page_services_image_default_styles() {
  $styles = array();

  // Exported image style: picto_service_fond.
  $styles['picto_service_fond'] = array(
    'name' => 'picto_service_fond',
    'label' => 'Picto_service_fond',
    'effects' => array(
      4 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 67,
          'height' => 76,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: services_picto.
  $styles['services_picto'] = array(
    'name' => 'services_picto',
    'label' => 'Services Picto',
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
          'width' => 312,
          'height' => 239,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
