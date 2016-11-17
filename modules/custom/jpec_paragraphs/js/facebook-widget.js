/**
 * @file
 * Scripts for Facebook widget.
 * @see https://developers.facebook.com/docs/plugins/page-plugin/
 */

(function($) {

  Drupal.behaviors.tippie_paragraphs = {
    attach: function (context, settings) {
      var f_app_id = '1382777578611426';
      // code from the Facebook page
      window.fcbk = (function(d, s, id) {
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) return;
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.7&appId=" + f_app_id;
        fjs.parentNode.insertBefore(js, fjs);

      }(document, 'script', 'facebook-jssdk'));
    }
  }

})(jQuery);
