<?php
/**
 * @file
 * jpec_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jpec_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jpec_media_browser';
  $view->description = 'Default view for the media browser library tab.';
  $view->tag = 'media, default';
  $view->base_table = 'file_managed';
  $view->human_name = 'JPEC Media Browser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer files';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'media_browser',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'media_browser_plus';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Media browser plus: Navigation */
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['id'] = 'media_browser_plus_views_handler_area_navigation';
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['table'] = 'file_managed';
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['field'] = 'media_browser_plus_views_handler_area_navigation';
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['label'] = '';
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['view_to_insert'] = 'media_browser_plus_folders:default';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No files found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Media browser plus: Preview */
  $handler->display->display_options['fields']['media_browser_plus_preview']['id'] = 'media_browser_plus_preview';
  $handler->display->display_options['fields']['media_browser_plus_preview']['table'] = 'file_managed';
  $handler->display->display_options['fields']['media_browser_plus_preview']['field'] = 'media_browser_plus_preview';
  $handler->display->display_options['fields']['media_browser_plus_preview']['label'] = '';
  $handler->display->display_options['fields']['media_browser_plus_preview']['element_label_colon'] = FALSE;
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  $handler->display->display_options['sorts']['timestamp']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['timestamp']['expose']['label'] = 'Upload date';
  /* Sort criterion: SUM(File Usage: Use count) */
  $handler->display->display_options['sorts']['count']['id'] = 'count';
  $handler->display->display_options['sorts']['count']['table'] = 'file_usage';
  $handler->display->display_options['sorts']['count']['field'] = 'count';
  $handler->display->display_options['sorts']['count']['group_type'] = 'sum';
  $handler->display->display_options['sorts']['count']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['count']['expose']['label'] = 'Use count';
  /* Filter criterion: File: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'file_managed';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: File: Name */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['group'] = 1;
  $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'File name';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: File: Path */
  $handler->display->display_options['filters']['uri']['id'] = 'uri';
  $handler->display->display_options['filters']['uri']['table'] = 'file_managed';
  $handler->display->display_options['filters']['uri']['field'] = 'uri';
  $handler->display->display_options['filters']['uri']['operator'] = 'starts';
  $handler->display->display_options['filters']['uri']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uri']['expose']['operator_id'] = 'uri_op';
  $handler->display->display_options['filters']['uri']['expose']['label'] = 'Scheme';
  $handler->display->display_options['filters']['uri']['expose']['operator'] = 'uri_op';
  $handler->display->display_options['filters']['uri']['expose']['identifier'] = 'uri';

  /* Display: Media browser */
  $handler = $view->new_display('media_browser', 'Media browser', 'media_browser_thumbnails');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Library (MBP)';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: My files */
  $handler = $view->new_display('media_browser', 'My files', 'media_browser_my_files');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My files (MBP)';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own files';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: File: User who uploaded */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'file_managed';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: File: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'file_managed';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: File: Name */
  $handler->display->display_options['filters']['filename']['id'] = 'filename';
  $handler->display->display_options['filters']['filename']['table'] = 'file_managed';
  $handler->display->display_options['filters']['filename']['field'] = 'filename';
  $handler->display->display_options['filters']['filename']['operator'] = 'contains';
  $handler->display->display_options['filters']['filename']['exposed'] = TRUE;
  $handler->display->display_options['filters']['filename']['expose']['operator_id'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['label'] = 'File name';
  $handler->display->display_options['filters']['filename']['expose']['operator'] = 'filename_op';
  $handler->display->display_options['filters']['filename']['expose']['identifier'] = 'filename';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: File: Path */
  $handler->display->display_options['filters']['uri']['id'] = 'uri';
  $handler->display->display_options['filters']['uri']['table'] = 'file_managed';
  $handler->display->display_options['filters']['uri']['field'] = 'uri';
  $handler->display->display_options['filters']['uri']['operator'] = 'starts';
  $handler->display->display_options['filters']['uri']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uri']['expose']['operator_id'] = 'uri_op';
  $handler->display->display_options['filters']['uri']['expose']['label'] = 'Scheme';
  $handler->display->display_options['filters']['uri']['expose']['operator'] = 'uri_op';
  $handler->display->display_options['filters']['uri']['expose']['identifier'] = 'uri';

  /* Display: Media Browser Plus */
  $handler = $view->new_display('page', 'Media Browser Plus', 'media_browser_plus');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Media browser plus: Navigation */
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['id'] = 'media_browser_plus_views_handler_area_navigation';
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['table'] = 'file_managed';
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['field'] = 'media_browser_plus_views_handler_area_navigation';
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['label'] = '';
  $handler->display->display_options['header']['media_browser_plus_views_handler_area_navigation']['view_to_insert'] = 'media_browser_plus_folders:default';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Media browser plus: Actions */
  $handler->display->display_options['footer']['media_browser_plus_views_handler_area_actions']['id'] = 'media_browser_plus_views_handler_area_actions';
  $handler->display->display_options['footer']['media_browser_plus_views_handler_area_actions']['table'] = 'file_managed';
  $handler->display->display_options['footer']['media_browser_plus_views_handler_area_actions']['field'] = 'media_browser_plus_views_handler_area_actions';
  $handler->display->display_options['footer']['media_browser_plus_views_handler_area_actions']['mbp_action_area']['actions'] = array(
    0 => 'view',
    1 => 'edit',
    2 => 'delete',
    3 => 'download',
    'edit' => 'edit',
    'delete' => 'delete',
    'download' => 'download',
    'basket' => 0,
  );
  /* Footer: Media browser plus: Basket */
  $handler->display->display_options['footer']['media_browser_plus_views_handler_area_basket']['id'] = 'media_browser_plus_views_handler_area_basket';
  $handler->display->display_options['footer']['media_browser_plus_views_handler_area_basket']['table'] = 'file_managed';
  $handler->display->display_options['footer']['media_browser_plus_views_handler_area_basket']['field'] = 'media_browser_plus_views_handler_area_basket';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Media browser plus: Preview with operations */
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['id'] = 'media_browser_plus_preview_vbo';
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['table'] = 'file_managed';
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['field'] = 'media_browser_plus_preview_vbo';
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['label'] = '';
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['vbo_operations'] = array(
    'action::views_bulk_operations_archive_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'scheme' => 'public',
        'temporary' => 1,
      ),
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::media_browser_plus_download_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['mbp_settings']['add_link']['type'] = 'e';
  $handler->display->display_options['fields']['media_browser_plus_preview_vbo']['mbp_settings']['add_link']['colorbox_settings'] = 'e';
  $handler->display->display_options['path'] = 'admin/content/file/mbp';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Thumbnails Plus';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $export['jpec_media_browser'] = $view;

  return $export;
}
