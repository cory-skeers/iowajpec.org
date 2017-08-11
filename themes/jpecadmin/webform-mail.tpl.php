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
<p>Testing some crazy test!!!</p>

<?php 
  $components = $node->webform['components'];
  foreach ($components as $key => $component) {
    print '<p>' . $component['name'] . '</p>';
  }
print($submission->data[2][0]);


?>

<?php print ($email['html'] ? '<p>' : '') . t('Submitted on [submission:date:long]'). ($email['html'] ? '</p>' : ''); ?><br/>

<?php if ($user->uid): ?>
<?php print ($email['html'] ? '<p>' : '') . t('Submitted by user: [submission:user]') . ($email['html'] ? '</p>' : ''); ?><br/>
<?php else: ?>
<?php print ($email['html'] ? '<p>' : '') . t('Submitted by anonymous user: [submission:ip-address]') . ($email['html'] ? '</p>' : ''); ?><br/>
<?php endif; ?>

<?php print ($email['html'] ? '<p>' : '') . t('Submitted values are') . ':' . ($email['html'] ? '</p>' : ''); ?><br/>

<?php print ($email['html'] ? '<p>' : '') . t('The results of this submission may be viewed at:') . ($email['html'] ? '</p>' : ''); ?>

<?php print ($email['html'] ? '<p>' : ''); ?>[submission:url]<?php print ($email['html'] ? '</p>' : ''); ?>
