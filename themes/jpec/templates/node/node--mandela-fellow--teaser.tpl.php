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

<article class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <div class="card-wrapper">
    <?php print render($content['field_mwf_image']); ?>
    <div class="card-body">
      <h4><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h4>
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