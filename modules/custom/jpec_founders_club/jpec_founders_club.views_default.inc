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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_founders_profile_student' => 'field_founders_profile_student',
    'field_fp_student_name' => 'field_fp_student_name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro text';
  $handler->display->display_options['header']['area']['content'] = 'Founders Club is a business incubator for students pursuing the creation of a startup while attending The University of Iowa. Individual students and teams in the program have access to dedicated office space in the remodeled 10,000 square-foot Bedell Entrepreneurship Learning Laboratory (BELL), enabling them to concentrate on developing their business concepts.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Student(s) (field_founders_profile_student) */
  $handler->display->display_options['relationships']['field_founders_profile_student_value']['id'] = 'field_founders_profile_student_value';
  $handler->display->display_options['relationships']['field_founders_profile_student_value']['table'] = 'field_data_field_founders_profile_student';
  $handler->display->display_options['relationships']['field_founders_profile_student_value']['field'] = 'field_founders_profile_student_value';
  $handler->display->display_options['relationships']['field_founders_profile_student_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Student(s) */
  $handler->display->display_options['fields']['field_founders_profile_student']['id'] = 'field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['table'] = 'field_data_field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['field'] = 'field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['label'] = '';
  $handler->display->display_options['fields']['field_founders_profile_student']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_student']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_student']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_founders_profile_student']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_founders_profile_student']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_founders_profile_body']['id'] = 'field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['table'] = 'field_data_field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['field'] = 'field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['label'] = '';
  $handler->display->display_options['fields']['field_founders_profile_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_founders_profile_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_fp_student_name']['id'] = 'field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['table'] = 'field_data_field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['field'] = 'field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['relationship'] = 'field_founders_profile_student_value';
  $handler->display->display_options['fields']['field_fp_student_name']['label'] = '';
  $handler->display->display_options['fields']['field_fp_student_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_student_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_student_name']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
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
    'field_founders_profile_student' => 'field_founders_profile_student',
    'field_founders_profile_body' => 'field_founders_profile_body',
    'field_fp_student_name' => 'field_fp_student_name',
  );

  /* Display: Current */
  $handler = $view->new_display('page', 'Current', 'founders_club_current_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current Founders Club Businesses';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro text';
  $handler->display->display_options['header']['area']['content'] = '<h2>Explore our student businesses</h2>
<p>Housed in the 10,000 square-foot <a href="https://www.google.com/maps/place/322+N+Clinton+St,+Iowa+City,+IA+52245/@41.6653834,-91.5362675,17z/data=!3m1!4b1!4m5!3m4!1s0x87e441f136273b09:0xa559ffa58db739a7!8m2!3d41.6653794!4d-91.5340788">Bedell Entrepreneurial Learning Laboratory (BELL)</a>, the Founders Club is an on-campus business incubator for UI student entrepreneurs pursuing the creation of a startup. Members of the Founders Club have access to many resources, including office space, access to funding opportunities, and one-on-one mentoring from successful business professionals. Below is a list of student businesses currently participating in the Founders Club Program.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_founders_profile_logo']['id'] = 'field_founders_profile_logo';
  $handler->display->display_options['fields']['field_founders_profile_logo']['table'] = 'field_data_field_founders_profile_logo';
  $handler->display->display_options['fields']['field_founders_profile_logo']['field'] = 'field_founders_profile_logo';
  $handler->display->display_options['fields']['field_founders_profile_logo']['label'] = '';
  $handler->display->display_options['fields']['field_founders_profile_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_founders_profile_logo']['settings'] = array(
    'image_style' => 'logo_250x180',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Student(s) */
  $handler->display->display_options['fields']['field_founders_profile_student']['id'] = 'field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['table'] = 'field_data_field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['field'] = 'field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['label'] = '';
  $handler->display->display_options['fields']['field_founders_profile_student']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_student']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_student']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_founders_profile_student']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_founders_profile_student']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_founders_profile_body']['id'] = 'field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['table'] = 'field_data_field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['field'] = 'field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['label'] = '';
  $handler->display->display_options['fields']['field_founders_profile_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_founders_profile_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_fp_student_name']['id'] = 'field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['table'] = 'field_data_field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['field'] = 'field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['relationship'] = 'field_founders_profile_student_value';
  $handler->display->display_options['fields']['field_fp_student_name']['label'] = '';
  $handler->display->display_options['fields']['field_fp_student_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_student_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_student_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'foundersclub/current';
  $handler->display->display_options['menu']['title'] = 'Current Founders Club Businesses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Past */
  $handler = $view->new_display('page', 'Past', 'founders_club_past_page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_founders_profile_student' => 'field_founders_profile_student',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Intro text';
  $handler->display->display_options['header']['area']['content'] = '<h2>Discover the impact of the BELL</h3>
<p>Established in 2004, the Founders Club is an on-campus business incubator for UI student entrepreneurs pursuing the creation of a startup at the <a href="https://www.google.com/maps/place/322+N+Clinton+St,+Iowa+City,+IA+52245/@41.6653834,-91.5362675,17z/data=!3m1!4b1!4m5!3m4!1s0x87e441f136273b09:0xa559ffa58db739a7!8m2!3d41.6653794!4d-91.5340788">Bedell Entrepreneurial Learning Laboratory (BELL)</a>. Since it was established, the Program has supported over 400 student businesses. Below is a list of alumni startups who began their entrepreneurial journey in the Founders Club program.</p>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Student(s) (field_founders_profile_student) */
  $handler->display->display_options['relationships']['field_founders_profile_student_value']['id'] = 'field_founders_profile_student_value';
  $handler->display->display_options['relationships']['field_founders_profile_student_value']['table'] = 'field_data_field_founders_profile_student';
  $handler->display->display_options['relationships']['field_founders_profile_student_value']['field'] = 'field_founders_profile_student_value';
  $handler->display->display_options['relationships']['field_founders_profile_student_value']['delta'] = '-1';
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
  /* Field: Content: Student(s) */
  $handler->display->display_options['fields']['field_founders_profile_student']['id'] = 'field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['table'] = 'field_data_field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['field'] = 'field_founders_profile_student';
  $handler->display->display_options['fields']['field_founders_profile_student']['label'] = '';
  $handler->display->display_options['fields']['field_founders_profile_student']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_student']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_student']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_founders_profile_student']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_founders_profile_student']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_founders_profile_body']['id'] = 'field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['table'] = 'field_data_field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['field'] = 'field_founders_profile_body';
  $handler->display->display_options['fields']['field_founders_profile_body']['label'] = '';
  $handler->display->display_options['fields']['field_founders_profile_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_founders_profile_body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_founders_profile_body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Field collection item: Name */
  $handler->display->display_options['fields']['field_fp_student_name']['id'] = 'field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['table'] = 'field_data_field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['field'] = 'field_fp_student_name';
  $handler->display->display_options['fields']['field_fp_student_name']['relationship'] = 'field_founders_profile_student_value';
  $handler->display->display_options['fields']['field_fp_student_name']['label'] = '';
  $handler->display->display_options['fields']['field_fp_student_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_student_name']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'keywords';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
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
    'field_founders_profile_student' => 'field_founders_profile_student',
    'field_founders_profile_body' => 'field_founders_profile_body',
    'field_fp_student_name' => 'field_fp_student_name',
  );
  $handler->display->display_options['path'] = 'foundersclub/past';
  $handler->display->display_options['menu']['title'] = 'Past Founders Club Businesses';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['founders_club_profiles'] = $view;

  return $export;
}
