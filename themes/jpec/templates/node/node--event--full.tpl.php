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
//dpm($content);
?>

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['field_event_deadline_text']);
    ?>

<article class="<?php print $classes; ?> clearfix container"<?php print $attributes; ?>>
      <div class="row">
        <div class="col-md-12">
          <?php print render($content['field_event_image']); ?>

          <?php 
            print render($content['field_event_date']);
            print render($content['field_event_audience']);
            print render($content['field_event_time']);
            print trim(render($content['field_event_location']));
            if (!empty($content['field_event_room']) && $content['field_event_room'] != '') {
              echo ', '; 
            }
            print render($content['field_event_room']);
            print render($content['field_event_address']);
            if (!empty($content['field_event_deadline']) && $content['field_event_deadline'] != '') {
              print '<br/>' . render($content['field_event_deadline_text']);
              print render($content['field_event_deadline']);
              print render($content['field_event_deadline_time']); 
            }  
            
            if (!empty($content['field_event_action_label'])) {
              print '<br/>' . render($content['field_event_action_label']); 
            }
          ?>
                       
        </div>
      </div>
      <div class="row">  
        <div class="col-md-12">      
          <?php print render($content); ?>
        </div>          
      </div>  

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    ?>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</article>

<script type="application/ld+json">
{
  "@context": "http://schema.org",
  "@type": "EducationEvent",
  "name": "<?php print $title; ?>",
  "description": "<?php print $content['field_event_body']['#items'][0]['safe_value']; ?>",
  "url": "<?php print $GLOBALS['base_url'] . '/' . request_path(); ?>",
  "image": "<?php print file_create_url($content['field_event_image'][0]['#item']['uri']); ?>",
  "startDate": "<?php print $content['field_event_date']['#items'][0]['value']; ?>",
  "endDate": "<?php print $content['field_event_date']['#items'][0]['value2']; ?>",
  "location": {
    "@type": "Place",
    "name": "<?php print $content['field_event_location']['#items'][0]['title']; ?>",
    "address": {
      "@type": "PostalAddress",
      "streetAddress": "<?php print $content['field_event_address'][0]['#markup']; ?>"
    }
  },
  "eventStatus" : "EventScheduled",
  "organizer": {
    "@id": "#Tippie"
  }
}
</script>