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
<div class="h1 titre"><span><?php echo t('Uti en bref'); ?></span></div>
<article class="clearfix block-2 with-txt">
    <div class="content absolute content-wysiwyg">
        <?php print($rows[0]['body']); ?>
    </div>
    <div class="image">
        <?php print($rows[0]['field_photo_groupe']); ?>
        <?php print($rows[0]['body_1']); ?>
    </div>
</article>

<div class="h1 titre"><span><?php echo t('Uti en dates'); ?></span></div>
<div class="block-4 clearfix">
    <div class="carreau bg-vert">
        <a href="#box-1" class="content fancybox">
           <?php
                $tabDate1 = explode( ',', $rows[0]['field_date_1_groupe'] );              
           ?>  
            <div class="annee"><?php echo $tabDate1[0];?></div>
            <div class="titre"><?php echo $tabDate1[1];?></div>
            <div class="savoir-plus"><?php echo t('En savoir +'); ?></div>
            <div class="arrow-right"></div>
        </a>
        <div id="box-1" style="display:none;">
            <div class="fancybox-titre"><?php echo $tabDate1[0];?> <?php echo $tabDate1[1];?></div>
            <div class="fancybox-content">
                <?php print($rows[0]['field_savoir_plus_date1']); ?>
            </div>
        </div>
    </div>
     <?php
      $tabDate2 = explode( ',', $rows[0]['field_date_2'] );              
     ?> 
    <div class="carreau bg-vert">
        <a href="#box-2" class="content fancybox">
            <div class="annee"><?php echo $tabDate2[0];?></div>
            <div class="titre"><?php echo $tabDate2[1];?></div>
            <div class="savoir-plus"><?php echo t('En savoir +'); ?></div>
            <div class="arrow-right"></div>
        </a>
        <div id="box-2" style="display:none;">
            <div class="fancybox-titre"><?php echo $tabDate2[0];?> <?php echo $tabDate2[1];?></div>
            <div class="fancybox-content">
                <?php print($rows[0]['field_savoir_plus_date_2']); ?>
            </div>
        </div>
    </div>
    <?php
      $tabDate3 = explode( ',', $rows[0]['field_date_3_groupe'] );              
    ?>
    <div class="carreau bg-vert">
        <a href="#box-3" class="content fancybox">
            <div class="annee"><?php echo $tabDate3[0];?></div>
            <div class="titre"><?php echo $tabDate3[1];?></div>
            <div class="savoir-plus">En savoir +</div>           
        </a>
        <div id="box-3" style="display:none;">
            <div class="fancybox-titre"><?php echo $tabDate3[0];?> <?php echo $tabDate3[1];?></div>
            <div class="fancybox-content">
                <?php print($rows[0]['field_savoir_plus_date_3']); ?>
            </div>
        </div>
    </div>
    <?php
      $tabDate4 = explode( ',', $rows[0]['field_date_4_groupe'] );              
    ?>
    <div class="carreau bg-vert">
        <a href="#box-4" class="content fancybox">
            <div class="annee"><?php echo $tabDate4[0];?></div>
            <div class="titre"><?php echo $tabDate4[1];?></div>
            <div class="savoir-plus">En savoir +</div>           
        </a>
        <div id="box-4" style="display:none;">
            <div class="fancybox-titre"><?php echo $tabDate4[0];?> <?php echo $tabDate4[1];?></div>
            <div class="fancybox-content">
                <?php print($rows[0]['field_savoir_plus_date_4']); ?>
            </div>
        </div>
    </div>
</div>

<div class="h1 titre"><span>Le mot du président</span></div>
<div class="clearfix block-5">
    <div class="left left-wrapper texte content-wysiwyg">
      <?php echo $rows[0]['field_mot_president_groupe']; ?>
    </div>
    <div class="right-wrapper right video">
        video ici
    </div>
</div>
