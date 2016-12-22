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
    
    // exposed filter on the People Directory page
    case 'views-exposed-form-people-list-people-list':
      if (isset($form['keywords'])) { 
        // add the placeholder attribute to the Keywords input field, and set it to the value of the filter label                
        $form['keywords']['#attributes'] = array(
          'placeholder' => array(t($form['#info']['filter-combine']['label'])));
        // define the keywords input width
        $form['keywords']['#size'] = 45;
      }
      if (isset($form['category'])) { 
        // add the 'By Category' to -Any- option in the categories dropdown list               
        $form['category']['#options']['All'] = 'By Category: All';        
      }      
      break;                 
    
    default:
      
      break;
  }
  // if($form['#id'] == "views-exposed-form-news-recent-news-pane"){

  // }
}
