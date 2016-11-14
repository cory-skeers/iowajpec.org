<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="content container"<?php print $content_attributes; ?>>
    <div class="main-item-2x2">
      <?php print render($content['field_2x2_image']); ?>
      <?php if (!empty($content['field_2x2_title']) || !empty($content['field_2x2_description'])) { ?>
        <div class="leading-text">
          <?php print render($content['field_2x2_title']); ?>
          <?php print render($content['field_2x2_description']); ?>
        </div>
      <?php } ?>
    </div>
    <div class="item-2x2">
      <?php print render($content['field_2x2_1_image']); ?>
      <?php if (!empty($content['field_2x2_1_title']) || !empty($content['field_2x2_1_description'])) { ?>      
        <div class="info">
          <a href="<?php print $url_1; ?>">
            <?php print render($content['field_2x2_1_title']); ?>
            <?php print render($content['field_2x2_1_description']); ?>
            <span class="caret right" aria-hidden=true></span>
          </a>
        </div>
      <?php } ?>      
    </div>
    <div class="item-2x2">
      <?php print render($content['field_2x2_2_image']); ?>
      <?php if (!empty($content['field_2x2_2_title']) || !empty($content['field_2x2_2_description'])) { ?>      
      <div class="info">
        <a href="<?php print $url_2; ?>">
          <?php print render($content['field_2x2_2_title']); ?>
          <?php print render($content['field_2x2_2_description']); ?>
          <span class="caret right" aria-hidden=true></span>
        </a>
      </div>
      <?php } ?>      
    </div>
    <div class="item-2x2">
      <?php print render($content['field_2x2_3_image']); ?>
      <?php if (!empty($content['field_2x2_3_title']) || !empty($content['field_2x2_3_description'])) { ?>       
      <div class="info">
        <a href="<?php print $url_3; ?>">
          <?php print render($content['field_2x2_3_title']); ?>
          <?php print render($content['field_2x2_3_description']); ?>
          <span class="caret right" aria-hidden=true></span>
        </a>
      </div>
      <?php } ?>      
    </div>
  </div>
</div>
