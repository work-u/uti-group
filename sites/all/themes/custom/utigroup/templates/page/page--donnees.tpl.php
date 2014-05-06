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
            <?php if (isset($messages)): ?>
                <div id="messages"><div class="section clearfix">
                        <?php print $messages; ?>
                    </div></div> <!-- /.section, /#messages -->
            <?php endif; ?>
            <?php if ($tabs && $is_admin): ?>
                <div class="tabs">
                    <?php print render($tabs); ?>
                </div>
            <?php endif; ?> 
            <!-- <div class="h1 titre"><span>Contacts</span></div> -->
            <div class="clearfix block-5">
                 <nav class="donnes-nav">
                        <ul>
                                <li class="ico-01 ico-actionnaires one-line"><a href="node/31">Actionnaires</a></li>
                                <li class="ico-02 ico-direction-generale"><a href="node/28">Direction Générale</a></li>
                                <li class="ico-03 ico-nos-implantations"><a href="node/29">Nos implantations</a></li>
                                <li class="ico-04 ico-comptes-consolides"><a href="node/32">Comptes consolidés</a></li>
                                <li class="ico-05 ico-chiffre-d-affaires"><a href="node/33">Chiffre d’affaires</a></li>
                                <li class="ico-06 ico-resultats-par-filiales"><a href="node/38">Résultats par filiales</a></li>
                                <li class="ico-07 ico-documents-financiers"><a href="/documents-financiers">Documents financiers</a></li>
                                <li class="ico-08 ico-actualites one-line"><a href="/communiques-de-presse">Actualités</a></li>
                                <li class="ico-09 ico-evenement one-line"><a href="node/39">Événements</a></li>
                                <li class="ico-010 ico-assemblees-generales"><a href="node/34">Assemblées Générales</a></li>
                                <li class="ico-011 ico-contacts one-line"><a href="node/27">Contacts</a></li>
                                <li class="ico-012 ico-alertes-e-mail"><a href="node/31">Alertes e-mail</a></li>
                        </ul>
                </nav>   
            </div>  
        </div>

        <section class="nos-client">
                <div id="slider_nos_client" style="position: relative; top: 0px; left: 0px; width: 160px; height: 100px;">
                    <?php print render($page['clients_side_bar']); ?>
                 </div>
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
