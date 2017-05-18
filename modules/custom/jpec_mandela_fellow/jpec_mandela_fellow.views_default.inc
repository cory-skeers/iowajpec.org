<?php
/**
 * @file
 * jpec_mandela_fellow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jpec_mandela_fellow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'mandela_fellows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mandela Fellows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Year */
  $handler->display->display_options['fields']['field_mwf_year']['id'] = 'field_mwf_year';
  $handler->display->display_options['fields']['field_mwf_year']['table'] = 'field_data_field_mwf_year';
  $handler->display->display_options['fields']['field_mwf_year']['field'] = 'field_mwf_year';
  $handler->display->display_options['fields']['field_mwf_year']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Last name (field_mwf_last_name) */
  $handler->display->display_options['sorts']['field_mwf_last_name_value']['id'] = 'field_mwf_last_name_value';
  $handler->display->display_options['sorts']['field_mwf_last_name_value']['table'] = 'field_data_field_mwf_last_name';
  $handler->display->display_options['sorts']['field_mwf_last_name_value']['field'] = 'field_mwf_last_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mandela_fellow' => 'mandela_fellow',
  );
  /* Filter criterion: Content: Year (field_mwf_year) */
  $handler->display->display_options['filters']['field_mwf_year_tid']['id'] = 'field_mwf_year_tid';
  $handler->display->display_options['filters']['field_mwf_year_tid']['table'] = 'field_data_field_mwf_year';
  $handler->display->display_options['filters']['field_mwf_year_tid']['field'] = 'field_mwf_year_tid';
  $handler->display->display_options['filters']['field_mwf_year_tid']['value'] = '';
  $handler->display->display_options['filters']['field_mwf_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mwf_year_tid']['expose']['operator_id'] = 'field_mwf_year_tid_op';
  $handler->display->display_options['filters']['field_mwf_year_tid']['expose']['label'] = 'Filter by year';
  $handler->display->display_options['filters']['field_mwf_year_tid']['expose']['operator'] = 'field_mwf_year_tid_op';
  $handler->display->display_options['filters']['field_mwf_year_tid']['expose']['identifier'] = 'year';
  $handler->display->display_options['filters']['field_mwf_year_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_mwf_year_tid']['group_info']['label'] = 'Year';
  $handler->display->display_options['filters']['field_mwf_year_tid']['group_info']['identifier'] = 'field_mwf_year_tid';
  $handler->display->display_options['filters']['field_mwf_year_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    2 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
    3 => array(
      'title' => '',
      'operator' => 'or',
      'value' => '',
    ),
  );
  $handler->display->display_options['filters']['field_mwf_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_mwf_year_tid']['vocabulary'] = 'fellow_year';

  /* Display: Fellows Content Pane */
  $handler = $view->new_display('panel_pane', 'Fellows Content Pane', 'fellows_pane');
  $export['mandela_fellows'] = $view;

  return $export;
}
