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

<div class="content container">
  <article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
     
      <?php print render($content['rrssb']); ?>
      <?php print render($content); ?>

      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
      ?>

      <?php print render($content['links']); ?>
      <?php print render($content['comments']); ?>
     
  </article>
</div>