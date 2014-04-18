<div u="slides" style="cursor: move; position: absolute; overflow: hidden; left: 0px; top: 0px; width: 784px; height: 346px;">
	 <?php 
		$href=""; 
	foreach ($rows as $row):
	if(empty($row['field_url_home'])){
		$href="#";
	}else{
		$href=$row['field_url_home'];
	}	 
	?>
		<div>
			<a target="_blank" href="<?php echo $href;?>">
				<?php echo $row['field_image_home']; ?>
			</a>
		</div>
	<?php endforeach; ?>
</div>	
	