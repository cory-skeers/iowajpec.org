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
<header id="header" class="header" role="banner">
  <div class="navigation-wrapper">
    <div id="navigation" class="container navigation navbar" role="navigation">
      <div class="site-branding">
        <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#block-jpec-megamenu-jpec-megamenu-main" aria-expanded="false">
          <span class="sr-only">Toggle navigation</span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
          <span class="icon-bar"></span>
        </button>
        <a href="<?php print $front_page; ?>" rel="home" title="<?php print t('Home'); ?>">
          <span class="site-name">John Pappajohn Entrepreneurial Center</span>
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
              <?php if (!empty($header_suffix_fields)): ?>
                <div class="header-suffix"><?php print render($header_suffix_fields); ?></div>
              <?php endif; ?>
            </div>
          </div>

          <?php if (!empty($header_image_tall)): ?>
            <?php print render($header_image_tall); ?>
          <?php endif; ?>

        </div>
      <?php endif; ?>
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

        <?php if (!empty($extra_content)): ?>
        <div class="extra_content">
          <?php print render($extra_content); ?>
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
    </div>
    <div id="content" class="edgy">
      <?php print render($page['content']); ?>
    </div>
  </div> <!-- /#main -->
</div> <!-- /#main-wrapper -->


<?php if (!empty($video_modal)): ?>
  <div class="video-modal"><?php print render($video_modal); ?></div>
<?php endif; ?>

<footer id="footer" class="footer" role="contentinfo">
  <div class="primary-footer">
    <div class="container">
      <div class="primary-footer-left">
        <a class="tippie-footer-link" href="/"><img alt="John Pappajohn Entrepreneurial Center at The University of Iowa" src="/<?php print drupal_get_path("theme", "jpec"); ?>/assets/images/jpec-uiowa.png"/></a>
        <h2 class="offscreen">Contact Information</h2>
        <p class="tippie-address">
          John Pappajohn Entrepreneurial Center<br/>
          108 John Pappajohn Business Building<br/>
          Suite S160<br/>
          Iowa City, IA 52242-1994
        </p>
        <p class="tippie-phone-email">
          <a href="tel:+1-319-335-1022">319-335-1022</a><br/>
          <a href="mailto:iowajpec@uiowa.edu">iowajpec@uiowa.edu</a>
        </p>
      </div>
      <div class="primary-footer-right">
        <div class="footer-link-list jpec-students">
          <h2 class="link-list-heading">UI Students</h2>
          <ul class="link-list">
            <li>
              <?php print l(t('Academics'), 'students/academics');?>
            </li>
            <li>
              <?php print l(t('Real-World Experiences'), 'students/real-world-experience');?>
            </li>
            <li>
              <?php print l(t('Student Ventures'), 'students/student-ventures');?>
            </li>
            <li>
              <?php print l(t('Student Clubs & Orgs'), 'students/student-clubs-organizations');?>
            </li>
          </ul>
        </div>
        <div class="footer-link-list jpec-resources">
          <h2 class="link-list-heading">Community Programs</h2>
          <ul class="link-list">
            <li>
              <?php print l(t('Venture School'), 'community/venture-school');?>
            </li>
            <li>
              <?php print l(t('I-Corps Innovation Workshop'), 'community/i-corps-innovation-workshop');?>
            </li>
            <li>
              <?php print l(t('Business Consulting'), 'community/business-consulting');?>
            </li>
            <li>
              <?php print l(t('International Support'), 'community/international-business');?>
            </li>
            <li>
              <?php print l(t('SBDC'), 'iowa-small-business-development-center');?>
            </li>
            <li>
              <?php print l(t('K-12 Outreach'), 'community/jacobson-institute');?>
            </li>
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
              <?php print l(t('Competitions'), 'competitions');?>
            </li>
            <li>
              <?php print l(t('Donate'), 'https://donate.givetoiowa.org/s/1773/foundation/interior.aspx?sid=1773&gid=2&pgid=509&cid=1288&bledit=1&dids=148.579&sort=1');?>
            </li>
            <li>
              <?php print l(t('People Directory'), 'people-directory');?>
            </li>
            <li>
              <?php print l(t('Careers'), 'careers');?>
            </li>
            <li>
              <?php print l(t('Contact Us'), 'contact-us');?>
            </li>
          </ul>
        </div>
        <div class="footer-link-list tippie-social-media">
          <h2 class="link-list-heading">Follow John Pappajohn Entrepreneurial Center</h2>
          <ul class="link-list">
            <li>
              <a href="https://www.facebook.com/Entrepreneurship.at.Iowa" class="tippie-facebook">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-facebook fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">Facebook</span>
              </a>
            </li>
            <li>
              <a href="https://twitter.com/iowajpec" class="tippie-twitter">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-twitter fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">Twitter</span>
              </a>
            </li>
            <li>
              <a href="https://www.linkedin.com/school/iowajpec/" class="tippie-linkedin">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-linkedin fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">LinkedIn</span>
              </a>
            </li>
            <li>
              <a href="https://www.instagram.com/iowajpec/" class="tippie-instagram">
                <span class="fa-stack fa-lg">
                  <i class="fa fa-circle fa-stack-2x"></i>
                  <i class="fa fa-instagram fa-stack-1x fa-inverse"></i>
                </span>
                <span class="social-media-platform">Instagram</span>
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
        © Copyright <?php print(date('Y')); ?> John Pappajohn Entrepreneurial Center
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
