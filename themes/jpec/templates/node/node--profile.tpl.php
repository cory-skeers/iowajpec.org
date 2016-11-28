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

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    hide($content['field_profile_image']);
    hide($content['field_profile_subtitle']);
    hide($content['field_profile_intro']);
    
  ?>
  <div class="content"<?php print $content_attributes; ?>>
    <div class="container">
      <div class="row">
        <div class="col-md-2 col-md-offset-10 text-right">
          <div align="right">
            <?php print render($content['rrssb']); ?>
          </div>
        </div>
        <div class="col-md-12">  
          <?php print render($content); ?>
        </div>
      </div>
    </div>
  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
