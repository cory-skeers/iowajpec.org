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
