<?php
/**
 * @file
 * etudes_event.features.inc
 */

/**
 * Implements hook_views_api().
 */
function etudes_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function etudes_event_image_default_styles() {
  $styles = array();

  // Exported image style: block_evenement_etudes-event.
  $styles['block_evenement_etudes-event'] = array(
    'name' => 'block_evenement_etudes-event',
    'label' => 'Block evenement dans la page etudes-event',
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
          'width' => 666,
          'height' => 306,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: qr_s.
  $styles['qr_s'] = array(
    'name' => 'qr_s',
    'label' => 'QR&S',
    'effects' => array(
      2 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 264,
          'height' => 245,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: style_a_la_une.
  $styles['style_a_la_une'] = array(
    'name' => 'style_a_la_une',
    'label' => 'style a la une',
    'effects' => array(
      1 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 313,
          'height' => 241,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
