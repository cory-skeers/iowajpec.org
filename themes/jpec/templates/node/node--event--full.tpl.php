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

<article class="<?php print $classes; ?> clearfix container"<?php print $attributes; ?>>
      <div class="row">
        <div class="col-md-12">
          <?php print render($content['field_event_image']); ?>

          <?php print render($content['field_event_date']); ?>
          <?php print render($content['field_event_audience']); ?>
          <?php print render($content['field_event_time']); ?>
          <?php print render($content['field_event_location']); ?>
          <?php print render($content['field_event_room']); ?>

          <?php if (!empty($content['field_event_deadline']) && $content['field_event_deadline'] != '') { ?>
            <div class="deadline">
              Apply by
              <?php print render($content['field_event_deadline']); ?>
            </div>
          <?php } ?>
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