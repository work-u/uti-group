<?php
/**
 * @file
 * activites22042014.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function activites22042014_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function activites22042014_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function activites22042014_node_info() {
  $items = array(
    'activites' => array(
      'name' => t('Activités'),
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
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
