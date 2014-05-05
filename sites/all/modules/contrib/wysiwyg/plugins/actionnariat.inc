<?php

/**
 * @file
 * Wysiwyg API integration on behalf of Node module.
 */

/**
 * Implementation of hook_wysiwyg_plugin().
 */
function wysiwyg_actionnariat_plugin() {
  $plugins['actionnariat'] = array(
    'title' => t('Données actionnaires'),
    'vendor url' => 'http://drupal.org/project/wysiwyg',
    'icon file' => 'mod-text-slide.png',
    'icon title' => t('Données Financières > Actionnaires'),
    'settings' => array(),
  );
  return $plugins;
}

