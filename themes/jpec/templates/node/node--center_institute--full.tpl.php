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
  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page && !empty($title)): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <div class="container">
      <div class="row">
        <?php if(!empty($content['main-menu'])): ?>
          <div class="col-md-4">
            <?php print render($content['main-menu']); ?>
          </div>
          <div class="col-md-8">
            <?php print render($content['field_leading_text']); ?>
          </div>
        <?php else: ?>
          <div class="col-md-12">
            <?php print render($content['field_leading_text']); ?>
          </div>
        <?php endif; ?>
      </div>
    </div>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_program_offerings']);
      hide($content['field_header_image_tall']);
      print render($content);
    ?>
    <div class="container">
      <?php print render($content['field_program_offerings']); ?>
    </div>
  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
