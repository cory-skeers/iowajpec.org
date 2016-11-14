<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 */
?>
<header id="header" class="header" role="header">
  <div class="navigation-wrapper">
    <div id="navigation" class="container navigation">
      <div class="site-branding">
        <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#block-tippie-megamenu-tippie-megamenu-main" aria-expanded="false">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
        <a href="<?php print $front_page; ?>" rel="home" title="<?php print t('Home'); ?>">
          <span class="site-name">Tippie College of Business</span>
        </a>
      </div>
      <?php print render($page['navigation']); ?>
    </div>
  </div>
</header>

<div id="main-wrapper">
  <div id="main" class="main" role="main">
    <div id="page-header">
      <?php if ($title): ?>
        <div class="<?php print $header_classes; ?>"<?php print $header_attributes; ?>>
          <div class="container">
            <div class="header-content">
              <?php if (!empty($section_title)): ?>
                <span class="section-title"><?php print $section_title; ?></span>
              <?php endif; ?>
              <h1 class="title"><?php print $title; ?></h1>
              <?php if (!empty($header_fields)): ?>
                <div class="header-fields"><?php print render($header_fields); ?></div>
              <?php endif; ?>
            </div>
          </div>
        </div>
      <?php endif; ?>
    </div>
    <?php if ($breadcrumb || $messages || $tabs || $action_links): ?>
      <div class="container breadcrumb-container">
        <?php if ($messages): ?>
          <div id="messages">
            <?php print $messages; ?>
          </div>
        <?php endif; ?>
        <?php if ($breadcrumb): ?>
        <div id="breadcrumb" class="visible-desktop">
          <?php print $breadcrumb; ?>
        </div>
        <?php endif; ?>
        <?php if ($tabs): ?>
          <div class="tabs">
            <?php print render($tabs); ?>
          </div>
        <?php endif; ?>
        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?>
      </div>
    <?php endif; ?>
    <div id="content" class="container">
      <?php print render($page['content']); ?>
    </div>
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper --> 

<footer id="footer" class="footer" role="footer">
  <div class="primary-footer">
    <div class="container">
      <div class="primary-footer-left">
        <a class="tippie-footer-link" href="http://tippie.uiowa.edu"><img alt="Tippie College of Business at The University of Iowa" src="/<?php print drupal_get_path("theme", "tippie"); ?>/assets/images/tippie-uiowa.png"/></a>
        <h2 class="offscreen">Contact Information</h2>
        <p class="tippie-address">
          Tippie College of Business<br/>
          108 John Pappajohn Business Building<br/>
          Iowa City, IA 52242-1994
        </p>
        <p class="tippie-phone-email">
          <a href="tel:+1-319-335-0862">319-335-0862</a>
          <span class="phone-seperator">&nbsp;&#124;&nbsp;</span>
          <a href="tel:+1-800-553-4692">800-553-4692</a><br/>
          <a href="mailto:tippie-business@uiowa.edu">tippie-business@uiowa.edu</a>
        </p>
      </div>
      <div class="primary-footer-right">
        <div class="footer-link-list tippie-departments">
          <h2 class="link-list-heading">Departments</h2>
          <ul class="link-list">
            <li>
              <?php print l(t('Accounting'), 'accounting');?>
            </li>
            <li>
              <?php print l(t('Economics'), 'economics');?>
            </li>
            <li>
              <?php print l(t('Finance'), 'finance');?>
            </li>
            <li>
              <?php print l(t('Management & Organizations'), 'management-and-organizations');?>
            </li>
            <li>
              <?php print l(t('Management Sciences'), 'management-sciences');?>
            </li>
            <li>
              <?php print l(t('Marketing'), 'marketing');?>
            </li>
          </ul>
        </div>
        <div class="footer-link-list tippie-audiences">
          <h2 class="link-list-heading">Audiences</h2>
          <ul class="link-list">
            <li>
              <?php print l(t('Alumni'), 'about-tippie/tippie-alumni');?>
            </li>
            <li>
              <?php print l(t('Companies & Recruiters'), 'about-tippie/companies-and-recruiters');?>
            </li>
            <li>
              <?php print l(t('Faculty/Staff'), 'faculty-staff-resources');?>
            </li>            
            <li>
              <?php print l(t('Jobs at Tippie'), 'jobs');?>
            </li>
            <li><a href="http://tip.biz.uiowa.edu/">TIP Intranet</a></li>
          </ul>
        </div>
        <div class="footer-link-list tippie-information">
          <h2 class="link-list-heading">Info</h2>
          <ul class="link-list">
            <li>
              <?php print l(t('News'), 'news');?>
            </li>
            <li>
              <?php print l(t('Events'), 'events');?>
            </li>
            <li>
              <?php print l(t('People Directory'), 'people');?>
            </li>
            <li>
              <?php print l(t('Locations'), 'locations');?>
            </li>
            <li>
              <a href="http://www.givetoiowa.org/business" target="_blank">Give to Tippie</a>
            </li>             
            <li>
              <?php print l(t('Contact Us'), 'contact-us');?>
            </li>             
          </ul>
        </div>
        <div class="footer-link-list tippie-social-media">
          <h2 class="link-list-heading">Follow Tippie College of Business</h2>
          <ul class="link-list">
            <li>
              <a href="https://www.facebook.com/tippieiowa" class="tippie-facebook">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-facebook fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">Facebook</span>
              </a>
            </li>
            <li>
              <a href="https://twitter.com/tippieiowa" class="tippie-twitter">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">Twitter</span>
              </a>
            </li>
            <li>
              <a href="https://www.linkedin.com/edu/university-of-iowa---henry-b.-tippie-college-of-business-18229" class="tippie-linkedin">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">LinkedId</span>
              </a>
            </li>
            <li>
              <a href="http://instagram.com/tippiecollege/" class="tippie-instagram">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-instagram fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">Instagram</span>
              </a>
            </li>
            <li>
              <a href="https://www.flickr.com/tippieiowa/" class="tippie-flickr">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-flickr fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">Flickr</span>
              </a>
            </li>
            <li>
              <a href="https://www.youtube.com/user/tippiebiz" class="tippie-youtube">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-youtube fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">YouTube</span>
              </a>
            </li>
            <li>
              <a href="https://www.pinterest.com/tippiecob/" class="tippie-pinterest">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-pinterest fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">Pinterest</span>
              </a>
            </li>            
          </ul>
        </div>
      </div>
    </div>
  </div>
  <div class="secondary-footer">
    <div class="container">
      <div class="copyright">
        © Copyright <?php print(date('Y')); ?> Tippie College of Business
      </div>
      <div class="secondary-footer-links">
        <ul>
          <li><a href="http://www.uiowa.edu/">University of Iowa</a></li>
          <li><a href="http://www.uiowa.edu/a-z">UI A to Z Index</a></li>
          <li><a href="mailto:business-webmaster@uiowa.edu">Comments &amp; Questions</a></li>
          <li><a href="http://www.uiowa.edu/homepage/online-privacy-information">Privacy Statement</a></li>
        </ul>
      </div>
    </div>
  </div>
</footer>

<!-- Facebook Pixel Start -->
<script>(function() {
  var _fbq = window._fbq || (window._fbq = []);
  if (!_fbq.loaded) {
    var fbds = document.createElement('script');
    fbds.async = true;
    fbds.src = '//connect.facebook.net/en_US/fbds.js';
    var s = document.getElementsByTagName('script')[0];
    s.parentNode.insertBefore(fbds, s);
    _fbq.loaded = true;
  }
  _fbq.push(['addPixelId', '365711163607133']);
})();
window._fbq = window._fbq || [];
window._fbq.push(['track', 'PixelInitialized', {}]);
</script>
<noscript><img height="1" width="1" alt="" style="display:none" src="https://www.facebook.com/tr?id=365711163607133&amp;ev=PixelInitialized" /></noscript>
<!-- Facebook Pixel End -->

<!-- Google Code for Remarketing Tag -->
<script type="text/javascript">
/* <![CDATA[ */
var google_conversion_id = 1000829928;
var google_custom_params = window.google_tag_params;
var google_remarketing_only = true;
/* ]]> */
</script>
<script type="text/javascript" src="//www.googleadservices.com/pagead/conversion.js">
</script>
<noscript>
<div style="display:inline;">
<img height="1" width="1" style="border-style:none;" alt="" src="//googleads.g.doubleclick.net/pagead/viewthroughconversion/1000829928/?value=0&amp;guid=ON&amp;script=0"/>
</div>
</noscript>
<!-- End Google Code for Remarketing Tag -->

<!-- LinkedIn Insight Tag -->
<script type="text/javascript">
  _bizo_data_partner_id = "8012";
</script>
<script type="text/javascript">
(function() {
  var s = document.getElementsByTagName("script")[0];
  var b = document.createElement("script");
  b.type = "text/javascript";
  b.async = true;
  b.src = (window.location.protocol === "https:" ? "https://sjs" : "http://js") + ".bizographics.com/insight.min.js";
  s.parentNode.insertBefore(b, s);
})();
</script>
<noscript>
  <img height="1" width="1" alt="" style="display:none;" src="//www.bizographics.com/collect/?pid=8012&fmt=gif" />
</noscript>
<!-- End LinkedIn Insight Tag -->

<!-- ActOn Tracking Beacon -->
 <script>/*<![CDATA[*/(function(w,a,b,d,s){w[a]=w[a]||{};w[a][b]=w[a][b]||{q:[],track:function(r,e,t){this.q.push({r:r,e:e,t:t||+new Date});}};var e=d.createElement(s);var f=d.getElementsByTagName(s)[0];e.async=1;e.src='//go.biz.uiowa.edu/cdnr/94/acton/bn/tracker/17352';f.parentNode.insertBefore(e,f);})(window,'ActOn','Beacon',document,'script');ActOn.Beacon.track();/*]]>*/</script>
 <!-- End ActOn Tracking Beacon -->



