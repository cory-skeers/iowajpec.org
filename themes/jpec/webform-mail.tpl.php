<?php

/**
 * @file
 * Customize the e-mails sent by Webform after successful submission.
 *
 * This file may be renamed "webform-mail-[nid].tpl.php" to target a
 * specific webform e-mail on your site. Or you can leave it
 * "webform-mail.tpl.php" to affect all webform e-mails on your site.
 *
 * Available variables:
 * - $node: The node object for this webform.
 * - $submission: The webform submission.
 * - $email: The entire e-mail configuration settings.
 * - $user: The current user submitting the form. Always the Anonymous user
 *   (uid 0) for confidential submissions.
 * - $ip_address: The IP address of the user submitting the form or '(unknown)'
 *   for confidential submissions.
 *
 * The $email['email'] variable can be used to send different e-mails to different users
 * when using the "default" e-mail template.
 */
?>

<table>

<?php
  $components = $node->webform['components'];
  foreach ($components as $key => $component) {

    $types_to_ignore = array('fieldset','markup');
    if ((!in_array($component['type'], $types_to_ignore)) && !empty($submission->data[$key])) {

      print '<tr><td style="background:#F2F2F2;padding: 5px;">';
      print '<p style="font-size:14px;line-height:18px;font-family:Calibri,Arial,sans-serif;"><strong>' . $component['name'] . '</strong></p>';

      if (!empty($submission->data[$key])) {

        $submission_value = '';

        if ($component['type'] == 'select') {

          $options = array();
          $items = explode("\n", $component['extra']['items']);
          foreach ($items as $item) {

            $item = trim($item);
            $item_parts = explode('|', $item);

            if (isset($item_parts[0]) && isset($item_parts[1])) {
              $options[$item_parts[0]] = $item_parts[1];
            }
            else if (isset($item_parts[0])) {
              $options[$item_parts[0]] = trim($item_parts[0]);
            }
          }

          foreach ($submission->data[$key] as $j => $value) {
            if (isset($options[$submission->data[$key][$j]])) {
              $submission_value .= $options[$submission->data[$key][$j]] . '</br>';
            }
          }

        }
        else {
          foreach ($submission->data[$key] as $k => $sub) {
            $submission_value .= $sub;
          }
        }



        print '</td></tr><tr><td style="padding:5px;padding-left:20px;">';
        print '<p style="font-size:14px;line-height:18px;font-family:Calibri,Arial,sans-serif;">' . $submission_value . '</p>';
        print '</td></tr>';
      }
    }
  }
?>

</table>

<?php print ($email['html'] ? '<p>' : '') . t('Submitted on [submission:date:long]'). ($email['html'] ? '</p>' : ''); ?>

<?php if ($user->uid): ?>
<?php print ($email['html'] ? '<p>' : '') . t('Submitted by user: [submission:user]') . ($email['html'] ? '</p>' : ''); ?>
<?php else: ?>
<?php print ($email['html'] ? '<p>' : '') . t('Submitted by anonymous user: [submission:ip-address]') . ($email['html'] ? '</p>' : ''); ?>
<?php endif; ?>

<?php print ($email['html'] ? '<p>' : '') . t('The results of this submission may be viewed at:') . ($email['html'] ? '</p>' : ''); ?>

<?php print ($email['html'] ? '<p>' : ''); ?>[submission:url]<?php print ($email['html'] ? '</p>' : ''); ?>
