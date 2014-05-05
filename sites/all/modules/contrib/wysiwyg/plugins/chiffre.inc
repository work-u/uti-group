<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function wysiwyg_chiffre_plugin() {
  $plugins['chiffre'] = array(
    'title' => t('Données Chiffre d\'affaires'),
    'vendor url' => 'http://drupal.org/project/wysiwyg',
    'icon file' => 'selectionField.png',
    'icon title' => t('Données Financières > Chiffre d\'affaires'),
    'settings' => array(),
  );
  return $plugins;
}

