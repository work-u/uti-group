<?php
/**
 * @file
 * aa_20140421.features.inc
 */

/**
 * Implements hook_views_api().
 */
function aa_20140421_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function aa_20140421_node_info() {
  $items = array(
    'clients' => array(
      'name' => t('Clients'),
      'base' => 'node_content',
      'description' => t('Le pavé au milieu à gauche Nos clients : diaporama automatique des logos clients'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'image_home' => array(
      'name' => t('slide acceuil'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
