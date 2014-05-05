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
<div class="h1 titre"><span>Actualités</span></div>
<div class="block-7 clearfix">
    <div class="left-wrapper left">
        <div class="clearfix">
            <h2 class="left bold pr-20">Archives :</h2>
            <ul class="left menu-annee">
                <li><a class="annee-doc" href="#">2014</a></li>
                <li><a class="annee-doc" href="#">2013</a></li>
                <li><a class="annee-doc" href="#">2012</a></li>
                <li><a class="annee-doc" href="#">2011</a></li>
                <li><a class="annee-doc" href="#">2010</a></li>
                <li><a class="annee-doc" href="#">2009</a></li>
                <li><a class="annee-doc" href="#">2008</a></li>
                <li><a class="annee-doc" href="#">2007</a></li>
                <li><a class="annee-doc" href="#">2006</a></li>
                <li><a class="annee-doc" href="#">2005</a></li>
                <li><a class="annee-doc" href="#">2004</a></li>
                <li><a class="annee-doc" href="#">2003</a></li>
                <li><a class="annee-doc" href="#">2002</a></li>
                <li><a class="annee-doc" href="#">2001</a></li>                
            </ul>
        </div>
    </div>
    <div class="right-wrapper right">
        <table>
            <thead>
                <tr>
                    <th class="w80">Communiqués de presse</th>
                    <th class="w20">Documents</th>
                </tr>
            </thead>
            <tbody>
             <?php foreach ($rows as $row): ?>   
                <tr class="tr-annee <?php echo strip_tags($row['field_annees_presse']);?>">
                    <td class="w80"><b><?php echo $row['field_date_presse'];?></b><br><?php echo strip_tags($row['title']);?></td>
                    <td class="w20"><a target="_blank" class="picto-pdf" href="<?php echo $row['field_pdf_presse'];?>">PDF</a></td>
                </tr>
           <?php endforeach; ?> 
            </tbody>
        </table>
    </div>
</div>