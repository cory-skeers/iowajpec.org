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
<?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
?>
<div class="term-listing">
  <?php 
    print '<h4><a href="'. $node_url . '">' . $title . '</a></h4>';
    //print render($content['field_news_date'][0]);
    print render($content);
  ?>
</div>


