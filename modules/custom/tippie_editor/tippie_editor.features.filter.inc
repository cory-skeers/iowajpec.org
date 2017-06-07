<?php
/**
 * @file
 * tippie_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function tippie_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -10,
    'filters' => array(
      'ckeditor_link_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'wysiwyg' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'valid_elements' => '@[class|style|title],
a[href|target|title|name|rel],
img[style|src|width|height|alt|title],
em, strong, strike, s, del, sub, sup, i, b, q[cite], acronym, abbr , samp, kbd,
ul, ol[start], li, dl, dt, dd,
p[align<center?justify?left?right], br, hr,
div[align<center?justify?left?right], span,
table[width|cellpadding|cellspacing|border|align|summary], tr[align|valign], td[align|valign|width|colspan|rowspan], tbody, th[align|valign|width|colspan|rowspan|scope], thead, tfoot, colgroup, col, caption,
address, blockquote, pre, cite, code,
h1, h2, h3, h4, h5, h6,',
          'allow_comments' => 0,
          'nofollow_policy' => 'disabled',
          'nofollow_domains' => array(
            0 => 'org-iowajpec.stage.drupal.uiowa.edu',
          ),
          'style_color' => array(
            'color' => 0,
            'background' => 0,
            'background-color' => 0,
            'background-image' => 0,
            'background-repeat' => 0,
            'background-attachment' => 0,
            'background-position' => 0,
          ),
          'style_font' => array(
            'font' => 0,
            'font-family' => 0,
            'font-size' => 0,
            'font-size-adjust' => 0,
            'font-stretch' => 0,
            'font-style' => 0,
            'font-variant' => 0,
            'font-weight' => 0,
          ),
          'style_text' => array(
            'text-align' => 'text-align',
            'text-decoration' => 'text-decoration',
            'text-indent' => 'text-indent',
            'word-spacing' => 'word-spacing',
            'text-transform' => 0,
            'letter-spacing' => 0,
            'white-space' => 0,
            'direction' => 0,
            'unicode-bidi' => 0,
          ),
          'style_box' => array(
            'margin' => 'margin',
            'margin-top' => 'margin-top',
            'margin-right' => 'margin-right',
            'margin-bottom' => 'margin-bottom',
            'margin-left' => 'margin-left',
            'padding' => 'padding',
            'padding-top' => 'padding-top',
            'padding-right' => 'padding-right',
            'padding-bottom' => 'padding-bottom',
            'padding-left' => 'padding-left',
          ),
          'style_border-1' => array(
            'border' => 'border',
            'border-top' => 'border-top',
            'border-right' => 'border-right',
            'border-bottom' => 'border-bottom',
            'border-left' => 'border-left',
            'border-width' => 'border-width',
            'border-top-width' => 'border-top-width',
            'border-right-width' => 'border-right-width',
            'border-bottom-width' => 'border-bottom-width',
            'border-left-width' => 'border-left-width',
          ),
          'style_border-2' => array(
            'border-color' => 'border-color',
            'border-top-color' => 'border-top-color',
            'border-right-color' => 'border-right-color',
            'border-bottom-color' => 'border-bottom-color',
            'border-left-color' => 'border-left-color',
            'border-style' => 'border-style',
            'border-top-style' => 'border-top-style',
            'border-right-style' => 'border-right-style',
            'border-bottom-style' => 'border-bottom-style',
            'border-left-style' => 'border-left-style',
          ),
          'style_dimension' => array(
            'height' => 'height',
            'width' => 'width',
            'line-height' => 0,
            'max-height' => 0,
            'max-width' => 0,
            'min-height' => 0,
            'min-width' => 0,
          ),
          'style_positioning' => array(
            'bottom' => 'bottom',
            'left' => 'left',
            'right' => 'right',
            'top' => 'top',
            'vertical-align' => 'vertical-align',
            'z-index' => 'z-index',
            'clip' => 0,
            'overflow' => 0,
          ),
          'style_layout' => array(
            'clear' => 'clear',
            'float' => 'float',
            'display' => 0,
            'position' => 0,
            'visibility' => 0,
          ),
          'style_list' => array(
            'list-style-type' => 'list-style-type',
            'list-style' => 0,
            'list-style-image' => 0,
            'list-style-position' => 0,
          ),
          'style_table' => array(
            'table-layout' => 'table-layout',
            'border-collapse' => 0,
            'border-spacing' => 0,
            'caption-side' => 0,
            'empty-cells' => 0,
          ),
          'style_user' => array(
            'cursor' => 0,
            'outline' => 0,
            'outline-width' => 0,
            'outline-style' => 0,
            'outline-color' => 0,
            'zoom' => 0,
          ),
          'rule_valid_classes' => array(
            0 => 'primary-button',
            2 => 'container*',
            4 => 'layout*',
            6 => 'row*',
            8 => 'col-lg*',
            10 => 'col-md*',
            11 => 'tippie*',
            13 => 'background*',
            15 => 'large-text',
            17 => 'align*',
            19 => 'rteindent*',
            21 => 'table*',
            23 => 'facebook-link',
            25 => 'twitter-link',
            27 => 'email-link',
            29 => 'website-link',
            31 => 'instagram-link',
            33 => 'linkedin-link',
          ),
          'rule_valid_ids' => array(),
          'rule_style_urls' => array(),
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'https://org-iowajpec.stage.drupal.uiowa.edu
/org-iowajpec/',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => -9,
    'filters' => array(
      'ckeditor_link_filter' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'local_paths' => 'http://test.sitenow.uiowa.edu/tippie
http://tippie.stage.drupal.uiowa.edu
/tippie/',
          'protocol_style' => 'full',
        ),
      ),
    ),
  );

  return $formats;
}
