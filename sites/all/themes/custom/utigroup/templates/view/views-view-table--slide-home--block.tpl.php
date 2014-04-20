<div u="slides" class="home-slider" style="cursor: move; position: absolute; overflow: hidden; left: 0px; top: 0px; width: 784px; height: 346px;">
    <?php        
	    foreach ($rows as $row):	    
    ?>
			<div class="item-slid <?php echo $row['field_orientation_du_texte']; ?>">
			  <?php
			   if(!empty($row['field_url_home'])){
			  ?>
				<a target="_blank" href="<?php echo $row['field_url_home'];?>">
			<?php } ?>	
					<div class="wrap-img slid-img">
						<?php echo $row['field_image_home']; ?>
					</div>
					<div class="wrap-content">
						<div class="title slid-title">
							<?php echo $row['title']; ?>
						</div>
						<div class="description slid-description">
							<?php echo $row['body']; ?>
						</div>
					</div>
			 <?php
			   if(!empty($row['field_url_home'])){
			  ?>		
				</a>
			 <?php } ?>	
			</div>
    <?php endforeach; ?>
</div>    
    