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
      <?php
        print render($content['body']);
        print render($content['field_org_website']);
        print render($content['field_org_facebook']);
        print render($content['field_org_image']);
        print render($content['field_org_content']);
      ?>
    </div> <!-- end container -->

  <div class="wrapper background-grey org-contact">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <h2>Contact Us</h2>
            <?php
              print
              '<h3>' . render($content['field_org_contact_name']) . '</h3>' .
              render($content['field_org_contact_email']) .
              render($content['field_org_contact_phone']);
            ?>
        </div>
      </div>
    </div>
  </div>

<?php if (!empty($content['field_org_twitter']) && $content['field_org_twitter'] != '') { ?>
  <div class="wrapper org-social">
    <div class="container">
      <div class="row">
        <div class="col-md-12">
          <h2>Connect With Us</h2>
            <?php
              print render($content['field_org_twitter']);
            ?>
        </div>
      </div>
    </div>
  </div>
<?php } ?>

    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
    ?>
  </div>

  <?php print render($content['links']); ?>
  <?php print render($content['comments']); ?>

</article>
