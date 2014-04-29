<?php

/**
 * @file
 * Default views.
 */

/**
 * Implements hook_views_default_views().
 */
function recruit_application_views_default_views() {
  $views = array();

  $view = new view();
  $view->name = 'recruit_application_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'recruit_application';
  $view->human_name = 'Application list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer recruit_application entities';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'recruit_application_first_name' => 'recruit_application_first_name',
    'recruit_application_last_name' => 'recruit_application_last_name',
    'recruit_application_job' => 'recruit_application_job',
    'created' => 'created',
    'url' => 'url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'recruit_application_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'recruit_application_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'recruit_application_job' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No applications.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Application: First name */
  $handler->display->display_options['fields']['recruit_application_first_name']['id'] = 'recruit_application_first_name';
  $handler->display->display_options['fields']['recruit_application_first_name']['table'] = 'field_data_recruit_application_first_name';
  $handler->display->display_options['fields']['recruit_application_first_name']['field'] = 'recruit_application_first_name';
  /* Field: Application: Last name */
  $handler->display->display_options['fields']['recruit_application_last_name']['id'] = 'recruit_application_last_name';
  $handler->display->display_options['fields']['recruit_application_last_name']['table'] = 'field_data_recruit_application_last_name';
  $handler->display->display_options['fields']['recruit_application_last_name']['field'] = 'recruit_application_last_name';
  /* Field: Application: Job */
  $handler->display->display_options['fields']['recruit_application_job']['id'] = 'recruit_application_job';
  $handler->display->display_options['fields']['recruit_application_job']['table'] = 'field_data_recruit_application_job';
  $handler->display->display_options['fields']['recruit_application_job']['field'] = 'recruit_application_job';
  $handler->display->display_options['fields']['recruit_application_job']['settings'] = array(
    'link' => 1,
  );
  /* Field: Application: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'recruit_application';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Application: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_recruit_application';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Sort criterion: Application: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'recruit_application';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Application: First name (recruit_application_first_name) */
  $handler->display->display_options['filters']['recruit_application_first_name_value']['id'] = 'recruit_application_first_name_value';
  $handler->display->display_options['filters']['recruit_application_first_name_value']['table'] = 'field_data_recruit_application_first_name';
  $handler->display->display_options['filters']['recruit_application_first_name_value']['field'] = 'recruit_application_first_name_value';
  $handler->display->display_options['filters']['recruit_application_first_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['recruit_application_first_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['recruit_application_first_name_value']['expose']['operator_id'] = 'recruit_application_first_name_value_op';
  $handler->display->display_options['filters']['recruit_application_first_name_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['recruit_application_first_name_value']['expose']['operator'] = 'recruit_application_first_name_value_op';
  $handler->display->display_options['filters']['recruit_application_first_name_value']['expose']['identifier'] = 'first_name';
  $handler->display->display_options['filters']['recruit_application_first_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Application: Last name (recruit_application_last_name) */
  $handler->display->display_options['filters']['recruit_application_last_name_value']['id'] = 'recruit_application_last_name_value';
  $handler->display->display_options['filters']['recruit_application_last_name_value']['table'] = 'field_data_recruit_application_last_name';
  $handler->display->display_options['filters']['recruit_application_last_name_value']['field'] = 'recruit_application_last_name_value';
  $handler->display->display_options['filters']['recruit_application_last_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['recruit_application_last_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['recruit_application_last_name_value']['expose']['operator_id'] = 'recruit_application_last_name_value_op';
  $handler->display->display_options['filters']['recruit_application_last_name_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['recruit_application_last_name_value']['expose']['operator'] = 'recruit_application_last_name_value_op';
  $handler->display->display_options['filters']['recruit_application_last_name_value']['expose']['identifier'] = 'last_name';
  $handler->display->display_options['filters']['recruit_application_last_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/application';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Applications';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $views['recruit_application_list'] = $view;

  return $views;
}
