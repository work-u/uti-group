<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function wysiwyg_comptes_plugin() {
  $plugins['comptes'] = array(
    'title' => t('Données comptes consolidés'),
    'vendor url' => 'http://drupal.org/project/wysiwyg',
    'icon file' => 'button.png',
    'icon title' => t('Données Financières > Comptes consolidés'),
    'settings' => array(),
  );
  return $plugins;
}

