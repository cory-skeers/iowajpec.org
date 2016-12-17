<?php
/**
 * @file
 * jpec_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jpec_person_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faculty_staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Faculty/Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faculty and staff directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Last name (field_person_lname) */
  $handler->display->display_options['sorts']['field_person_lname_value']['id'] = 'field_person_lname_value';
  $handler->display->display_options['sorts']['field_person_lname_value']['table'] = 'field_data_field_person_lname';
  $handler->display->display_options['sorts']['field_person_lname_value']['field'] = 'field_person_lname_value';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Category (field_person_categories) */
  $handler->display->display_options['filters']['field_person_categories_tid']['id'] = 'field_person_categories_tid';
  $handler->display->display_options['filters']['field_person_categories_tid']['table'] = 'field_data_field_person_categories';
  $handler->display->display_options['filters']['field_person_categories_tid']['field'] = 'field_person_categories_tid';
  $handler->display->display_options['filters']['field_person_categories_tid']['value'] = array(
    0 => '55',
  );
  $handler->display->display_options['filters']['field_person_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_categories_tid']['vocabulary'] = 'person_categories';

  /* Display: Staff */
  $handler = $view->new_display('page', 'Staff', 'staff_page');
  $handler->display->display_options['path'] = 'faculty-staff/staff';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Staff';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Faculty/Staff';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Lecturers */
  $handler = $view->new_display('page', 'Lecturers', 'lecturers_page');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_person_lname) */
  $handler->display->display_options['sorts']['field_person_lname_value']['id'] = 'field_person_lname_value';
  $handler->display->display_options['sorts']['field_person_lname_value']['table'] = 'field_data_field_person_lname';
  $handler->display->display_options['sorts']['field_person_lname_value']['field'] = 'field_person_lname_value';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Category (field_person_categories) */
  $handler->display->display_options['filters']['field_person_categories_tid']['id'] = 'field_person_categories_tid';
  $handler->display->display_options['filters']['field_person_categories_tid']['table'] = 'field_data_field_person_categories';
  $handler->display->display_options['filters']['field_person_categories_tid']['field'] = 'field_person_categories_tid';
  $handler->display->display_options['filters']['field_person_categories_tid']['value'] = array(
    0 => '56',
  );
  $handler->display->display_options['filters']['field_person_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_categories_tid']['vocabulary'] = 'person_categories';
  $handler->display->display_options['path'] = 'faculty-staff/lecturers';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Lecturers';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Faculty/Staff';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Advisory Council */
  $handler = $view->new_display('page', 'Advisory Council', 'advisory_council_page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_person_title']['id'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['table'] = 'field_data_field_person_title';
  $handler->display->display_options['fields']['field_person_title']['field'] = 'field_person_title';
  $handler->display->display_options['fields']['field_person_title']['label'] = '';
  $handler->display->display_options['fields']['field_person_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Last name (field_person_lname) */
  $handler->display->display_options['sorts']['field_person_lname_value']['id'] = 'field_person_lname_value';
  $handler->display->display_options['sorts']['field_person_lname_value']['table'] = 'field_data_field_person_lname';
  $handler->display->display_options['sorts']['field_person_lname_value']['field'] = 'field_person_lname_value';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: Category (field_person_categories) */
  $handler->display->display_options['filters']['field_person_categories_tid']['id'] = 'field_person_categories_tid';
  $handler->display->display_options['filters']['field_person_categories_tid']['table'] = 'field_data_field_person_categories';
  $handler->display->display_options['filters']['field_person_categories_tid']['field'] = 'field_person_categories_tid';
  $handler->display->display_options['filters']['field_person_categories_tid']['value'] = array(
    0 => '57',
  );
  $handler->display->display_options['filters']['field_person_categories_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_person_categories_tid']['vocabulary'] = 'person_categories';
  $handler->display->display_options['path'] = 'faculty-staff/advisory-council';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Advisory Council';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Faculty/Staff';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['faculty_staff'] = $view;

  return $export;
}
