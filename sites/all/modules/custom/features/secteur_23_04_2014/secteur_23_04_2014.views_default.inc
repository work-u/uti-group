<?php
/**
 * @file
 * secteur_23_04_2014.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function secteur_23_04_2014_views_default_views() {
  $export = array();

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

  return $export;
}
