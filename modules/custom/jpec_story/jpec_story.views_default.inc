<?php
/**
 * @file
 * jpec_story.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jpec_story_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'story';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Story';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile_stories_target_id']['id'] = 'field_profile_stories_target_id';
  $handler->display->display_options['relationships']['field_profile_stories_target_id']['table'] = 'field_data_field_profile_stories';
  $handler->display->display_options['relationships']['field_profile_stories_target_id']['field'] = 'field_profile_stories_target_id';
  $handler->display->display_options['relationships']['field_profile_stories_target_id']['required'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Show link to full profile */
  $handler->display->display_options['fields']['field_story_show_link']['id'] = 'field_story_show_link';
  $handler->display->display_options['fields']['field_story_show_link']['table'] = 'field_data_field_story_show_link';
  $handler->display->display_options['fields']['field_story_show_link']['field'] = 'field_story_show_link';
  $handler->display->display_options['fields']['field_story_show_link']['relationship'] = 'field_profile_stories_target_id';
  $handler->display->display_options['fields']['field_story_show_link']['label'] = '';
  $handler->display->display_options['fields']['field_story_show_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_story_show_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_story_show_link']['alter']['text'] = '<a href="[path]" class="primary-button">Read Story</a>';
  $handler->display->display_options['fields']['field_story_show_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_story_show_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_story_show_link']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_story_show_link']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Header */
  $handler->display->display_options['fields']['field_story_header']['id'] = 'field_story_header';
  $handler->display->display_options['fields']['field_story_header']['table'] = 'field_data_field_story_header';
  $handler->display->display_options['fields']['field_story_header']['field'] = 'field_story_header';
  $handler->display->display_options['fields']['field_story_header']['relationship'] = 'field_profile_stories_target_id';
  $handler->display->display_options['fields']['field_story_header']['label'] = '';
  $handler->display->display_options['fields']['field_story_header']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_story_header']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => 'square_290x290',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_story_quote']['id'] = 'field_story_quote';
  $handler->display->display_options['fields']['field_story_quote']['table'] = 'field_data_field_story_quote';
  $handler->display->display_options['fields']['field_story_quote']['field'] = 'field_story_quote';
  $handler->display->display_options['fields']['field_story_quote']['relationship'] = 'field_profile_stories_target_id';
  $handler->display->display_options['fields']['field_story_quote']['label'] = '';
  $handler->display->display_options['fields']['field_story_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_story_quote']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="story-header">[field_story_header]</div>
<div class="border-wrapper">
[field_profile_image]
<div class="card-wrapper">
<h3>[title]</h3>
[field_story_quote]
[field_story_show_link]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_profile_stories_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'profile' => 'profile',
  );

  /* Display: Featured Story Pane */
  $handler = $view->new_display('panel_pane', 'Featured Story Pane', 'story_featured_pane');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Show link to full profile */
  $handler->display->display_options['fields']['field_story_show_link']['id'] = 'field_story_show_link';
  $handler->display->display_options['fields']['field_story_show_link']['table'] = 'field_data_field_story_show_link';
  $handler->display->display_options['fields']['field_story_show_link']['field'] = 'field_story_show_link';
  $handler->display->display_options['fields']['field_story_show_link']['relationship'] = 'field_profile_stories_target_id';
  $handler->display->display_options['fields']['field_story_show_link']['label'] = '';
  $handler->display->display_options['fields']['field_story_show_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_story_show_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_story_show_link']['alter']['text'] = '<a href="[path]" class="primary-button">Read Story</a>';
  $handler->display->display_options['fields']['field_story_show_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_story_show_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_story_show_link']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_story_show_link']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Header */
  $handler->display->display_options['fields']['field_story_header']['id'] = 'field_story_header';
  $handler->display->display_options['fields']['field_story_header']['table'] = 'field_data_field_story_header';
  $handler->display->display_options['fields']['field_story_header']['field'] = 'field_story_header';
  $handler->display->display_options['fields']['field_story_header']['relationship'] = 'field_profile_stories_target_id';
  $handler->display->display_options['fields']['field_story_header']['label'] = '';
  $handler->display->display_options['fields']['field_story_header']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_story_header']['element_label_colon'] = FALSE;
  /* Field: Content: Story image */
  $handler->display->display_options['fields']['field_profile_story_image']['id'] = 'field_profile_story_image';
  $handler->display->display_options['fields']['field_profile_story_image']['table'] = 'field_data_field_profile_story_image';
  $handler->display->display_options['fields']['field_profile_story_image']['field'] = 'field_profile_story_image';
  $handler->display->display_options['fields']['field_profile_story_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile_story_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile_story_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile_story_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_story_image']['settings'] = array(
    'image_style' => 'square_290x290',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_story_quote']['id'] = 'field_story_quote';
  $handler->display->display_options['fields']['field_story_quote']['table'] = 'field_data_field_story_quote';
  $handler->display->display_options['fields']['field_story_quote']['field'] = 'field_story_quote';
  $handler->display->display_options['fields']['field_story_quote']['relationship'] = 'field_profile_stories_target_id';
  $handler->display->display_options['fields']['field_story_quote']['label'] = '';
  $handler->display->display_options['fields']['field_story_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_story_quote']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="border-wrapper">
<div class="image-wrapper">
[field_profile_story_image]
</div>
<div class="card-wrapper">
<h3>[field_story_header]</h3>
[field_story_quote]
[field_story_show_link]
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:paragraphs_item.field-story-featured-story',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Story Entity Reference */
  $handler = $view->new_display('entityreference', 'Story Entity Reference', 'story_entityreference');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_profile_fname' => 'field_profile_fname',
    'field_profile_lname' => 'field_profile_lname',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_profile_fname' => 'field_profile_fname',
    'field_profile_lname' => 'field_profile_lname',
  );
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_profile_stories_node']['id'] = 'reverse_field_profile_stories_node';
  $handler->display->display_options['relationships']['reverse_field_profile_stories_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_profile_stories_node']['field'] = 'reverse_field_profile_stories_node';
  $handler->display->display_options['relationships']['reverse_field_profile_stories_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: First name */
  $handler->display->display_options['fields']['field_profile_fname']['id'] = 'field_profile_fname';
  $handler->display->display_options['fields']['field_profile_fname']['table'] = 'field_data_field_profile_fname';
  $handler->display->display_options['fields']['field_profile_fname']['field'] = 'field_profile_fname';
  $handler->display->display_options['fields']['field_profile_fname']['relationship'] = 'reverse_field_profile_stories_node';
  $handler->display->display_options['fields']['field_profile_fname']['label'] = '';
  $handler->display->display_options['fields']['field_profile_fname']['element_label_colon'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_profile_lname']['id'] = 'field_profile_lname';
  $handler->display->display_options['fields']['field_profile_lname']['table'] = 'field_data_field_profile_lname';
  $handler->display->display_options['fields']['field_profile_lname']['field'] = 'field_profile_lname';
  $handler->display->display_options['fields']['field_profile_lname']['relationship'] = 'reverse_field_profile_stories_node';
  $handler->display->display_options['fields']['field_profile_lname']['label'] = '';
  $handler->display->display_options['fields']['field_profile_lname']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'story' => 'story',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  $export['story'] = $view;

  return $export;
}
