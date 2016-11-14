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
<div class="cta-item">
  <!-- Button trigger modal -->
  <button type="button" class="cta-button" data-toggle="modal" data-target="#ctaModal<?php print $node->nid; ?>">
    <?php print render($content['field_cta_modal_link']); ?>
  </button>

  <!-- Modal -->
  <div class="modal fade" id="ctaModal<?php print $node->nid; ?>" tabindex="-1" role="dialog" aria-labelledby="ctaModal<?php print $node->nid; ?>Label">
    <div class="modal-dialog" role="document">
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><i class="fa fa-times" aria-hidden="true"></i></button>
          <h3 class="modal-title" id="ctaModal<?php print $node->nid; ?>Label"><?php print render($content['field_cta_modal_title']); ?></h3>
        </div>
        <div class="modal-body">
          <?php print render($content['field_cta_modal_content']); ?>
        </div>
      </div>
    </div>
  </div>
</div>
