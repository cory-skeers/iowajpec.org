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
  <?php print render($title_prefix); ?>
    <h3<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
  <?php print render($title_suffix); ?>

    <?php
      // Hide working title if a custom title is provided.

      if (isset($content['field_person_custom_title'])) {
       hide($content['field_person_title']);
      }

      hide($content['field_person_email']);
      hide($content['field_phone']);

      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>


  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
