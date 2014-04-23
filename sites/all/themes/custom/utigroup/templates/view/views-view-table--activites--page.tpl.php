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
<h1 class="h1 titre">
    <span>     
        <?php print( strip_tags($rows[0]['title'])); ?>
    </span>
</h1>
<article class="clearfix block-2">
    <div class="content">
       <?php print($rows[0]['body']); ?>
    </div>
    <div class="image">
        <?php print($rows[0]['field_image_actualite']); ?>
    </div>
</article>
<div class="block-wrapper clearfix">
    <div class="block-3 left w1 h1 bg-offre">
        <div class="get-all">
            <div class="titre">Notre offre</div>
            <div class="content">
              <?php
                $tabOffres = explode( ',', $rows[0]['field_nos_principaux_metiers'] );
                foreach ($tabOffres as &$value) {
                $node = node_load($value);            
                $valsurname = field_get_items('node', $node, 'body');                
                $des = $valsurname[0]['safe_value'];
               
               ?>  
                <div class="clearfix ligne">
                    <span class="left">
                        > <?php echo $node->title;?>
                    </span>
                    <a  href="#line-<?php echo trim($value);?>-offre" class="fancybox right">En savoir +</a>
                    <div id="line-<?php echo trim($value);?>-offre" style="display:none;">
                        <div class="fancybox-titre">Notre offre</div>
                        <div class="fancybox-content">
                            <p class="color">
                                <?php echo $node->title;?>
                            </p>
                           <?php echo $des;?>
                        </div>
                    </div>
                </div>
                <?php } ?> 
            </div>
        </div>
    </div>

    <div class="block-3 right w1 h1 bg-metiers">
        <div class="get-all">
            <div class="titre">Nos principaux métiers</div>
            <div class="content">
            <?php
             $tabMeties = explode( ',', $rows[0]['field_titre_maitrise_ouvrage'] );
             foreach ($tabMeties as &$value) {
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
                    <div id="line-content-nos-principaux-metiers" style="display:none;">
                        <div class="fancybox-titre">Nos principaux métiers</div>
                        <div class="fancybox-content">
                             <?php print($rows[0]['field_field_text_en_savoir_plus']); ?>
                        </div>
                    </div>
                    <a href="#line-content-nos-principaux-metiers" class="fancybox right" href="#">En savoir +</a>
                </div>
            </div>
        </div>
    </div>
</div>


