<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<?php include('.' . base_path() . path_to_theme() . '/templates/includes/header.php') ?>	
<?php print $breadcrumb; ?>
<!--main -->
<div class="main">
	<div class="main-wrapper">
			<section class="slideshow">
				<div id="slider1_container" style="position: relative; top: 0px; left: 0px; width: 784px; height: 346px;">
					<!-- Slides Container -->
					<div u="slides" style="cursor: move; position: absolute; overflow: hidden; left: 0px; top: 0px; width: 784px; height: 346px;">
					<div><img u="image" src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/slideshow/slide1.jpg" /></div>
					<div><img u="image" src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/slideshow/slide2.jpg" /></div>
					<div><img u="image" src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/slideshow/slide3.jpg" /></div>
					<div><img u="image" src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/slideshow/slide4.jpg" /></div>
					</div>		
			</section>
			<section class="fil-actu">texte texte texte texte texte</section>
			<section class="nos-client"><a href="#"><img src="<?php echo base_path().drupal_get_path('theme', 'utigroup'); ?>/assets/img/logo-mutuelle.jpg" /><a/></section>
			<section class="dernieres-offres">
				<h2 class="titre">Nos dernières offres d'emploi</h2>
				<ul>
					<li><a href="#">> Analyste Programmeur<br>Grand Système Assurance</a></li>
					<li><a href="#">> Analyste Développeur <br>Oracle</a></li>
				</ul>
			</section>
			<section class="information">
				<a href="#" class="block groupe"><span class="fleche"></span>
					<p class="texte">Toute la puissance de la nouvelle intelligence informatique</p>
				</a>
				<a href="#" class="block temoignages"><span class="fleche"></span>
					<p class="texte">Faites connaissances avec notreentreprise au travers de témoignages de nos collaborateurs</p>
				</a>
				<a href="#" class="block rejoigneznous"><span class="fleche"></span>
				<p class="texte">Découvrez ici notre processus de recrutement et postulez en ligne</p>
				</a>
			</section>
		</div>
	</div>

	<?php include('.' . base_path() . drupal_get_path('theme', 'utigroup') . '/templates/includes/footer.php') ?>
</div>
<!--/page-->
