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
            <img src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/media/logo.png" height="60px"/>
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
<div class="main">
    <div class="main-wrapper">
            <section class="slideshow">
                <div id="slider1_container" style="position: relative; top: 0px; left: 0px; width: 784px; height: 346px;">
                    <!-- Slides Container -->
                        <?php print render($page['slide_home']); ?> 
                        <!-- bullet navigator container -->
                        <div u="navigator" class="jssorb17" style="position: absolute; bottom: 50px; right: 6px;">
                                <!-- bullet navigator item prototype -->
                                <div u="prototype" style="POSITION: absolute; WIDTH: 16px; HEIGHT: 16px;"></div>
                        </div>
                        <!-- Bullet Navigator Skin End -->
                </div>    
            </section>
           <section class="fil-actu"><marquee direction="left">Mon texte va vers la gauche</marquee></section>
            <section class="nos-client">
                <a href="#">
                    <img src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/logo-mutuelle.jpg" />
                <a/>
            </section>
            <section class="dernieres-offres">
                <h2 class="titre">Nos dernières offres d'emploi</h2>
                <ul>
                    <li><a href="#">> Analyste Programmeur<br>Grand Système Assurance</a></li>
                    <li><a href="#">> Analyste Développeur <br>Oracle</a></li>
                </ul>
            </section>
            
               <?php print render($page['footer_block']); ?>            
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
                
                <div class="logo-footer"><a href="<?php echo variable_get('uti_group_afaq_url', ''); ?>"><img src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/media/afaq.png"/></a></div>
                <div class="menu-footer">
                    <ul>
                        <?php print render($menu_footer); ?>
                    </ul>
                </div>
        </div>
    </footer>
    
<!--/page-->
