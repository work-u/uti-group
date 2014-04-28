<?php
/**
 * @file
 * type_de_contenu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function type_de_contenu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function type_de_contenu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function type_de_contenu_image_default_styles() {
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

  // Exported image style: notre_qualite.
  $styles['notre_qualite'] = array(
    'name' => 'notre_qualite',
    'label' => 'Notre démarche qualité',
    'effects' => array(
      8 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 253,
          'height' => 297,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_home.
  $styles['photo_home'] = array(
    'name' => 'photo_home',
    'label' => 'photo acceuil',
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
          'width' => 784,
          'height' => 346,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_recrutement.
  $styles['photo_recrutement'] = array(
    'name' => 'photo_recrutement',
    'label' => 'photo recrutement',
    'effects' => array(
      10 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 158,
          'height' => 158,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_rse.
  $styles['photo_rse'] = array(
    'name' => 'photo_rse',
    'label' => 'photo RSE',
    'effects' => array(
      9 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 326,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_uti_bref.
  $styles['photo_uti_bref'] = array(
    'name' => 'photo_uti_bref',
    'label' => 'photo UTI bref ',
    'effects' => array(
      7 => array(
        'label' => 'Redimensionner',
        'help' => 'Le redimensionnement ne respecte pas les proportions de l\'image. Ce qui peut se traduire par des images étirées ou compressées.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 325,
          'height' => 197,
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
function type_de_contenu_node_info() {
  $items = array(
    'developpement_durable_rse' => array(
      'name' => t('Développement durable/RSE'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'groupe_actualite' => array(
      'name' => t('Groupe > Actualité'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'groupe_qualite' => array(
      'name' => t('Groupe > Qualité'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'groupe_uti_en_bref' => array(
      'name' => t('Groupe > UTI en bref'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'integration' => array(
      'name' => t('Rejoignez-nous > Intégration'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'offre_activites' => array(
      'name' => t('Offre activités'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'process_de_recrut' => array(
      'name' => t('Rejoignez nous > Process de recrutement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rejoignez_nous_suivi_de_carriere' => array(
      'name' => t('Rejoignez-nous > Suivi de carrière'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rejoignez_nous_vie_entreprise' => array(
      'name' => t('Rejoignez-nous > Vie dans l’entreprise'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
