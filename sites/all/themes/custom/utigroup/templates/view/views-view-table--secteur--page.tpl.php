<?php
/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>
<h1 class="h1 titre display-none">
    <span>
        <?php print( strip_tags($rows[0]['title'])); ?>
    </span>
</h1>

<div class="block-wrapper clearfix">
    <div class="block-2 w1 h1 left">
        <div class="content absolute">
            <?php print( $rows[0]['body']); ?>
        </div>
        <div class="image">
            <?php print( $rows[0]['field_image_secteur']); ?>
        </div>
    </div>
    <?php
    preg_match_all ('#<img.+src="(.+?)"#i', $rows[0]['field_image_produit'], $img);   
    $imgProd = $img[1][0];
   ?>
    <div style='background:url("<?php echo $imgProd; ?>") no-repeat scroll center center rgba(0, 0, 0, 0);'  class="block-3 right w2 h2">
        <div class="get-all">
            <div class="titre"><?php echo t('Produits'); ?></div>
            <div class="content">
                <?php
                $tabproduit = explode( ',', $rows[0]['field_produit_secteur'] );
                foreach ($tabproduit as &$value) {
               ?>
                   <div class="clearfix ligne">
                       <span class="left">
                           > <?php echo $value;?>
                       </span>
                   </div>
               <?php
                }
               ?>             
                <div class="clearfix ligne">
                    <a  href="#line-produits" class="fancybox right"><?php echo t('En savoir +'); ?></a>
                </div>

                <div id="line-produits" style="display:none;">
                    <div class="fancybox-titre"><?php echo t('Produits'); ?></div>
                    <div class="fancybox-content">
                       <?php print($rows[0]['field_savoir_plus_produits']); ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>

<div class="block-wrapper clearfix">
    <?php
    preg_match_all ('#<img.+src="(.+?)"#i', $rows[0]['field_image_banque'], $img);   
    $imgBang = $img[1][0];
   ?>
    <div  style='background:url("<?php echo $imgBang; ?>") no-repeat scroll center center rgba(0, 0, 0, 0);' class="block-3 left w3 h2 mr-3">
        <div class="get-all">
            <div class="titre"><?php echo t('Banques/Finances'); ?></div>
            <div class="content">
               <?php
                $tabbanque = explode( ',', $rows[0]['field_article_banque_scteur'] );
                foreach ($tabbanque as &$value) {
               ?>
                   <div class="clearfix ligne">
                       <span class="left">
                           > <?php echo $value;?>
                       </span>
                   </div>
               <?php
                }
               ?> 
                
                <div class="clearfix ligne"><a  href="#line-banques-finances" class="fancybox right"><?php echo t('En savoir +'); ?></a></div>

                <div id="line-banques-finances" style="display:none;">
                    <div class="fancybox-titre"><?php echo t('Banques/Finances'); ?></div>
                    <div class="fancybox-content">
                       <?php print($rows[0]['field_en_savoir_plusbanque']); ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <?php
    preg_match_all ('#<img.+src="(.+?)"#i', $rows[0]['field_image_assurance_secteur'], $img);   
    $imgAss = $img[1][0];
   ?>
    <div style='background:url("<?php echo $imgAss; ?>") no-repeat scroll center center rgba(0, 0, 0, 0);' class="block-3 left w3 h2 mr-3">
        <div class="get-all">
            <div class="titre tow-line"><?php echo t('Assurances/').'<br>'.t('Mutuelle/retraite'); ?></div>
            <div class="content">
               <?php
                $tabassurance = explode( ',', $rows[0]['field_article_assurance_secteur'] );
                foreach ($tabassurance as &$value) {
               ?>
                   <div class="clearfix ligne">
                       <span class="left">
                           > <?php echo $value;?>
                       </span>
                   </div>
               <?php
                }
               ?> 
                <div class="clearfix ligne"><a  href="#line-assurances-mutuelle-retraite" class="fancybox right"><?php echo t('En savoir +'); ?></a></div>

                <div id="line-assurances-mutuelle-retraite" style="display:none;">
                    <div class="fancybox-titre"><?php echo t('Assurances/Mutuelle/retraite'); ?></div>
                    <div class="fancybox-content">
                        <?php print($rows[0]['field_en_savoir_plus_assurance']); ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <?php
    preg_match_all ('#<img.+src="(.+?)"#i', $rows[0]['field_image_industri_secteur'], $img);   
    $imgindustrie = $img[1][0];
   ?>
    <div style='background:url("<?php echo $imgindustrie; ?>") no-repeat scroll center center rgba(0, 0, 0, 0);' class="block-3 right w2 h2">
        <div class="get-all">
            <div class="titre tow-line"><?php echo t('Industrie<br>services'); ?></div>
            <div class="content">
                <?php
                $tabindustrie = explode( ',', $rows[0]['field_article_industrie_secteur'] );
                foreach ($tabindustrie as &$value) {
               ?>
                   <div class="clearfix ligne">
                       <span class="left">
                           > <?php echo $value;?>
                       </span>
                   </div>
               <?php
                }
               ?> 
                <div class="clearfix ligne"><a  href="#line-industrie-services" class="fancybox right"><?php echo t('En savoir +'); ?></a></div>

                <div id="line-industrie-services" style="display:none;">
                    <div class="fancybox-titre"><?php echo t('Industrie services'); ?></div>
                    <div class="fancybox-content">
                       <?php print($rows[0]['field_en_savoir_plus_secteur']); ?>
                    </div>
                </div>
            </div>
        </div>
    </div>
</div>
