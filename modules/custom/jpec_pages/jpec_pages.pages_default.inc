<?php
/**
 * @file
 * jpec_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jpec_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '10d5ec2a-afb7-483a-8a52-c78a979a4fee';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_homepage__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c7e826f6-58e4-4e6f-b79a-e65dbcf40c2b';
  $pane->panel = 'middle';
  $pane->type = 'blocks';
  $pane->subtype = 'blocks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c7e826f6-58e4-4e6f-b79a-e65dbcf40c2b';
  $display->content['new-c7e826f6-58e4-4e6f-b79a-e65dbcf40c2b'] = $pane;
  $display->panels['middle'][0] = 'new-c7e826f6-58e4-4e6f-b79a-e65dbcf40c2b';
  $pane = new stdClass();
  $pane->pid = 'new-15d4598b-4de4-47fe-85ee-73f7f1b98011';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'calendar-homepage_events_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '15d4598b-4de4-47fe-85ee-73f7f1b98011';
  $display->content['new-15d4598b-4de4-47fe-85ee-73f7f1b98011'] = $pane;
  $display->panels['middle'][1] = 'new-15d4598b-4de4-47fe-85ee-73f7f1b98011';
  $pane = new stdClass();
  $pane->pid = 'new-ea00f43c-31fe-49d6-83a4-96e91c472ae0';
  $pane->panel = 'middle';
  $pane->type = 'next_steps';
  $pane->subtype = 'next_steps';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ea00f43c-31fe-49d6-83a4-96e91c472ae0';
  $display->content['new-ea00f43c-31fe-49d6-83a4-96e91c472ae0'] = $pane;
  $display->panels['middle'][2] = 'new-ea00f43c-31fe-49d6-83a4-96e91c472ae0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mandela_washington_fellows';
  $page->task = 'page';
  $page->admin_title = 'Mandela Washington Fellows';
  $page->admin_description = '';
  $page->path = 'mandela-washington-fellows';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mandela_washington_fellows__panel';
  $handler->task = 'page';
  $handler->subtask = 'mandela_washington_fellows';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Mandela Washington Fellows';
  $display->uuid = '3ad19bf6-e254-425f-bad3-39a6942673e9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mandela_washington_fellows__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-beb7a243-2e19-478b-89a6-4214cc4dea34';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'mandela_fellows-fellows_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'beb7a243-2e19-478b-89a6-4214cc4dea34';
  $display->content['new-beb7a243-2e19-478b-89a6-4214cc4dea34'] = $pane;
  $display->panels['middle'][0] = 'new-beb7a243-2e19-478b-89a6-4214cc4dea34';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mandela_washington_fellows'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'news';
  $page->task = 'page';
  $page->admin_title = 'News';
  $page->admin_description = '';
  $page->path = 'news';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'News',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'news';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = '03fe86fb-c0c3-4cb7-a906-2c1e02fc22a7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_news__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d5716a58-a250-4da1-a23d-a9f9aa2bf2f8';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-featured_news_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd5716a58-a250-4da1-a23d-a9f9aa2bf2f8';
  $display->content['new-d5716a58-a250-4da1-a23d-a9f9aa2bf2f8'] = $pane;
  $display->panels['middle'][0] = 'new-d5716a58-a250-4da1-a23d-a9f9aa2bf2f8';
  $pane = new stdClass();
  $pane->pid = 'new-7715f152-af06-4d7d-b3a7-83d662dc1dfd';
  $pane->panel = 'middle';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-recent_news_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7715f152-af06-4d7d-b3a7-83d662dc1dfd';
  $display->content['new-7715f152-af06-4d7d-b3a7-83d662dc1dfd'] = $pane;
  $display->panels['middle'][1] = 'new-7715f152-af06-4d7d-b3a7-83d662dc1dfd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d5716a58-a250-4da1-a23d-a9f9aa2bf2f8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['news'] = $page;

  return $pages;

}
