<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<!--header -->
<header class="header">   
    <div class="header-wrapper">
        <a class="logo" href="<?php print base_path(); ?>">
            <img src="<?php echo base_path() . drupal_get_path('theme', 'utigroup'); ?>/assets/img/media/logo.png" height="60px"/>
        </a>

        <div class="menu-principale">
            <nav>
                <ul>
                    <?php print render($menu_supeieur); ?>
                </ul>
            </nav>
        </div>
        <div style="clear:both;"></div>
    </div>
</header>
<!--main -->
<div class="main page">
    <div class="main-wrapper">
        <div class="main-content">
            <?php if ($messages): ?>
                <div id="messages"><div class="section clearfix">
                        <?php print $messages; ?>
                    </div></div> <!-- /.section, /#messages -->
            <?php endif; ?>
            <?php if ($tabs && $is_admin): ?>
                <div class="tabs">
                    <?php print render($tabs); ?>
                </div>
            <?php endif; ?> 
            <?php print render($page['content']); ?>     
        </div>

         <section class="nos-client">
                <div id="slider_nos_client" style="position: relative; top: 0px; left: 0px; width: 160px; height: 100px;">
                    <?php print render($page['clients_side_bar']); ?>
                 </div>
            </section>

        <aside class="sidebar">
                <section class="dernieres-offres">
                <h2 class="titre">Nos dernières offres d'emploi</h2>
					<?php print render($page['last_offres']); ?> 
                </section>
           <?php 
             if (arg(0) == "annonces" || arg(0) == "rejoignez-nous" || arg(0) == "application" || arg(0) == "recrutement" || arg(0) == "integration" || arg(0) == "suivi-de-carriere"  || arg(0) == "vie-dans-lentreprise") {
           ?> 
                <a href="<?php echo url('application/add/candidature'); ?>" class="button-section"><?php echo t('Candidature'); ?><span class="arrow-left"></span></a>
                <a href="<?php echo url('annonces'); ?>" class="button-section"><?php echo t('Annonces'); ?><span class="arrow-left"></span></a> 
            <?php  } ?>   
        </aside>
    </div>
</div>
<!--footer -->
<footer class="footer">
    <div class="footer-wrapper">
        <div class="reseaux-sociaux">
            <ul>
                <?php print render($menu_footer_social); ?>
            </ul>
        </div>

        <div class="logo-footer"><a href="<?php echo variable_get('uti_group_afaq_url', ''); ?>"><img src="<?php echo base_path() . drupal_get_path('theme', 'utigroup'); ?>/assets/img/media/afaq.png"/></a></div>
        <div class="menu-footer">
            <ul>
                <?php print render($menu_footer); ?>
            </ul>
        </div>
    </div>
</footer>
