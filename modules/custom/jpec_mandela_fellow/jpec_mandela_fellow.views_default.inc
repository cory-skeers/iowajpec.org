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
  /* Sort criterion: Content: Year (field_mwf_year) */
  $handler->display->display_options['sorts']['field_mwf_year_tid']['id'] = 'field_mwf_year_tid';
  $handler->display->display_options['sorts']['field_mwf_year_tid']['table'] = 'field_data_field_mwf_year';
  $handler->display->display_options['sorts']['field_mwf_year_tid']['field'] = 'field_mwf_year_tid';
  $handler->display->display_options['sorts']['field_mwf_year_tid']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['field_mwf_year_tid']['value'] = array(
    1051 => '1051',
  );
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
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Fellow by year pane */
  $handler = $view->new_display('panel_pane', 'Fellow by year pane', 'fellows_by_year_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meet the fellows';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Meet the fellows';
  $handler->display->display_options['header']['area']['content'] = '<h3>Meet the fellows</h3>';
  $handler->display->display_options['header']['area']['format'] = 'imported_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Year (field_mwf_year) */
  $handler->display->display_options['arguments']['field_mwf_year_tid']['id'] = 'field_mwf_year_tid';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['table'] = 'field_data_field_mwf_year';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['field'] = 'field_mwf_year_tid';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_mwf_year_tid']['title'] = '%1 year';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_mwf_year_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['validate_options']['vocabularies'] = array(
    'fellow_year' => 'fellow_year',
  );
  $handler->display->display_options['arguments']['field_mwf_year_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_mwf_year_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['argument_input'] = array(
    'field_mwf_year_tid' => array(
      'type' => 'context',
      'context' => 'node_edit_form.field-mwf-year',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Year (field_mwf_year)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['mandela_fellows'] = $view;

  return $export;
}
