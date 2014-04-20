<section class="information">
    <?php
    foreach ($rows as $row): //print_r($row);
        ?>    
    <a href="<?php echo $row['field_url_block'];?>" class="block <?php echo $row['field_class_associe'];?>">
            <span class="fleche"></span>
            <p class="texte">
                <?php echo strip_tags($row['body']);?>
            </p>
        </a>
    <?php endforeach; ?>
</section>
