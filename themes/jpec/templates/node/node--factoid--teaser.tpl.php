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

    <?php print render($content['field_factoid_image']); ?>

    <div class="card-description-wrapper">
      <?php
        print '<h3 class="node-title">' . render($content['field_factoid_description']) . '</h3>';
        print render($content['field_factoid_body']);
      ?>
    </div>
  </div>
</article>
