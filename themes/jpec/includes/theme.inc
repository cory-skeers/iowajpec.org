<?php

/**
 * @file
 * Custom theme hooks.
 */

/**
 * Implements THEME_form_alter().
 */
function tippie_form_alter(&$form, &$form_state, $form_id){
  
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

    // exposed filter on the Reseach page
    case 'views-exposed-form-publications-all-recent-publications-pane':
      if (isset($form['keywords'])) { 
        // add the placeholder attribute to the Keywords input field, and set it to the value of the filter label                
        $form['keywords']['#attributes'] = array(
          'placeholder' => array(t($form['#info']['filter-combine']['label'])));
        // define the keywords input width
        $form['keywords']['#size'] = 45;
      }
      if (isset($form['department'])) { 
        // add the 'By Department' to -Any- option in the department dropdown list               
        $form['department']['#options']['All'] = 'By Department: All';      
      }      
      break;  

      case 'views-exposed-form-programs-explore-programs':
        $form['#action'] = url('/program-finder');
        if (isset($form['location'])) { 
          // add the 'By Location' to -Any- option in the department dropdown list               
          $form['location']['#options']['All'] = 'By Location: All'; 
        }
        if (isset($form['degree'])) { 
          // add the 'By Department' to -Any- option in the department dropdown list               
          $form['degree']['#options']['All'] = 'By Degree: All';      
        }
        if (isset($form['topic'])) { 
          // add the 'By Department' to -Any- option in the department dropdown list               
          $form['topic']['#options']['All'] = 'By Topic: All';      
        }       

      break;              
    
    default:
      
      break;
  }
  // if($form['#id'] == "views-exposed-form-news-recent-news-pane"){

  // }
}
