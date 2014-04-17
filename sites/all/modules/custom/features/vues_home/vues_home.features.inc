<?php
/**
 * @file
 * vues_home.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vues_home_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vues_home_image_default_styles() {
  $styles = array();

  // Exported image style: accueil_image_one_312_95.
  $styles['accueil_image_one_312_95'] = array(
    'name' => 'accueil_image_one_312_95',
    'label' => 'Accueil image one 312/95',
    'effects' => array(
      9 => array(
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
          'height' => 95,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: actus_accueil.
  $styles['actus_accueil'] = array(
    'name' => 'actus_accueil',
    'label' => 'actus accueil',
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
          'width' => 79,
          'height' => 51,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
