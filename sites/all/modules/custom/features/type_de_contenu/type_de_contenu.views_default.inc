<?php
/**
 * @file
 * type_de_contenu.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function type_de_contenu_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'developpement_durable_rse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'développement durable /RSE ';
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
  /* Champ: Contenu: Photo */
  $handler->display->display_options['fields']['field_photo_groupe']['id'] = 'field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['table'] = 'field_data_field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['field'] = 'field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_groupe']['settings'] = array(
    'image_style' => 'photo_rse',
    'image_link' => '',
  );
  /* Champ: Contenu: Right texte */
  $handler->display->display_options['fields']['field_right_texte_deve_groupe']['id'] = 'field_right_texte_deve_groupe';
  $handler->display->display_options['fields']['field_right_texte_deve_groupe']['table'] = 'field_data_field_right_texte_deve_groupe';
  $handler->display->display_options['fields']['field_right_texte_deve_groupe']['field'] = 'field_right_texte_deve_groupe';
  /* Champ: Contenu: Texte encadre */
  $handler->display->display_options['fields']['field_texte_encadre_rse_groupe']['id'] = 'field_texte_encadre_rse_groupe';
  $handler->display->display_options['fields']['field_texte_encadre_rse_groupe']['table'] = 'field_data_field_texte_encadre_rse_groupe';
  $handler->display->display_options['fields']['field_texte_encadre_rse_groupe']['field'] = 'field_texte_encadre_rse_groupe';
  /* Champ: Contenu: Texte top RSE */
  $handler->display->display_options['fields']['field_texte_top_rse_groupe']['id'] = 'field_texte_top_rse_groupe';
  $handler->display->display_options['fields']['field_texte_top_rse_groupe']['table'] = 'field_data_field_texte_top_rse_groupe';
  $handler->display->display_options['fields']['field_texte_top_rse_groupe']['field'] = 'field_texte_top_rse_groupe';
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
    'developpement_durable_rse' => 'developpement_durable_rse',
  );
  /* Filter criterion: Contenu: Mettre en avant (field_mettre_en_avan_groupet) */
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['id'] = 'field_mettre_en_avan_groupet_value';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['table'] = 'field_data_field_mettre_en_avan_groupet';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['field'] = 'field_mettre_en_avan_groupet_value';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'developpement-rse';
  $translatables['developpement_durable_rse'] = array(
    t('Master'),
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
    t('Photo'),
    t('Right texte'),
    t('Texte encadre'),
    t('Texte top RSE'),
    t('Page'),
  );
  $export['developpement_durable_rse'] = $view;

  $view = new view();
  $view->name = 'groupe_actualites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'groupe-Actualités';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'groupe-Actualités';
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
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Champ: Contenu: Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corps';
  /* Champ: Contenu: Groupe */
  $handler->display->display_options['fields']['field_groupe_actualite']['id'] = 'field_groupe_actualite';
  $handler->display->display_options['fields']['field_groupe_actualite']['table'] = 'field_data_field_groupe_actualite';
  $handler->display->display_options['fields']['field_groupe_actualite']['field'] = 'field_groupe_actualite';
  /* Champ: Contenu: Presse */
  $handler->display->display_options['fields']['field_presse_groupe_actualite']['id'] = 'field_presse_groupe_actualite';
  $handler->display->display_options['fields']['field_presse_groupe_actualite']['table'] = 'field_data_field_presse_groupe_actualite';
  $handler->display->display_options['fields']['field_presse_groupe_actualite']['field'] = 'field_presse_groupe_actualite';
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
    'groupe_actualite' => 'groupe_actualite',
  );
  /* Filter criterion: Contenu: Mettre en avant (field_mettre_en_avan_groupet) */
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['id'] = 'field_mettre_en_avan_groupet_value';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['table'] = 'field_data_field_mettre_en_avan_groupet';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['field'] = 'field_mettre_en_avan_groupet_value';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'groupe-actualites';
  $translatables['groupe_actualites'] = array(
    t('Master'),
    t('groupe-Actualités'),
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
    t('Corps'),
    t('Groupe'),
    t('Presse'),
    t('Page'),
  );
  $export['groupe_actualites'] = $view;

  $view = new view();
  $view->name = 'groupe_qualite';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Groupe qualite';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Groupe qualite';
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
  /* Champ: Contenu: Left description */
  $handler->display->display_options['fields']['field_left_description_qualite']['id'] = 'field_left_description_qualite';
  $handler->display->display_options['fields']['field_left_description_qualite']['table'] = 'field_data_field_left_description_qualite';
  $handler->display->display_options['fields']['field_left_description_qualite']['field'] = 'field_left_description_qualite';
  /* Champ: Contenu: Photo */
  $handler->display->display_options['fields']['field_photo_groupe']['id'] = 'field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['table'] = 'field_data_field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['field'] = 'field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_groupe']['settings'] = array(
    'image_style' => 'notre_qualite',
    'image_link' => '',
  );
  /* Champ: Contenu: Right description */
  $handler->display->display_options['fields']['field_right_description_qualite']['id'] = 'field_right_description_qualite';
  $handler->display->display_options['fields']['field_right_description_qualite']['table'] = 'field_data_field_right_description_qualite';
  $handler->display->display_options['fields']['field_right_description_qualite']['field'] = 'field_right_description_qualite';
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
    'groupe_qualite' => 'groupe_qualite',
  );
  /* Filter criterion: Contenu: Mettre en avant (field_mettre_en_avan_groupet) */
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['id'] = 'field_mettre_en_avan_groupet_value';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['table'] = 'field_data_field_mettre_en_avan_groupet';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['field'] = 'field_mettre_en_avan_groupet_value';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'groupe-qualite';
  $translatables['groupe_qualite'] = array(
    t('Master'),
    t('Groupe qualite'),
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
    t('Left description'),
    t('Photo'),
    t('Right description'),
    t('Page'),
  );
  $export['groupe_qualite'] = $view;

  $view = new view();
  $view->name = 'integration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Intégration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Intégration';
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
  /* Champ: Contenu: en savoir plus shema */
  $handler->display->display_options['fields']['field_en_savoir_shema_integratio']['id'] = 'field_en_savoir_shema_integratio';
  $handler->display->display_options['fields']['field_en_savoir_shema_integratio']['table'] = 'field_data_field_en_savoir_shema_integratio';
  $handler->display->display_options['fields']['field_en_savoir_shema_integratio']['field'] = 'field_en_savoir_shema_integratio';
  $handler->display->display_options['fields']['field_en_savoir_shema_integratio']['delta_offset'] = '0';
  /* Champ: Contenu: schéma Intégration */
  $handler->display->display_options['fields']['field_schema_integration']['id'] = 'field_schema_integration';
  $handler->display->display_options['fields']['field_schema_integration']['table'] = 'field_data_field_schema_integration';
  $handler->display->display_options['fields']['field_schema_integration']['field'] = 'field_schema_integration';
  $handler->display->display_options['fields']['field_schema_integration']['delta_offset'] = '0';
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
    'integration' => 'integration',
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
  $handler->display->display_options['path'] = 'integration';
  $translatables['integration'] = array(
    t('Master'),
    t('Intégration'),
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
    t('en savoir plus shema'),
    t('schéma Intégration'),
    t('Page'),
  );
  $export['integration'] = $view;

  $view = new view();
  $view->name = 'recrutement';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recrutement';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recrutement';
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
  /* Champ: Contenu: schéma représentant  */
  $handler->display->display_options['fields']['field_schema']['id'] = 'field_schema';
  $handler->display->display_options['fields']['field_schema']['table'] = 'field_data_field_schema';
  $handler->display->display_options['fields']['field_schema']['field'] = 'field_schema';
  $handler->display->display_options['fields']['field_schema']['delta_offset'] = '0';
  /* Champ: Contenu: En savoir plus shema */
  $handler->display->display_options['fields']['field_en_savoir_plus_shema']['id'] = 'field_en_savoir_plus_shema';
  $handler->display->display_options['fields']['field_en_savoir_plus_shema']['table'] = 'field_data_field_en_savoir_plus_shema';
  $handler->display->display_options['fields']['field_en_savoir_plus_shema']['field'] = 'field_en_savoir_plus_shema';
  $handler->display->display_options['fields']['field_en_savoir_plus_shema']['delta_offset'] = '0';
  /* Champ: Contenu: Photo equipe du recrutement */
  $handler->display->display_options['fields']['field_photo_equipe_du_recrutemen']['id'] = 'field_photo_equipe_du_recrutemen';
  $handler->display->display_options['fields']['field_photo_equipe_du_recrutemen']['table'] = 'field_data_field_photo_equipe_du_recrutemen';
  $handler->display->display_options['fields']['field_photo_equipe_du_recrutemen']['field'] = 'field_photo_equipe_du_recrutemen';
  $handler->display->display_options['fields']['field_photo_equipe_du_recrutemen']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_equipe_du_recrutemen']['settings'] = array(
    'image_style' => 'photo_recrutement',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_photo_equipe_du_recrutemen']['delta_offset'] = '0';
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
    'process_de_recrut' => 'process_de_recrut',
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
  $handler->display->display_options['path'] = 'recrutement';
  $translatables['recrutement'] = array(
    t('Master'),
    t('Recrutement'),
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
    t('schéma représentant '),
    t('En savoir plus shema'),
    t('Photo equipe du recrutement'),
    t('Page'),
  );
  $export['recrutement'] = $view;

  $view = new view();
  $view->name = 'secteur';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'secteur';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'secteur';
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
  /* Champ: Contenu: article assurance */
  $handler->display->display_options['fields']['field_article_assurance_secteur']['id'] = 'field_article_assurance_secteur';
  $handler->display->display_options['fields']['field_article_assurance_secteur']['table'] = 'field_data_field_article_assurance_secteur';
  $handler->display->display_options['fields']['field_article_assurance_secteur']['field'] = 'field_article_assurance_secteur';
  $handler->display->display_options['fields']['field_article_assurance_secteur']['delta_offset'] = '0';
  /* Champ: Contenu: Article banque */
  $handler->display->display_options['fields']['field_article_banque_scteur']['id'] = 'field_article_banque_scteur';
  $handler->display->display_options['fields']['field_article_banque_scteur']['table'] = 'field_data_field_article_banque_scteur';
  $handler->display->display_options['fields']['field_article_banque_scteur']['field'] = 'field_article_banque_scteur';
  $handler->display->display_options['fields']['field_article_banque_scteur']['delta_offset'] = '0';
  /* Champ: Contenu: article industrie */
  $handler->display->display_options['fields']['field_article_industrie_secteur']['id'] = 'field_article_industrie_secteur';
  $handler->display->display_options['fields']['field_article_industrie_secteur']['table'] = 'field_data_field_article_industrie_secteur';
  $handler->display->display_options['fields']['field_article_industrie_secteur']['field'] = 'field_article_industrie_secteur';
  $handler->display->display_options['fields']['field_article_industrie_secteur']['delta_offset'] = '0';
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corps';
  /* Champ: Contenu: en savoir plus */
  $handler->display->display_options['fields']['field_en_savoir_plus_assurance']['id'] = 'field_en_savoir_plus_assurance';
  $handler->display->display_options['fields']['field_en_savoir_plus_assurance']['table'] = 'field_data_field_en_savoir_plus_assurance';
  $handler->display->display_options['fields']['field_en_savoir_plus_assurance']['field'] = 'field_en_savoir_plus_assurance';
  /* Champ: Contenu: en savoir plus */
  $handler->display->display_options['fields']['field_en_savoir_plus_secteur']['id'] = 'field_en_savoir_plus_secteur';
  $handler->display->display_options['fields']['field_en_savoir_plus_secteur']['table'] = 'field_data_field_en_savoir_plus_secteur';
  $handler->display->display_options['fields']['field_en_savoir_plus_secteur']['field'] = 'field_en_savoir_plus_secteur';
  /* Champ: Contenu: en savoir plus */
  $handler->display->display_options['fields']['field_en_savoir_plusbanque']['id'] = 'field_en_savoir_plusbanque';
  $handler->display->display_options['fields']['field_en_savoir_plusbanque']['table'] = 'field_data_field_en_savoir_plusbanque';
  $handler->display->display_options['fields']['field_en_savoir_plusbanque']['field'] = 'field_en_savoir_plusbanque';
  /* Champ: Contenu: Image */
  $handler->display->display_options['fields']['field_image_industri_secteur']['id'] = 'field_image_industri_secteur';
  $handler->display->display_options['fields']['field_image_industri_secteur']['table'] = 'field_data_field_image_industri_secteur';
  $handler->display->display_options['fields']['field_image_industri_secteur']['field'] = 'field_image_industri_secteur';
  $handler->display->display_options['fields']['field_image_industri_secteur']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_industri_secteur']['settings'] = array(
    'image_style' => 'industrie_services_secteur',
    'image_link' => '',
  );
  /* Champ: Contenu: image assurance */
  $handler->display->display_options['fields']['field_image_assurance_secteur']['id'] = 'field_image_assurance_secteur';
  $handler->display->display_options['fields']['field_image_assurance_secteur']['table'] = 'field_data_field_image_assurance_secteur';
  $handler->display->display_options['fields']['field_image_assurance_secteur']['field'] = 'field_image_assurance_secteur';
  $handler->display->display_options['fields']['field_image_assurance_secteur']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_assurance_secteur']['settings'] = array(
    'image_style' => 'assurances_secteur',
    'image_link' => '',
  );
  /* Champ: Contenu: Image banque */
  $handler->display->display_options['fields']['field_image_banque']['id'] = 'field_image_banque';
  $handler->display->display_options['fields']['field_image_banque']['table'] = 'field_data_field_image_banque';
  $handler->display->display_options['fields']['field_image_banque']['field'] = 'field_image_banque';
  $handler->display->display_options['fields']['field_image_banque']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_banque']['settings'] = array(
    'image_style' => 'banques_finances_scteur',
    'image_link' => '',
  );
  /* Champ: Contenu: Image produit */
  $handler->display->display_options['fields']['field_image_produit']['id'] = 'field_image_produit';
  $handler->display->display_options['fields']['field_image_produit']['table'] = 'field_data_field_image_produit';
  $handler->display->display_options['fields']['field_image_produit']['field'] = 'field_image_produit';
  $handler->display->display_options['fields']['field_image_produit']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_produit']['settings'] = array(
    'image_style' => 'produit_secteur',
    'image_link' => '',
  );
  /* Champ: Contenu: image secteur */
  $handler->display->display_options['fields']['field_image_secteur']['id'] = 'field_image_secteur';
  $handler->display->display_options['fields']['field_image_secteur']['table'] = 'field_data_field_image_secteur';
  $handler->display->display_options['fields']['field_image_secteur']['field'] = 'field_image_secteur';
  $handler->display->display_options['fields']['field_image_secteur']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_secteur']['settings'] = array(
    'image_style' => 'image_secteur',
    'image_link' => '',
  );
  /* Champ: Contenu: Produit secteur */
  $handler->display->display_options['fields']['field_produit_secteur']['id'] = 'field_produit_secteur';
  $handler->display->display_options['fields']['field_produit_secteur']['table'] = 'field_data_field_produit_secteur';
  $handler->display->display_options['fields']['field_produit_secteur']['field'] = 'field_produit_secteur';
  $handler->display->display_options['fields']['field_produit_secteur']['delta_offset'] = '0';
  /* Champ: Contenu: Savoir plus */
  $handler->display->display_options['fields']['field_savoir_plus_produits']['id'] = 'field_savoir_plus_produits';
  $handler->display->display_options['fields']['field_savoir_plus_produits']['table'] = 'field_data_field_savoir_plus_produits';
  $handler->display->display_options['fields']['field_savoir_plus_produits']['field'] = 'field_savoir_plus_produits';
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
    'secteurs' => 'secteurs',
  );
  /* Filter criterion: Contenu: Mettre en avant (field_mettre_en_avant_secteur) */
  $handler->display->display_options['filters']['field_mettre_en_avant_secteur_value']['id'] = 'field_mettre_en_avant_secteur_value';
  $handler->display->display_options['filters']['field_mettre_en_avant_secteur_value']['table'] = 'field_data_field_mettre_en_avant_secteur';
  $handler->display->display_options['filters']['field_mettre_en_avant_secteur_value']['field'] = 'field_mettre_en_avant_secteur_value';
  $handler->display->display_options['filters']['field_mettre_en_avant_secteur_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'secteur';
  $translatables['secteur'] = array(
    t('Master'),
    t('secteur'),
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
    t('article assurance'),
    t('Article banque'),
    t('article industrie'),
    t('Corps'),
    t('en savoir plus'),
    t('Image'),
    t('image assurance'),
    t('Image banque'),
    t('Image produit'),
    t('image secteur'),
    t('Produit secteur'),
    t('Savoir plus'),
    t('Page'),
  );
  $export['secteur'] = $view;

  $view = new view();
  $view->name = 'suivi_de_carriere';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Suivi de carrière';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Suivi de carrière';
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
  /* Champ: Contenu: en savoir plus shema */
  $handler->display->display_options['fields']['field_en_savoir_shema_integratio']['id'] = 'field_en_savoir_shema_integratio';
  $handler->display->display_options['fields']['field_en_savoir_shema_integratio']['table'] = 'field_data_field_en_savoir_shema_integratio';
  $handler->display->display_options['fields']['field_en_savoir_shema_integratio']['field'] = 'field_en_savoir_shema_integratio';
  $handler->display->display_options['fields']['field_en_savoir_shema_integratio']['delta_offset'] = '0';
  /* Champ: Contenu: schéma Intégration */
  $handler->display->display_options['fields']['field_schema_integration']['id'] = 'field_schema_integration';
  $handler->display->display_options['fields']['field_schema_integration']['table'] = 'field_data_field_schema_integration';
  $handler->display->display_options['fields']['field_schema_integration']['field'] = 'field_schema_integration';
  $handler->display->display_options['fields']['field_schema_integration']['delta_offset'] = '0';
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corps';
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
    'rejoignez_nous_suivi_de_carriere' => 'rejoignez_nous_suivi_de_carriere',
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
  $handler->display->display_options['path'] = 'suivi-de-carriere';
  $translatables['suivi_de_carriere'] = array(
    t('Master'),
    t('Suivi de carrière'),
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
    t('en savoir plus shema'),
    t('schéma Intégration'),
    t('Corps'),
    t('Page'),
  );
  $export['suivi_de_carriere'] = $view;

  $view = new view();
  $view->name = 'uti_en_bref';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Groupe uti en bref';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Groupe uti en bref';
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
  /* Champ: Contenu: Date 1 */
  $handler->display->display_options['fields']['field_date_1_groupe']['id'] = 'field_date_1_groupe';
  $handler->display->display_options['fields']['field_date_1_groupe']['table'] = 'field_data_field_date_1_groupe';
  $handler->display->display_options['fields']['field_date_1_groupe']['field'] = 'field_date_1_groupe';
  $handler->display->display_options['fields']['field_date_1_groupe']['delta_offset'] = '0';
  /* Champ: Contenu: Date 2 */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date_2';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['delta_offset'] = '0';
  /* Champ: Contenu: Date 3 */
  $handler->display->display_options['fields']['field_date_3_groupe']['id'] = 'field_date_3_groupe';
  $handler->display->display_options['fields']['field_date_3_groupe']['table'] = 'field_data_field_date_3_groupe';
  $handler->display->display_options['fields']['field_date_3_groupe']['field'] = 'field_date_3_groupe';
  $handler->display->display_options['fields']['field_date_3_groupe']['delta_offset'] = '0';
  /* Champ: Contenu: Date 4 */
  $handler->display->display_options['fields']['field_date_4_groupe']['id'] = 'field_date_4_groupe';
  $handler->display->display_options['fields']['field_date_4_groupe']['table'] = 'field_data_field_date_4_groupe';
  $handler->display->display_options['fields']['field_date_4_groupe']['field'] = 'field_date_4_groupe';
  $handler->display->display_options['fields']['field_date_4_groupe']['delta_offset'] = '0';
  /* Champ: Contenu: Le mot du président */
  $handler->display->display_options['fields']['field_mot_president_groupe']['id'] = 'field_mot_president_groupe';
  $handler->display->display_options['fields']['field_mot_president_groupe']['table'] = 'field_data_field_mot_president_groupe';
  $handler->display->display_options['fields']['field_mot_president_groupe']['field'] = 'field_mot_president_groupe';
  /* Champ: Contenu: Photo */
  $handler->display->display_options['fields']['field_photo_groupe']['id'] = 'field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['table'] = 'field_data_field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['field'] = 'field_photo_groupe';
  $handler->display->display_options['fields']['field_photo_groupe']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_groupe']['settings'] = array(
    'image_style' => 'photo_uti_bref',
    'image_link' => '',
  );
  /* Champ: Contenu: Savoir plus Date 1 */
  $handler->display->display_options['fields']['field_savoir_plus_date1']['id'] = 'field_savoir_plus_date1';
  $handler->display->display_options['fields']['field_savoir_plus_date1']['table'] = 'field_data_field_savoir_plus_date1';
  $handler->display->display_options['fields']['field_savoir_plus_date1']['field'] = 'field_savoir_plus_date1';
  /* Champ: Contenu: Savoir plus Date 2 */
  $handler->display->display_options['fields']['field_savoir_plus_date_2']['id'] = 'field_savoir_plus_date_2';
  $handler->display->display_options['fields']['field_savoir_plus_date_2']['table'] = 'field_data_field_savoir_plus_date_2';
  $handler->display->display_options['fields']['field_savoir_plus_date_2']['field'] = 'field_savoir_plus_date_2';
  /* Champ: Contenu: Savoir plus Date 3 */
  $handler->display->display_options['fields']['field_savoir_plus_date_3']['id'] = 'field_savoir_plus_date_3';
  $handler->display->display_options['fields']['field_savoir_plus_date_3']['table'] = 'field_data_field_savoir_plus_date_3';
  $handler->display->display_options['fields']['field_savoir_plus_date_3']['field'] = 'field_savoir_plus_date_3';
  /* Champ: Contenu: Savoir plus Date 4 */
  $handler->display->display_options['fields']['field_savoir_plus_date_4']['id'] = 'field_savoir_plus_date_4';
  $handler->display->display_options['fields']['field_savoir_plus_date_4']['table'] = 'field_data_field_savoir_plus_date_4';
  $handler->display->display_options['fields']['field_savoir_plus_date_4']['field'] = 'field_savoir_plus_date_4';
  /* Champ: Contenu: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = 'Corps';
  $handler->display->display_options['fields']['body_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body_1']['settings'] = array(
    'trim_length' => '600',
  );
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
    'groupe_uti_en_bref' => 'groupe_uti_en_bref',
  );
  /* Filter criterion: Contenu: Mettre en avant (field_mettre_en_avan_groupet) */
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['id'] = 'field_mettre_en_avan_groupet_value';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['table'] = 'field_data_field_mettre_en_avan_groupet';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['field'] = 'field_mettre_en_avan_groupet_value';
  $handler->display->display_options['filters']['field_mettre_en_avan_groupet_value']['value'] = array(
    0 => '0',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'uti-en-bref';
  $translatables['uti_en_bref'] = array(
    t('Master'),
    t('Groupe uti en bref'),
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
    t('Date 1'),
    t('Date 2'),
    t('Date 3'),
    t('Date 4'),
    t('Le mot du président'),
    t('Photo'),
    t('Savoir plus Date 1'),
    t('Savoir plus Date 2'),
    t('Savoir plus Date 3'),
    t('Savoir plus Date 4'),
    t('Page'),
  );
  $export['uti_en_bref'] = $view;

  $view = new view();
  $view->name = 'vie_dans_lentreprise';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Vie dans l\'entreprise';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vie dans l\'entreprise';
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
  /* Champ: Contenu: en savoir plus shema */
  $handler->display->display_options['fields']['field_savoir_plus_shema_entrepri']['id'] = 'field_savoir_plus_shema_entrepri';
  $handler->display->display_options['fields']['field_savoir_plus_shema_entrepri']['table'] = 'field_data_field_savoir_plus_shema_entrepri';
  $handler->display->display_options['fields']['field_savoir_plus_shema_entrepri']['field'] = 'field_savoir_plus_shema_entrepri';
  $handler->display->display_options['fields']['field_savoir_plus_shema_entrepri']['delta_offset'] = '0';
  /* Champ: Contenu: schéma entreprise */
  $handler->display->display_options['fields']['field_schema_entreprise']['id'] = 'field_schema_entreprise';
  $handler->display->display_options['fields']['field_schema_entreprise']['table'] = 'field_data_field_schema_entreprise';
  $handler->display->display_options['fields']['field_schema_entreprise']['field'] = 'field_schema_entreprise';
  $handler->display->display_options['fields']['field_schema_entreprise']['delta_offset'] = '0';
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
    'rejoignez_nous_vie_entreprise' => 'rejoignez_nous_vie_entreprise',
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
  $handler->display->display_options['path'] = 'vie-dans-lentreprise';
  $translatables['vie_dans_lentreprise'] = array(
    t('Master'),
    t('Vie dans l\'entreprise'),
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
    t('en savoir plus shema'),
    t('schéma entreprise'),
    t('Page'),
  );
  $export['vie_dans_lentreprise'] = $view;

  return $export;
}
