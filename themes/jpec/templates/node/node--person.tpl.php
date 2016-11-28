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
      <div class="row">
        <div class="col-md-3">
          <?php print render($content['field_person_image']); ?>
          <?php print render($content['field_person_title']); ?>
          <?php print render($content['field_person_fellow_title']); ?>

          <div class="contact">
            <div class="person-label">Contact</div>
            <?php print render($content['field_phone']); ?>
            <?php print render($content['field_person_email']); ?>
          </div>

          <div class="location">
            <div class="person-label">Office</div>
            <?php print render($content['field_person_location']); ?>
          </div>        
          
          <?php print render($content['field_person_blog']); ?>
          <?php print render($content['field_person_cv']); ?>
          <?php print render($content['field_person_website']); ?>
          <?php print render($content['field_person_scholar']); ?>
            
          
        </div>
        <div class="col-md-9">
          <?php
            // Hide primary and secondary departments from content, as they are printed in the header
            hide($content['field_person_primary_dept']);
            hide($content['field_person_sec_dept']);
          ?>
          <?php print render($content); ?>
        </div>          
      </div>  

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_person_primary_dept']);
      hide($content['field_person_sec_dept']);
    ?>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>