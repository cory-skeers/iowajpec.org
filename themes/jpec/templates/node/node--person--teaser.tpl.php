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
    <div class="col-sm-2 col-xs-4">
      <?php print render($content['field_person_image']); ?>
    </div>
    <div class="col-sm-10 col-xs-8">
      <?php print render($title_prefix); ?>
        <h3<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
      <?php print render($title_suffix); ?>
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        print render($content);
      ?>
    </div>
  </div>


  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</article>
