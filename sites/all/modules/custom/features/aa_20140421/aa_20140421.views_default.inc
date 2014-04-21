<?php
/**
 * @file
 * aa_20140421.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function aa_20140421_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slide_home';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slide acceuil';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_image_home']['id'] = 'field_image_home';
  $handler->display->display_options['fields']['field_image_home']['table'] = 'field_data_field_image_home';
  $handler->display->display_options['fields']['field_image_home']['field'] = 'field_image_home';
  $handler->display->display_options['fields']['field_image_home']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_home']['settings'] = array(
    'image_style' => 'photo_home',
    'image_link' => '',
  );
  /* Champ: Contenu: url */
  $handler->display->display_options['fields']['field_url_home']['id'] = 'field_url_home';
  $handler->display->display_options['fields']['field_url_home']['table'] = 'field_data_field_url_home';
  $handler->display->display_options['fields']['field_url_home']['field'] = 'field_url_home';
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Contenu: Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenu: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_home' => 'image_home',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_image_home']['id'] = 'field_image_home';
  $handler->display->display_options['fields']['field_image_home']['table'] = 'field_data_field_image_home';
  $handler->display->display_options['fields']['field_image_home']['field'] = 'field_image_home';
  $handler->display->display_options['fields']['field_image_home']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_home']['settings'] = array(
    'image_style' => 'photo_home',
    'image_link' => '',
  );
  /* Champ: Contenu: url */
  $handler->display->display_options['fields']['field_url_home']['id'] = 'field_url_home';
  $handler->display->display_options['fields']['field_url_home']['table'] = 'field_data_field_url_home';
  $handler->display->display_options['fields']['field_url_home']['field'] = 'field_url_home';
  /* Champ: Contenu: Orientation du texte */
  $handler->display->display_options['fields']['field_orientation_du_texte']['id'] = 'field_orientation_du_texte';
  $handler->display->display_options['fields']['field_orientation_du_texte']['table'] = 'field_data_field_orientation_du_texte';
  $handler->display->display_options['fields']['field_orientation_du_texte']['field'] = 'field_orientation_du_texte';
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corps';
  $translatables['slide_home'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Titre'),
    t('Image'),
    t('url'),
    t('Block'),
    t('Orientation du texte'),
    t('Corps'),
  );
  $export['slide_home'] = $view;

  return $export;
}
