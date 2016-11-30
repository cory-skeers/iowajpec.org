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
        <div class="col-md-3">
          <?php print render($content['field_person_image']); ?>

          <div class="contact">
            <h3>Contact</h3>
            <?php print render($content['field_person_phone']); ?>
            <?php print render($content['field_person_email']); ?>
          </div>

          <div class="location">
            <h3>Office</h3>
            <?php print render($content['field_person_office']); ?>
            <?php print render($content['field_person_building']); ?>
          </div>        
       
        </div>

        <div class="col-md-9">
          <div class="person-title">
            <?php print render($content['field_person_title']); ?>
          </div>
          <div class="person-category">
            <?php print render($content['field_person_category']); ?>
          </div>          
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