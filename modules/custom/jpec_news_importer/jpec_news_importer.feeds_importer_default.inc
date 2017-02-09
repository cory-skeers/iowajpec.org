<?php
/**
 * @file
 * jpec_news_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function jpec_news_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news';
  $feeds_importer->config = array(
    'name' => 'News',
    'description' => 'Initial import of the news articles from the Wordpress website.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'context' => array(
          'value' => '/rss/channel/item',
        ),
        'sources' => array(
          'title' => array(
            'name' => 'title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'description' => array(
            'name' => 'description',
            'value' => 'description',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'wp_post_date' => array(
            'name' => 'date',
            'value' => 'wp:post_date',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
          'wp_post_id' => array(
            'name' => 'id',
            'value' => 'wp:post_id',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '6',
          ),
          'url' => array(
            'name' => 'URL',
            'value' => 'wp:postmeta[2]/wp:meta_value',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '7',
          ),
        ),
        'display_errors' => 1,
        'debug_mode' => 0,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'use_tidy' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '26',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'description',
            'target' => 'field_news_body',
            'format' => 'full_html',
            'language' => 'und',
          ),
          2 => array(
            'source' => 'wp_post_id',
            'target' => 'guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'wp_post_date',
            'target' => 'field_news_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'url',
            'target' => 'field_news_source:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'news',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['news'] = $feeds_importer;

  return $export;
}
