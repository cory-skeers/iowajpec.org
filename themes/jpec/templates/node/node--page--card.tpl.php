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
  <?php print render($content['field_card_image']); ?>
    <div class="card-description-wrapper card-body">

      <h3 class="card-title"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
      <?php print render($content); ?>
    </div>
  </div>
</article>
