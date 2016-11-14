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
<article class="<?php print $classes; ?> node-generic_block-card clearfix"<?php print $attributes; ?> >
  <div class="content"<?php print $content_attributes; ?>>

    <?php print render($content['field_generic_header']); ?>
    <?php print render($content['field_generic_image']); ?>

    <div class="card-body">
      <h3 class="node-title"><?php print render($content['field_generic_title']); ?></h3>
      <?php print render($content); ?>
    </div>
  </div>
</article>
