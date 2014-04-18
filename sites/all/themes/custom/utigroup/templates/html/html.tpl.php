<!DOCTYPE html>
<!--[if lt IE 7]> <html class="no-js ie lt-ie9 lt-ie8 lt-ie7 lte-ie10" lang="fr"> <![endif]-->
<!--[if IE 7]> <html class="no-js ie ie7 lt-ie9 lt-ie8 lte-ie10" lang="fr"> <![endif]-->
<!--[if IE 8]> <html class="no-js ie ie8 lt-ie9 lte-ie10" lang="fr"> <![endif]-->
<!--[if IE 9]> <html class="no-js ie ie9 lt-ie10 lte-ie10" lang="fr"> <![endif]-->
<!--[if lte IE 10]> <html class="no-js ie lte-ie10" lang="fr"> <![endif]-->
<!--[if !IE]><!--> <html class="no-js" lang="fr"> <!--<![endif]-->

    <head>	
        <?php print $head; ?>
        <meta charset="utf-8">
        <meta name="viewport" content="initial-scale=1.0">
        <!--[if IE]><meta http-equiv="X-UA-Compatible" content="IE=edge" /><![endif]-->

        <title><?php print strip_tags($head_title); ?></title>

        <!-- CSS : En production, regrouper & compresser les CSS -->

        <?php print $styles; ?>
        <!-- Scripts : Placés en fin de page pour de meilleures performances -->
        <?php print $scripts; ?>

        <!-- Modernizr http://modernizr.com/docs/#installing 
        <script src="assets/js/lib/modernizr.js"></script>-->

    </head>

    <body class="body <?php print $classes; ?>" <?php print $attributes; ?>>

        <div class="body-wrapper">
            <?php print $page_top; ?>
            <?php print $page; ?>
            <?php print $page_bottom; ?>
        </div><!--/wrapper-->

        

    </body>
</html>