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
    <div class="row">
      <div class="col-md-6">
        <?php print render($content['field_event_image']); ?>
      </div>
      <div class="col-md-6">
        <?php print '<h3><a href="'. $node_url . '">' . $title . '</a></h3>';?>
        <?php print render($content); ?>
      </div>
    </div>    
  </div>
</article>

