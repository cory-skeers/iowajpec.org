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

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['field_founders_profile_location']);
      hide($content['field_founders_profile_phone']);
      hide($content['field_founders_profile_email']);
      hide($content['field_founders_profile_url']);
      hide($content['field_founders_profile_facebook']);
      hide($content['field_founders_profile_twitter']);
    ?>

<article class="<?php print $classes; ?> clearfix container"<?php print $attributes; ?>>
      <div class="row">
        
        <?php if (!empty($content['field_card_image']) && $content['field_card_image'] != ''):?>
          <div class="col-md-6">
            <?php print render($content['field_card_image']); ?>
          </div>
        <?php endif; ?>
        
        <div class="col-md-6">
          <h2><?php print render($title); ?></h2>

          <?php 
            if (count($content['field_founders_profile_student']['#items']) == 1) {
              print '<h3>Student Entrepreneur</h3>'; }
            else { print '<h3>The Team</h3>'; }
            
            print render($content['field_founders_profile_student']); 
          ?>
        </div>
      </div>
      <div class="row">
        <div class="col-md-12">
          
          <?php print render($content); ?>

          <?php if (!empty($content['field_founders_profile_location']) && $content['field_founders_profile_location'] != ''):?>
            <h3>Office</h3>
            <?php print render($content['field_founders_profile_location']); ?>
          <?php endif; ?>
          
          <h3>Contact</h3>
          <?php print render($content['field_founders_profile_phone']); ?>
          <?php print render($content['field_founders_profile_email']); ?>
          <?php print render($content['field_founders_profile_url']); ?>
          <?php print render($content['field_founders_profile_facebook']); ?>
          <?php print render($content['field_founders_profile_twitter']); ?>          
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