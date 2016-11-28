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
<div class="row">
  <div class="col-sm-4 align-left">
    <?php print render($content['field_news_image']); ?>
  </div>
  <div class="col-sm-8">
    <?php 
      print '<h4 class="node-title"><a href="'. $node_url . '">' . $title . '</a></h4>';
      print render($content); 
    ?>
  </div>         
</div>


