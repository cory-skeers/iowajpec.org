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
      hide($content['field_event_deadline_text']);
      hide($content['field_event_date']);

      print '<div class="card-date">';

      // create dt for start and end date
      $start_date = DateTime::createFromFormat('Y-m-d H:i:s', $content['field_event_date']['#items'][0]['value']);
      $end_date = DateTime::createFromFormat('Y-m-d H:i:s', $content['field_event_date']['#items'][0]['value2']);

      // if event spans multiple days, print it in Month start - end, Year format
      if ($start_date != $end_date) {

        if (date_format($start_date, 'Y-m') == date_format($end_date, 'Y-m')) {
          print date_format($start_date, 'F') . ' ' . date_format($start_date, 'd') . ' - ' . date_format($end_date, 'd') . ', ' . date_format($start_date, 'Y');
        }
        else {
          // if start and end months are different, print the end month too
          print date_format($start_date, 'F') . ' ' . date_format($start_date, 'd') . ' - ' . date_format($end_date, 'F') . ' ' . date_format($end_date, 'd') . ', ' . date_format($start_date, 'Y');
        }
      } 
      else {
        // start and end dates are the same, so printing normal date
        print render($content['field_event_date']);
      }

      print '</div>';

      if (!empty($content['field_event_time'])) {
        print render($content['field_event_time']) . ' | ';
      } 
      print render($content['field_event_location']) . '</br>';
      if (!empty($content['field_event_deadline'])) {
        print render($content['field_event_deadline_text']) . render($content['field_event_deadline']) . render($content['field_event_deadline_time']) . '</br>';
        print render($content['field_event_action_label']); 
      }
      print render($content); 
    ?>   
  </div>
</article>

