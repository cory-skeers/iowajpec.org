/**
 * @file
 * Custom scripts for theme.
 */

(function ($) {
  Drupal.behaviors.sidebarMenuToggle = {
    attach: function (context, settings) {

      // Switch between up and down facing caret icons.
      $('#block-menu-block-1').on('hidden.bs.dropdown', function () {
        $('.section-menu-toggle .caret').removeClass('up');
      })

      $('#block-menu-block-1').on('shown.bs.dropdown', function () {
        $('.section-menu-toggle .caret').addClass('up');
      })

      // follow the link when clicking on the first-word in megamenu
      $('.first-word').on('click', function() {
        var go_to_link = $(this).parent('a').attr('href');  
        location.href = go_to_link;
      });
    }
  };
})(jQuery);
