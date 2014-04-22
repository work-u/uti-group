<?php
/**
 * @file
 * activites22042014.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function activites22042014_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'activites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Activités';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activités';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corps';
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_image_actualite']['id'] = 'field_image_actualite';
  $handler->display->display_options['fields']['field_image_actualite']['table'] = 'field_data_field_image_actualite';
  $handler->display->display_options['fields']['field_image_actualite']['field'] = 'field_image_actualite';
  $handler->display->display_options['fields']['field_image_actualite']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_actualite']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Champ: Contenu: Titre (maitrise d'ouvrage) */
  $handler->display->display_options['fields']['field_titre_maitrise_ouvrage']['id'] = 'field_titre_maitrise_ouvrage';
  $handler->display->display_options['fields']['field_titre_maitrise_ouvrage']['table'] = 'field_data_field_titre_maitrise_ouvrage';
  $handler->display->display_options['fields']['field_titre_maitrise_ouvrage']['field'] = 'field_titre_maitrise_ouvrage';
  $handler->display->display_options['fields']['field_titre_maitrise_ouvrage']['delta_offset'] = '0';
  /* Champ: Contenu: Texte ennsavoir plus */
  $handler->display->display_options['fields']['field_field_text_en_savoir_plus']['id'] = 'field_field_text_en_savoir_plus';
  $handler->display->display_options['fields']['field_field_text_en_savoir_plus']['table'] = 'field_data_field_field_text_en_savoir_plus';
  $handler->display->display_options['fields']['field_field_text_en_savoir_plus']['field'] = 'field_field_text_en_savoir_plus';
  /* Champ: Contenu: Notre offre */
  $handler->display->display_options['fields']['field_nos_principaux_metiers']['id'] = 'field_nos_principaux_metiers';
  $handler->display->display_options['fields']['field_nos_principaux_metiers']['table'] = 'field_data_field_nos_principaux_metiers';
  $handler->display->display_options['fields']['field_nos_principaux_metiers']['field'] = 'field_nos_principaux_metiers';
  $handler->display->display_options['fields']['field_nos_principaux_metiers']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nos_principaux_metiers']['alter']['text'] = '[field_nos_principaux_metiers-target_id]';
  $handler->display->display_options['fields']['field_nos_principaux_metiers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_nos_principaux_metiers']['delta_offset'] = '0';
  /* Sort criterion: Contenu: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'activites' => 'activites',
  );
  /* Filter criterion: Contenu: Mettre en avant (field_mettre_en_avant) */
  $handler->display->display_options['filters']['field_mettre_en_avant_value']['id'] = 'field_mettre_en_avant_value';
  $handler->display->display_options['filters']['field_mettre_en_avant_value']['table'] = 'field_data_field_mettre_en_avant';
  $handler->display->display_options['filters']['field_mettre_en_avant_value']['field'] = 'field_mettre_en_avant_value';
  $handler->display->display_options['filters']['field_mettre_en_avant_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'activites';
  $translatables['activites'] = array(
    t('Master'),
    t('Activités'),
    t('more'),
    t('Apply'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Titre'),
    t('Corps'),
    t('Image'),
    t('Titre (maitrise d\'ouvrage)'),
    t('Texte ennsavoir plus'),
    t('Notre offre'),
    t('[field_nos_principaux_metiers-target_id]'),
    t('Page'),
  );
  $export['activites'] = $view;

  return $export;
}
