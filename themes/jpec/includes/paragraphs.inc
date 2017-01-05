<?php
/**
 * @file
 * Theme and preprocess functions for nodes
 */

/**
 * Implements hook_preprocess_entity().
 *
 * @see : https://www.drupal.org/node/2394519
 */
function jpec_preprocess_entity(&$variables) {

  if ($variables['entity_type'] == 'paragraphs_item') {

    $wrapper = entity_metadata_wrapper('paragraphs_item', $variables['paragraphs_item']);

    switch ($variables['elements']['#bundle']) {
      
      case 'text_area':
        if (!empty($variables['paragraphs_item']->field_text_area_style)) {
          $variables['classes_array'][] = $variables['paragraphs_item']->field_text_area_style[LANGUAGE_NONE][0]['value'];
        }
        break;
      
      case 'image':
         if (!empty($variables['paragraphs_item']->field_image_image_style)) { 
          $image_size = $variables['paragraphs_item']->field_image_image_style[LANGUAGE_NONE][0]['value'];
         
           switch ($image_size) {

            case '16%':
              $variables['image_classes_array'] = array('paragraph-image', 'col-sm-2');
              $variables['text_classes_array'] = array('paragraph-body', 'col-sm-10');
              // If image is right, push and pull items in grid so they are flipped.
              if ($variables['paragraphs_item']->field_image_image_position[LANGUAGE_NONE][0]['value'] == 'right') {
                $variables['image_classes_array'][] = 'col-sm-push-10';
                $variables['text_classes_array'][] = 'col-sm-pull-2';
              }              
            break;
            case '33%':
              $variables['image_classes_array'] = array('paragraph-image', 'col-sm-4');
              $variables['text_classes_array'] = array('paragraph-body', 'col-sm-8');
              // If image is right, push and pull items in grid so they are flipped.
              if ($variables['paragraphs_item']->field_image_image_position[LANGUAGE_NONE][0]['value'] == 'right') {
                $variables['image_classes_array'][] = 'col-sm-push-8';
                $variables['text_classes_array'][] = 'col-sm-pull-4';
              }
            break; 
            case '50%':
              $variables['image_classes_array'] = array('paragraph-image', 'col-sm-6');
              $variables['text_classes_array'] = array('paragraph-body', 'col-sm-6');
              // If image is right, push and pull items in grid so they are flipped.
              if ($variables['paragraphs_item']->field_image_image_position[LANGUAGE_NONE][0]['value'] == 'right') {
                $variables['image_classes_array'][] = 'col-sm-push-6';
                $variables['text_classes_array'][] = 'col-sm-pull-6';
              }              
            break; 
            case '100%':
              $variables['image_classes_array'] = array('paragraph-image', 'col-sm-12');
              $variables['text_classes_array'] = array('paragraph-body', 'col-sm-12');
              // If image is right, push and pull items in grid so they are flipped.
              if ($variables['paragraphs_item']->field_image_image_position[LANGUAGE_NONE][0]['value'] == 'right') {
                $variables['image_classes_array'][] = 'col-sm-push-12';
                $variables['text_classes_array'][] = 'col-sm-pull-12';
              }              
            break;                              
           }
         }
         else {
          // Set default image classes.
          $variables['image_classes_array'] = array('paragraph-image', 'col-sm-4');
          // Set default text classes.
          $variables['text_classes_array'] = array('paragraph-body', 'col-sm-8');
          // If image is right, push and pull items in grid so they are flipped.
          if ($variables['paragraphs_item']->field_image_image_position[LANGUAGE_NONE][0]['value'] == 'right') {
            $variables['image_classes_array'][] = 'col-sm-push-8';
            $variables['text_classes_array'][] = 'col-sm-pull-4';
          }          
        }

        break;

      case 'video':

         if (!empty($variables['paragraphs_item']->field_video_position)) { 

          // Set default text classes.
          $variables['text_classes_array'] = array('paragraph-body', 'col-sm-6');            
          // Set default video classes.
          $variables['video_classes_array'] = array('paragraph-video', 'col-sm-6');
          // If video is left, push and pull items in grid so they are flipped.
          if ($variables['paragraphs_item']->field_video_position[LANGUAGE_NONE][0]['value'] == 'left') {
            $variables['video_classes_array'][] = 'col-sm-pull-6';
            $variables['text_classes_array'][] = 'col-sm-push-6';
          }          
        }

        break;        

      case '2x2_feature':

        $image = $wrapper->field_2x2_image->value();

        if (!empty($image)) {
          $variables['classes_array'][] = 'leading-image';
        }

        try {
          $variables['url_1'] = $wrapper->field_2x2_1_url->url->value();
          $variables['url_2'] = $wrapper->field_2x2_2_url->url->value();
          $variables['url_3'] = $wrapper->field_2x2_3_url->url->value();
        }
        catch (Exception $e) {
          // Do nothing.
        }
        break;

      case 'social':
        // hide  the news view if the field_show_news is FALSE
        $show_news = $wrapper->field_social_show_news->value();

        if (empty($show_news) || $show_news == 0) {
          hide($variables['content']['field_social_news_view']);
        }
        break;

      default:
        break;
    }
  }
}

/**
 * Implements hook_process_entity().
 *
 * @see : https://www.drupal.org/node/2394519
 */
function jpec_process_entity(&$variables) {
  if ($variables['entity_type'] == 'paragraphs_item' && $variables['elements']['#bundle'] == 'image') {
    // Flatten the image and text classes.
    $variables['image_classes'] = implode(' ', $variables['image_classes_array']);
    $variables['text_classes'] = implode(' ', $variables['text_classes_array']);
  }
  if ($variables['entity_type'] == 'paragraphs_item' && $variables['elements']['#bundle'] == 'video') {
    // Flatten the image and text classes.
    $variables['video_classes'] = implode(' ', $variables['video_classes_array']);
    $variables['text_classes'] = implode(' ', $variables['text_classes_array']);
  }  
}
