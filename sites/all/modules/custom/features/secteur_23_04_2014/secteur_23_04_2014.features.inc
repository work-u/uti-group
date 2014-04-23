<?php
/**
 * @file
 * secteur_23_04_2014.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function secteur_23_04_2014_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function secteur_23_04_2014_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function secteur_23_04_2014_image_default_styles() {
  $styles = array();

  // Exported image style: assurances_secteur.
  $styles['assurances_secteur'] = array(
    'name' => 'assurances_secteur',
    'label' => 'Assurances secteur',
    'effects' => array(
      5 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 296,
          'height' => 277,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banques_finances_scteur.
  $styles['banques_finances_scteur'] = array(
    'name' => 'banques_finances_scteur',
    'label' => 'Banques/Finances scteur',
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
          'width' => 296,
          'height' => 277,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: image_secteur.
  $styles['image_secteur'] = array(
    'name' => 'image_secteur',
    'label' => 'image secteur',
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
          'width' => 306,
          'height' => 197,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: industrie_services_secteur.
  $styles['industrie_services_secteur'] = array(
    'name' => 'industrie_services_secteur',
    'label' => 'Industrie services secteur',
    'effects' => array(
      6 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 170,
          'height' => 277,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: produit_secteur.
  $styles['produit_secteur'] = array(
    'name' => 'produit_secteur',
    'label' => 'produit secteur',
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
          'width' => 171,
          'height' => 208,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function secteur_23_04_2014_node_info() {
  $items = array(
    'secteurs' => array(
      'name' => t('Secteurs'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
