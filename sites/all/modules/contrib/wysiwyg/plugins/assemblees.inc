<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function wysiwyg_assemblees_plugin() {
  $plugins['assemblees'] = array(
    'title' => t('Assemblées Générales'),
    'vendor url' => 'http://drupal.org/project/wysiwyg',
    'icon file' => 'newPage.png',
    'icon title' => t('Données Financières > Assemblées Générales'),
    'settings' => array(),
  );
  return $plugins;
}

