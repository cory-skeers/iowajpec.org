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
    <div class="container">
      <?php print render($content['body']); ?>
      <?php print render($content['field_department_program']); ?>
      <?php print render($content['field_department_highlight']); ?>
    </div>
    <div class="department-factoid-wrapper">
      <div class="container">
        <?php print render($content['field_department_factoid']); ?>
      </div>
    </div>

    <div class="container">
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_header_image_tall']);
      hide($content['field_department_contact']);
      hide($content['field_department_address']);
      hide($content['field_department_email']);
      hide($content['field_department_phone']); 
      hide($content['field_department_fax']);

      // this will render only the News section
      print render($content);
    ?>
    </div>

    <div class="department-contact-wrapper">
      <div class="container">
        <h2>Contact Us</h2>
        <div class="row">
          <div class="col-md-5">
            <?php 
              print '<h3>' . $node->title . '</h3>'; 
              print render($content['field_department_address']);
              print render($content['field_department_email']);
              print render($content['field_department_phone']); 
              print render($content['field_department_fax']);
            ?>
            <br/>
          </div>
          <div class="col-md-7">
            <?php print render($content['field_department_contact']); ?>
            <a class="primary-button" href="people?departments=<?php print $node->nid; ?>">See all people</a>
          </div>

        </div>
       </div> 
      </div>

  </div>
</article>
