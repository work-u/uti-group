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
<div class="h1 titre"><span>Notre démarche qualité</span></div>
<div class="clearfix block-5">
    <div class="left">
        <?php print($rows[0]['field_photo_groupe']); ?>
    </div>
    <div class="right">
       <?php print($rows[0]['body']); ?>
    </div>
</div>

<div class="h1 titre"><span>Notre organisation</span></div>
<div class="clearfix block-5">
    <div class="left">
        <div class="round-style bg-color">
           <?php print($rows[0]['field_left_description_qualite']); ?>
        </div>
    </div>
    <div class="right">
       <?php print($rows[0]['field_right_description_qualite']); ?>
    </div>
</div>