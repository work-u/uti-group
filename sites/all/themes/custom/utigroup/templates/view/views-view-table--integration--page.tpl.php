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
<div class="h1 titre"><span>Intégration</span></div>
<div class="block-5">
     <?php print( $rows[0]['body']); ?>
</div>

<div class="block-4 w1 clearfix">  
  <?php
    $tabindustrie = explode(',', $rows[0]['field_schema_integration']);
    $tabSavoir = explode(',', $rows[0]['field_en_savoir_shema_integratio']);
    $i = 0;
    foreach ($tabindustrie as &$value) {
        $i++;
        $class = "";
        if ($i == 2) {
            $class = "mt-15";
        }
        if ($i == 3) {
            $class = "mt-30";
        }        
        ?> 
        <div class="carreau <?php echo $class; ?>">
            <a href="#box-<?php echo $i; ?>" class="content fancybox">
                <div class="annee"><?php echo $i; ?></div>
                <div class="titre">
                    <?php if(isset($value)) echo $value; ?>
                </div>
                <div class="savoir-plus">En savoir +</div>
                <div class="arrow-right"></div>
            </a>
            <div id="box-<?php echo $i; ?>" style="display:none;">
                <div class="fancybox-titre"><?php echo $value; ?></div>
                <div class="fancybox-content">
                    <?php if(isset($tabSavoir[$i])) echo $tabSavoir[$i]; ?>
                </div>
            </div>
        </div>
        <?php
    }
    ?>
</div>