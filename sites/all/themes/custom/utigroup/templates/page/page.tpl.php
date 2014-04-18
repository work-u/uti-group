<?php
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
?>

<div class="page cf">

    <?php if (arg(0) == 'search' && arg(1) == 'site'): ?>         

        <div class="sidebar sidebar-facette">
            <?php print render($page['sidebar_first']); ?> 
        </div><!--/sidebar-->
        <main id="a_content" role="main" >
            <?php if ($messages): ?>
                <div id="messages"><div class="section clearfix">
                        <?php print $messages; ?>
                    </div></div> <!-- /.section, /#messages -->
            <?php endif; ?>
            <?php if ($tabs && $is_admin): ?>
                <div class="tabs">
                    <?php print render($tabs); ?>
                </div>
            <?php endif; ?>  



            <?php print render($page['content']); ?>       

        </main>

    <?php else: ?>

        <main id="a_content" role="main" class="box-full">
            <?php if ($messages): ?>
                <div id="messages"><div class="section clearfix">
                        <?php print $messages; ?>
                    </div></div> <!-- /.section, /#messages -->
            <?php endif; ?>
            <?php if ($tabs && $is_admin): ?>
                <div class="tabs">
                    <?php print render($tabs); ?>
                </div>
            <?php endif; ?>  



            <?php print render($page['content']); ?>       

        </main>
    <?php endif; ?>

</div><!--/page-->
