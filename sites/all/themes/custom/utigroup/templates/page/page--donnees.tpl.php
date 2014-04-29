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
            <h2 class="titre">Nos clients</h2>
                <img src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/logo-mutuelle.jpg" />
        </section>
        <aside class="sidebar">
                <section class="dernieres-offres">
                <h2 class="titre">Nos dernières offres d'emploi</h2>
                <ul>
                        <li><a href="#">> Analyste Programmeur<br>Grand Système Assurance</a></li>
                        <li><a href="#">> Analyste Développeur <br>Oracle</a></li>
                </ul>
                </section>
           <?php 
             if (arg(0) == "recrutement" || arg(0) == "integration" || arg(0) == "suivi-de-carriere"  || arg(0) == "vie-dans-lentreprise") {
           ?> 
                <a href="#" class="button-section">Candidature<span class="arrow-left"></span></a>
                <a href="#" class="button-section">Annonces<span class="arrow-left"></span></a> 
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
