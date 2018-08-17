<?php

/**
 * @file
 * Custom theme hooks.
 */

/**
 * Implements THEME_form_alter().
 */
function jpec_form_alter(&$form, &$form_state, $form_id){

  switch ($form['#id']) {

    // exposed filter form on the News page
    case 'views-exposed-form-news-recent-news-pane':

      if (isset($form['keywords'])) {
        // add the placeholder attribute to the Keywords input field, and set it to the value of the filter label
        $form['keywords']['#attributes'] = array(
          'placeholder' => array(t($form['#info']['filter-combine']['label'])));
      }
      break;

    // exposed filter form on the People Directory page
    case 'views-exposed-form-faculty-staff-people-directory-page':
    case 'views-exposed-form-faculty-staff-page-staff':
    case 'views-exposed-form-faculty-staff-page-faculty':
    case 'views-exposed-form-faculty-staff-page-advisory':


      if (isset($form['keyword'])) {
        // add the placeholder attribute to the Keyword input field, and set it to the value of the filter label
        $form['keyword']['#attributes'] = array(
          'placeholder' => array(t($form['#info']['filter-title']['label'])));
      }
      if (isset($form['category'])) {
        // add the 'By Category' to -Any- option in the categories dropdown list
        $form['category']['#options']['All'] = 'By Category: All';
      }
      break;

    // exposed filter on the Current and Past Founders Club page
    case 'views-exposed-form-founders-club-profiles-founders-club-current-page':
    case 'views-exposed-form-founders-club-profiles-founders-club-past-page':
      if (isset($form['keywords'])) {
        // add the placeholder attribute to the Keywords input field, and set it to the value of the filter label
        $form['keywords']['#attributes'] = array(
          'placeholder' => array(t($form['#info']['filter-combine']['label'])));
      }
      break;

    default:

      break;
  }
}
