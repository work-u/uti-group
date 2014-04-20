<div u="slides" style="cursor: move; position: absolute; overflow: hidden; left: 0px; top: 0px; width: 784px; height: 346px;">
    <?php        
	    foreach ($rows as $row):	    
    ?>
			<div>
			  <?php
			   if(!empty($row['field_url_home'])){
			  ?>
				<a target="_blank" href="<?php echo $row['field_url_home'];?>">
			<?php } ?>	
					<?php echo $row['field_image_home']; ?>
			 <?php
			   if(!empty($row['field_url_home'])){
			  ?>		
				</a>
			 <?php } ?>	
			</div>
    <?php endforeach; ?>
</div>    
    