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

  
    <div class="news-card">
      <?php 
        print render($content['field_news_image']);
        print '<h4 class="node-title"><a href="'. $node_url . '">' . $title . '</a></h4>';
        print render($content);
      ?>
    </div>


