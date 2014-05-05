<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function wysiwyg_evenements_plugin() {
  $plugins['evenements'] = array(
    'title' => t('Evénements'),
    'vendor url' => 'http://drupal.org/project/wysiwyg',
    'icon file' => 'events.png',
    'icon title' => t('Données Financières > Evénements'),
    'settings' => array(),
  );
  return $plugins;
}

