<?php
/**
 * @file
 * jpec_founders_club.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jpec_founders_club_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'founders_club_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Founders Club Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Past Founders Club Businesses';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro text';
  $handler->display->display_options['header']['area']['content'] = 'Founders Club is a business incubator for students pursuing the creation of a startup while attending The University of Iowa. Individual students and teams in the program have access to dedicated office space in the remodeled 10,000 square-foot Bedell Entrepreneurship Learning Laboratory (BELL), enabling them to concentrate on developing their business concepts.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_founders_profile_body']['id'] = 'field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['table'] = 'field_data_field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['field'] = 'field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['label'] = '';
  $handler->display->display_options['fields']['field_founders_profile_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_founders_profile_body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Page Title (field_page_title) */
  $handler->display->display_options['sorts']['field_page_title_value']['id'] = 'field_page_title_value';
  $handler->display->display_options['sorts']['field_page_title_value']['table'] = 'field_data_field_page_title';
  $handler->display->display_options['sorts']['field_page_title_value']['field'] = 'field_page_title_value';
  $handler->display->display_options['sorts']['field_page_title_value']['expose']['label'] = 'Search';
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
    'founders_profile' => 'founders_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_founder_profile_category) */
  $handler->display->display_options['filters']['field_founder_profile_category_value']['id'] = 'field_founder_profile_category_value';
  $handler->display->display_options['filters']['field_founder_profile_category_value']['table'] = 'field_data_field_founder_profile_category';
  $handler->display->display_options['filters']['field_founder_profile_category_value']['field'] = 'field_founder_profile_category_value';
  $handler->display->display_options['filters']['field_founder_profile_category_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_founder_profile_category_value']['value'] = array(
    'current' => 'current',
  );
  $handler->display->display_options['filters']['field_founder_profile_category_value']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_founders_profile_body' => 'field_founders_profile_body',
  );

  /* Display: Current */
  $handler = $view->new_display('page', 'Current', 'founders_club_current_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current Founders Club Businesses';
  $handler->display->display_options['path'] = 'founders-club/current';
  $handler->display->display_options['menu']['title'] = 'Current Founders Club Businesses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Past */
  $handler = $view->new_display('page', 'Past', 'founders_club_past_page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro text';
  $handler->display->display_options['header']['area']['content'] = 'PAST PARTICIPANTS INTRO TEXT
Founders Club is a business incubator for students pursuing the creation of a startup while attending The University of Iowa. Individual students and teams in the program have access to dedicated office space in the remodeled 10,000 square-foot Bedell Entrepreneurship Learning Laboratory (BELL), enabling them to concentrate on developing their business concepts.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
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
    'founders_profile' => 'founders_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_founder_profile_category) */
  $handler->display->display_options['filters']['field_founder_profile_category_value']['id'] = 'field_founder_profile_category_value';
  $handler->display->display_options['filters']['field_founder_profile_category_value']['table'] = 'field_data_field_founder_profile_category';
  $handler->display->display_options['filters']['field_founder_profile_category_value']['field'] = 'field_founder_profile_category_value';
  $handler->display->display_options['filters']['field_founder_profile_category_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_founder_profile_category_value']['value'] = array(
    'past' => 'past',
  );
  $handler->display->display_options['filters']['field_founder_profile_category_value']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_founders_profile_body' => 'field_founders_profile_body',
  );
  $handler->display->display_options['path'] = 'founders-club/past';
  $handler->display->display_options['menu']['title'] = 'Current Founders Club Businesses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['founders_club_profiles'] = $view;

  return $export;
}
