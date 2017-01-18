<?php
/**
 * @file
 * tippie_editor.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function tippie_editor_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\'],
    [\'Format\',\'Styles\',\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\'],
    [\'NumberedList\',\'BulletedList\',\'Outdent\',\'Indent\'],
    [\'Link\',\'Unlink\',\'Anchor\'],
    [\'SpecialChar\',\'Blockquote\',\'RemoveFormat\',\'PasteFromWord\',\'TippieWidgetMenu\',\'Source\',\'Maximize\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => 'div(container*,layout*,row,col-*);
table{width,height}[align,border,cellpadding,cellspacing,summary,class];
caption tbody thead tfoot;
th td tr[scope,class];',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h2;h3;h4;h5',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.disableNativeSpellChecker = false;
config.removePlugins = \'scayt,menubutton,contextmenu\';
config.browserContextMenuOnCtrl = true;',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Autogrow the height of the editor',
            'path' => '/sites/www.iowajpec.org/libraries/ckeditor_autogrow/',
            'buttons' => FALSE,
          ),
          'basewidget' => array(
            'name' => 'basewidget',
            'desc' => 'Base Widget',
            'path' => '/sites/www.iowajpec.org/libraries/ckeditor_basewidget/',
            'buttons' => FALSE,
          ),
          'ckeditor_link' => array(
            'name' => 'drupal_path',
            'desc' => 'CKEditor Link - A plugin to easily create links to Drupal internal paths',
            'path' => '%base_path%profiles/sitenow/modules/contrib/ckeditor_link/plugins/link/',
          ),
          'layoutmanager' => array(
            'name' => 'layoutmanager',
            'desc' => 'Bootstrap Layout Manager',
            'path' => '/sites/www.iowajpec.org/libraries/ckeditor_layoutmanager/',
            'buttons' => array(
              'AddLayout' => array(
                'icon' => 'icons/addlayout.png',
                'label' => 'Layout Manager',
                'required_html' => array(
                  0 => array(
                    'tags' => array(
                      0 => 'div',
                    ),
                    'attributes' => array(
                      'class' => array(
                        0 => 'layoutmanager',
                        1 => 'container-fluid',
                        2 => 'layout-container',
                        3 => 'row',
                        4 => 'layout-row',
                        5 => 'layout-column',
                        6 => 'col-xs-4',
                        7 => 'col-sm-4',
                        8 => 'col-md-4',
                        9 => 'col-lg-4',
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
          'menubutton' => array(
            'name' => 'menubutton',
            'desc' => 'Menu Button',
            'path' => '/sites/www.iowajpec.org/libraries/ckeditor_menubutton/',
            'buttons' => FALSE,
          ),
          'tippiewidgets' => array(
            'name' => 'tippiewidgets',
            'desc' => 'Tippie Widgets',
            'path' => '/sites/www.iowajpec.org/libraries/tippiewidgets/',
            'buttons' => array(
              'TippieWidgetMenu' => array(
                'label' => 'Widget Manager',
                'icon' => 'icons/tippiewidgetmenu.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'ckeditor_path' => '%l/ckeditor',
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\'],
    [\'Format\',\'Styles\',\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\'],
    [\'NumberedList\',\'BulletedList\',\'Outdent\',\'Indent\'],
    [\'Link\',\'Unlink\',\'Anchor\'],
    [\'SpecialChar\',\'Blockquote\',\'Table\',\'TippieWidgetMenu\',\'Source\',\'Maximize\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;h2;h3;h4;h5',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Autogrow the height of the editor',
            'path' => '%base_path%sites/www.iowajpec.org/libraries/ckeditor_autogrow/',
            'buttons' => FALSE,
          ),
          'basewidget' => array(
            'name' => 'basewidget',
            'desc' => 'Base Widget',
            'path' => '%base_path%sites/www.iowajpec.org/libraries/ckeditor_basewidget/',
            'buttons' => FALSE,
          ),
          'ckeditor_link' => array(
            'name' => 'drupal_path',
            'desc' => 'CKEditor Link - A plugin to easily create links to Drupal internal paths',
            'path' => '%base_path%profiles/sitenow/modules/contrib/ckeditor_link/plugins/link/',
          ),
          'layoutmanager' => array(
            'name' => 'layoutmanager',
            'desc' => 'Bootstrap Layout Manager',
            'path' => '%base_path%sites/www.iowajpec.org/libraries/ckeditor_layoutmanager/',
            'buttons' => array(
              'AddLayout' => array(
                'icon' => 'icons/addlayout.png',
                'label' => 'Layout Manager',
                'required_html' => array(
                  0 => array(
                    'tags' => array(
                      0 => 'div',
                    ),
                    'attributes' => array(
                      'class' => array(
                        0 => 'layoutmanager',
                        1 => 'container-fluid',
                        2 => 'layout-container',
                        3 => 'row',
                        4 => 'layout-row',
                        5 => 'layout-column',
                        6 => 'col-xs-4',
                        7 => 'col-sm-4',
                        8 => 'col-md-4',
                        9 => 'col-lg-4',
                      ),
                    ),
                  ),
                ),
              ),
            ),
          ),
          'menubutton' => array(
            'name' => 'menubutton',
            'desc' => 'Menu Button',
            'path' => '%base_path%sites/www.iowajpec.org/libraries/ckeditor_menubutton/',
            'buttons' => FALSE,
          ),
          'tippiewidgets' => array(
            'name' => 'tippiewidgets',
            'desc' => 'Tippie Widgets',
            'path' => '%base_path%sites/www.iowajpec.org/libraries/tippiewidgets/',
            'buttons' => array(
              'TippieWidgetMenu' => array(
                'label' => 'Widget Manager',
                'icon' => 'icons/tippiewidgetmenu.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
