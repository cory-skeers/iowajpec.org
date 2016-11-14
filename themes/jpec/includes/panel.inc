<?php
/**
 * @file
 * Theme and preprocess functions for panels and panes.
 */
function tippie_preprocess_panels_pane(&$vars) {
  //dpm($vars);
  switch ($vars['classes_array'][1]) {
    
    case 'pane-instagram-pane':
      
      $social_icons = '        
        <div class="tippie-social-media">
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
        </div>';
      $vars['content']['#markup'] = '<div id="instagram-feed"><div class="content container"><div class="row"><div class="col-sm-6"><h2>Connect</h2></div><div class="col-sm-6">' . $social_icons . "</div></div>" . $vars['content']['#markup'] . '</div></div>';
    break;

    case 'pane-block':
      if ($vars['classes_array'][2] == 'pane-views-exp-programs-explore-programs' && $vars['is_front']) {
        $vars['content'] = '<div class="content container"><div class="content-wrapper"><h2>Explore Programs</h2>' . $vars['content'] . '</div></div>';
      }
    break;  
  }
}