<?php
/**
 * @file
 * galerie_photos.features.inc
 */

/**
 * Implements hook_node_info().
 */
function galerie_photos_node_info() {
  $items = array(
    'galerie_photos' => array(
      'name' => t('Galerie photos'),
      'base' => 'node_content',
      'description' => t('Ce type de contenus servira à charger les images qui constitueront la galerie photos
accessible depuis l’espace presse (avec un lien depuis l’article).'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
