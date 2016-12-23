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
      if (!empty($content['field_event_action_label'])) {
        print render($content['field_event_deadline_text']) . render($content['field_event_deadline']) . render($content['field_event_deadline_time']) . '</br>';
        print render($content['field_event_action_label']); 
      }
      print render($content); 
    ?>   
  </div>
</article>

