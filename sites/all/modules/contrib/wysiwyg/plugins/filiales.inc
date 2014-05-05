<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function wysiwyg_filiales_plugin() {
  $plugins['filiales'] = array(
    'title' => t('Résultats par filiales'),
    'vendor url' => 'http://drupal.org/project/wysiwyg',
    'icon file' => 'imageButton.png',
    'icon title' => t('Données Financières > Résultats par filiales'),
    'settings' => array(),
  );
  return $plugins;
}

