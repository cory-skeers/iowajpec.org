<?php

/**
 * @file
 * Radix theme implementation to display a node.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
hide($content['field_event_url']);
hide($content['field_event_external_url']);
  $action_url = '';
  if (!empty($content['field_event_url'])) {
    $action_url = render($content['field_event_url']);
  }
  if (!empty($content['field_event_external_url'])) {
    $action_url = render($content['field_event_external_url']);
  }
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print '<h3>'. $title . '</h3>';?>
    
    <?php 
      print render($content['field_event_date']);
      if (!empty($content['field_event_time'])) {
        print render($content['field_event_time']) . ' | ';
      } 
      print render($content['field_event_location']) . '</br>';
      if (!empty($action_url)) {
        print render($content['field_event_deadline_text']) . render($content['field_event_deadline']) . render($content['field_event_deadline_time']) . '</br>';
        print '<a href="' . $action_url . '" class="primary-button">' . render($content['field_event_action_label']) . '</a>'; 
      }
      print render($content); 
    ?>   
  </div>
</article>

