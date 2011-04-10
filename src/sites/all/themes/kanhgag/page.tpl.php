<?php
// $Id: page.tpl.php,v 1.1.2.3 2009/01/11 18:17:25 ebizondrupalservices Exp $
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" lang="<?php print $language->language ?>" xml:lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
 <head>
<?php global $base_url;?>
    <title><?php print $head_title ?></title>
    <?php print $head ?>
    <?php print $styles ?>
    <?php print $scripts ?>
   
  </head>

  <body class="<?php print $body_classes ?>">

    <div id="layout">
      
      <div id="header">
        
	<div id="logo">
              
        <?php
          // Prepare header
          $site_fields = array();
          if ($site_name) {
            $site_fields[] = check_plain($site_name);
          }
          if ($site_slogan) {
            $site_fields[] = check_plain($site_slogan);
          }
          $site_title = implode(' ', $site_fields);
          $site_fields[0] = '<span>'. $site_fields[0] .'</span>';
          $site_html = implode(' ', $site_fields);

          if ($logo || $site_title) {
            print '<h1><a href="'. check_url($base_path) .'" title="'. $site_title .'">';
            if ($logo) {
              //print '<img src="'. check_url($logo) .'" alt="'. $site_title .'" id="logo" />';
            }
            print $site_html .'</a></h1>';
          }
        ?>
       

        </div>
        <hr class="noscreen" />   
             
      </div>

        <?php if ($header): ?>
          <div id="header-region">
            <?php print $header ?>
          </div>
        <?php endif ?>
        <hr class="noscreen" />  

        <div id="navigation" class="clear-block">
        <ul>
          <li><?php if (isset($primary_links)) { ?><?php print theme('links', $primary_links, array('class' =>'links', 'id' => 'navlist')) ?><?php } ?></li>
        </ul>
        </div>

<?php if ($left): ?>
              <div class="sidebar">
              <?php print $left;?>
              </div>
<?php endif; ?>
          
	<div id="main" class="clear-block">

<?php if ($title): ?>
          <h1 class="title"><?php print $title; ?></h1>
<?php endif; ?>

                          <?php print $messages;?>
	  <?php print $tabs;?>
         
         <div class="mainpage clear-block">
         <?php print $content;?> 
	       </div>
<?php if ($right): ?>
              <div class="rightblock">
              <?php print $right;?>
              </div>
<?php endif; ?>
        </div>
        </div>
        <div id="footer">
        <div id="footer-inside">
          <?php print $footer ?>
          <?php print $footer_message ?>
	</div><div style="clear: both;"></div></div>
       <?php print $closure ?>
  </body>
</html>
