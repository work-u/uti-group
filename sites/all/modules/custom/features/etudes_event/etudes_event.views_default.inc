<?php
/**
 * @file
 * etudes_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function etudes_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events_education_highlighted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'À la une études et évènements ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'À la une études et évènements ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<img src="[field_image]" alt="[field_image-title]" class="img-responsive">';
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['preserve_tags'] = '<img>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'style_a_la_une',
    'image_link' => '',
  );
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Critère de tri: Workbench Moderation : Horodatage */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : À la une Études et évènements (field_front_page_studies_events) */
  $handler->display->display_options['filters']['field_front_page_studies_events_value']['id'] = 'field_front_page_studies_events_value';
  $handler->display->display_options['filters']['field_front_page_studies_events_value']['table'] = 'field_data_field_front_page_studies_events';
  $handler->display->display_options['filters']['field_front_page_studies_events_value']['field'] = 'field_front_page_studies_events_value';
  $handler->display->display_options['filters']['field_front_page_studies_events_value']['value'] = array(
    1 => '1',
  );
  /* Critère de filtrage: Workbench Moderation : Publié */
  $handler->display->display_options['filters']['published']['id'] = 'published';
  $handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['published']['field'] = 'published';
  $handler->display->display_options['filters']['published']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['events_education_highlighted'] = array(
    t('Master'),
    t('À la une études et évènements '),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Titre'),
    t('<img src="[field_image]" alt="[field_image-title]" class="img-responsive">'),
    t('Corps'),
    t('Block'),
  );
  $export['events_education_highlighted'] = $view;

  $view = new view();
  $view->name = 'last_event_in_education';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'derniere evenement dans l\'etude';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'derniere evenement dans l\'etude';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_image' => 'field_image',
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
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'block_evenement_etudes-event',
    'image_link' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Critère de tri: Workbench Moderation : Horodatage */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Critère de filtrage: Workbench Moderation : Publié */
  $handler->display->display_options['filters']['published']['id'] = 'published';
  $handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['published']['field'] = 'published';
  $handler->display->display_options['filters']['published']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['last_event_in_education'] = array(
    t('Master'),
    t('derniere evenement dans l\'etude'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Corps'),
    t('Image'),
    t('Titre'),
    t('Block'),
  );
  $export['last_event_in_education'] = $view;

  $view = new view();
  $view->name = 'last_figure';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dernière chiffre';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dernière chiffre';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'accueil_image_one_312_95',
    'image_link' => '',
  );
  /* Critère de tri: Workbench Moderation : Horodatage */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['order'] = 'DESC';
  /* Critère de filtrage: Workbench Moderation : Publié */
  $handler->display->display_options['filters']['published']['id'] = 'published';
  $handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['published']['field'] = 'published';
  $handler->display->display_options['filters']['published']['value'] = '1';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'turnover' => 'turnover',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['last_figure'] = array(
    t('Master'),
    t('Dernière chiffre'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Titre'),
    t('Corps'),
    t('Nid'),
    t('Image'),
    t('Block'),
  );
  $export['last_figure'] = $view;

  $view = new view();
  $view->name = 'latest_legal_point';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Point juridique le plus récent (Études et évènements)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Point juridique le plus récent (Études et évènements)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Critère de tri: Workbench Moderation : Horodatage */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['order'] = 'DESC';
  /* Critère de filtrage: Workbench Moderation : Publié */
  $handler->display->display_options['filters']['published']['id'] = 'published';
  $handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['published']['field'] = 'published';
  $handler->display->display_options['filters']['published']['value'] = '1';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'point' => 'point',
  );
  /* Critère de filtrage: Contenu : Catégorie (field_point_type) */
  $handler->display->display_options['filters']['field_point_type_tid']['id'] = 'field_point_type_tid';
  $handler->display->display_options['filters']['field_point_type_tid']['table'] = 'field_data_field_point_type';
  $handler->display->display_options['filters']['field_point_type_tid']['field'] = 'field_point_type_tid';
  $handler->display->display_options['filters']['field_point_type_tid']['value'] = array(
    0 => '1',
  );
  $handler->display->display_options['filters']['field_point_type_tid']['vocabulary'] = 'points_types';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['latest_legal_point'] = array(
    t('Master'),
    t('Point juridique le plus récent (Études et évènements)'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Titre'),
    t('Corps'),
    t('Block'),
  );
  $export['latest_legal_point'] = $view;

  $view = new view();
  $view->name = 'our_statistics_etudes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'nos statistiques (Études et évènements)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'nos statistiques (Études et évènements)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Champ: Contenu : Lien */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '500',
  );
  /* Champ: Contenu : Fichier */
  $handler->display->display_options['fields']['field_dataset_file']['id'] = 'field_dataset_file';
  $handler->display->display_options['fields']['field_dataset_file']['table'] = 'field_data_field_dataset_file';
  $handler->display->display_options['fields']['field_dataset_file']['field'] = 'field_dataset_file';
  $handler->display->display_options['fields']['field_dataset_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dataset_file']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_dataset_file']['delta_offset'] = '0';
  /* Critère de tri: Workbench Moderation : Horodatage */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['order'] = 'DESC';
  /* Critère de filtrage: Workbench Moderation : Publié */
  $handler->display->display_options['filters']['published']['id'] = 'published';
  $handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['published']['field'] = 'published';
  $handler->display->display_options['filters']['published']['value'] = '1';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['our_statistics_etudes'] = array(
    t('Master'),
    t('nos statistiques (Études et évènements)'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Titre'),
    t('Nid'),
    t('Fichier'),
    t('Block'),
  );
  $export['our_statistics_etudes'] = $view;

  $view = new view();
  $view->name = 'page_etude_evenement_mot_cl_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Page etude evenement - Mot Clé';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Page etude evenement - Mot Clé';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Champ: Terme de taxonomie : Identifiant (ID) du terme */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['tid']['alter']['text'] = '<a href="/liste-contenu/[tid]" class="tag">[name]</a>';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Critère de tri: Terme de taxonomie : Nom */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Critère de filtrage: Vocabulaire de taxonomie : Nom système */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'tags' => 'tags',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['page_etude_evenement_mot_cl_'] = array(
    t('Master'),
    t('Page etude evenement - Mot Clé'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Nom'),
    t('<a href="/liste-contenu/[tid]" class="tag">[name]</a>'),
    t('.'),
    t('Block'),
  );
  $export['page_etude_evenement_mot_cl_'] = $view;

  $view = new view();
  $view->name = 'publication_our_other_studies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publication autre nos études ';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publication autre nos études ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu : Sous-titre */
  $handler->display->display_options['fields']['field_subtitre']['id'] = 'field_subtitre';
  $handler->display->display_options['fields']['field_subtitre']['table'] = 'field_data_field_subtitre';
  $handler->display->display_options['fields']['field_subtitre']['field'] = 'field_subtitre';
  $handler->display->display_options['fields']['field_subtitre']['label'] = '';
  $handler->display->display_options['fields']['field_subtitre']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitre']['type'] = 'text_plain';
  /* Champ: Contenu : Date de publication */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'qrs_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Critère de tri: Workbench Moderation : Horodatage */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['order'] = 'DESC';
  /* Critère de filtrage: Workbench Moderation : Publié */
  $handler->display->display_options['filters']['published']['id'] = 'published';
  $handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['published']['field'] = 'published';
  $handler->display->display_options['filters']['published']['value'] = '1';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Critère de filtrage: Contenu : Type publication (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_value']['id'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_value']['field'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['value'] = array(
    'Autres études' => 'Autres études',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['publication_our_other_studies'] = array(
    t('Master'),
    t('Publication autre nos études '),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Date de publication'),
    t('Nid'),
    t('Block'),
  );
  $export['publication_our_other_studies'] = $view;

  $view = new view();
  $view->name = 'qr_s';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'QR&S';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'QR&S';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<img src="[field_image]" alt="[field_image-title] " class="img-responsive">';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'url_type' => '1',
    'image_style' => 'qr_s',
    'image_link' => '',
  );
  /* Champ: Contenu : Date de publication */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'qrs_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Sous-titre */
  $handler->display->display_options['fields']['field_subtitre']['id'] = 'field_subtitre';
  $handler->display->display_options['fields']['field_subtitre']['table'] = 'field_data_field_subtitre';
  $handler->display->display_options['fields']['field_subtitre']['field'] = 'field_subtitre';
  $handler->display->display_options['fields']['field_subtitre']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_subtitre']['alter']['absolute'] = TRUE;
  /* Champ: Contenu : Corps */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Champ: Contenu : Type publication */
  $handler->display->display_options['fields']['field_publication_type']['id'] = 'field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['fields']['field_publication_type']['field'] = 'field_publication_type';
  /* Critère de tri: Workbench Moderation : Horodatage */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Type publication (field_publication_type) */
  $handler->display->display_options['filters']['field_publication_type_value']['id'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['table'] = 'field_data_field_publication_type';
  $handler->display->display_options['filters']['field_publication_type_value']['field'] = 'field_publication_type_value';
  $handler->display->display_options['filters']['field_publication_type_value']['value'] = array(
    'QRS cahiers' => 'QRS cahiers',
    'QRS études' => 'QRS études',
  );
  /* Critère de filtrage: Workbench Moderation : Publié */
  $handler->display->display_options['filters']['published']['id'] = 'published';
  $handler->display->display_options['filters']['published']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['published']['field'] = 'published';
  $handler->display->display_options['filters']['published']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['qr_s'] = array(
    t('Master'),
    t('QR&S'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Titre'),
    t('Image'),
    t('<img src="[field_image]" alt="[field_image-title] " class="img-responsive">'),
    t('Date de publication'),
    t('Sous-titre'),
    t('Corps'),
    t('Nid'),
    t('Type publication'),
    t('Block'),
  );
  $export['qr_s'] = $view;

  return $export;
}
