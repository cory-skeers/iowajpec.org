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
          <?php print render($content['field_mwf_image']); ?>

          <?php print render($content['field_mwf_city']); ?>
          <?php print render($content['field_mwf_country']); ?>   
       
        </div>

        <div class="col-md-9">
          <h2>
            <?php print render($content['field_mwf_first_name']); ?>
            <?php print render($content['field_mwf_last_name']); ?>
          </h2>
     
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