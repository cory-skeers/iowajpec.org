<?php

/**
 * @file field--field-2x2-title.tpl.php
 * Default template implementation to display the value of the 2x2 title.
 *
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions/. *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>

<?php 
  $formatted_date = $element[0]['#markup'];
  // display custom format ONLY in Full display view mode
  // custom format: Month 1 - 23, Year
  
  if (isset($element['#items'][0]['value2']) && !empty($element['#items'][0]['value2']) && $element['#view_mode'] == 'full') {

    $timestamp = $element['#items'][0]['value'];
    $timestamp2 = $element['#items'][0]['value2'];
    $ev_startdate = date('j', strtotime($timestamp));
    //$ev_starttime = date('g:i a', strtotime($timestamp));
    $ev_enddate = date('j', strtotime($timestamp2));
    //$ev_endtime = date('g:i a', strtotime($timestamp2)); 
    $ev_startmonth = date('F', strtotime($timestamp));
    $ev_endmonth = date('F', strtotime($timestamp2));
    $ev_startyear = date('Y', strtotime($timestamp));
    $ev_endyear = date('Y', strtotime($timestamp2));

    if ($element['#items'][0]['value'] == $element['#items'][0]['value2']) {
      $formatted_date = $ev_startmonth . ' ' . $ev_startdate . ', ' . $ev_startyear;
    } 
    else {
      // if the year is the same
      if ($ev_startyear == $ev_endyear) {
        $ev_startyear = '';
      }
      else { 
        $ev_startyear = ', ' . $ev_startyear; 
      }
      // if the month is the same
      if ($ev_startmonth == $ev_endmonth) {
        $ev_endmonth= '';
      }
      else { $ev_endmonth= ', ' . $ev_endmonth; }

      $formatted_date = $ev_startmonth . ' ' . $ev_startdate . $ev_startyear . ' - ' . $ev_endmonth . ' ' . $ev_enddate . ', ' . $ev_endyear;
    }
  }
?>

<div class="<?php print $classes; ?> "<?php print $attributes; ?>>
  <?php if (!$label_hidden) : ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="field-item">
        <?php 
          print render($formatted_date);
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
