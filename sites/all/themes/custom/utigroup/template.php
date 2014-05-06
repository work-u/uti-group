<?php
 /**
 * Implementation of hook_preprocess_html()
 * @param array $vars
 */
function utigroup_preprocess_html(&$vars) {
    
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/plugins/modernizr.custom.js', array('type' => 'file', 'scope' => 'header'));
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/plugins/respond.js', array('type' => 'file', 'scope' => 'header'));
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/jQuery/jquery.min.js', array('type' => 'file', 'scope' => 'header'));
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/plugins/fancybox/jquery.fancybox.js', array('type' => 'file', 'scope' => 'footer'));
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/plugins/jssor/jssor.core.js', array('type' => 'file', 'scope' => 'footer'));
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/plugins/jssor/jssor.utils.js', array('type' => 'file', 'scope' => 'footer'));
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/plugins/jssor/jssor.slider.js', array('type' => 'file', 'scope' => 'footer'));
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/script.js', array('type' => 'file', 'scope' => 'footer'));
    drupal_add_js(base_path() . path_to_theme() . '/assets/js/custom.js', array('type' => 'file', 'scope' => 'footer'));
  


    $_arg_a = arg(0);
    switch ($_arg_a) {
        case "activites":
            $vars['classes_array'][] = 'blue-ciel-theme';
            break;
        case "secteurs":
            $vars['classes_array'][] = 'vert-theme';
            break;
        case "groupe":
            $vars['classes_array'][] = 'blue-theme';
            break;
        case "recrutement":
        case "application":    
        case "rejoignez-nous":
        case "suivi-de-carriere":
        case "annonces":
        case "vie-dans-lentreprise": 
            $vars['classes_array'][] = 'rose-theme';
            break;
    } 
    
   if ((arg(0) == 'node' && is_numeric(arg(1))) || (arg(0) == 'documents-financiers') || (arg(0) == 'communiques-de-presse') ){
     $vars['classes_array'][] = 'mauve-theme';  
   } 
}


/**
 * @file template.php
 */
 
 /**
 * Implementation of hook_preprocess_page()
 * @param array $vars
 * @param array $hook
 */
function utigroup_preprocess_page(&$vars, $hook) {
 $vars['menu_supeieur'] = utigroup_menuSupeieur();
 $vars['menu_footer'] = utigroup_get_this_menu('menu-menu-footer');
 $vars['menu_footer_social'] = utigroup_get_this_menu('menu-menu-footer-social');
 if(arg(0) == "donnees"){
          $vars["theme_hook_suggestions"][] = "page__donnees";         
    }
 if(arg(0) == "annonces"){
          $vars["theme_hook_suggestions"][] = "page__annonces";         
    }   
}

/*
 * Returns HTML de la meun supérieur header
 * @return string $content
 */

function utigroup_menuSupeieur() {

    $menu_supp = 'main-menu';

    $active_path = menu_tree_get_path($menu_supp);
    $router_item = menu_get_item($active_path);
    $active_link = menu_link_get_preferred($active_path, $menu_supp);

    //print_r( $active_link );
	
    $menus = menu_tree_all_data($menu_supp);	
    $content = '';
    $key = 0;
    foreach ($menus as $menu):
        //echo "<pre>";
        //print_r($menu['link']);
		if ($menu['link']['depth'] == 1 && !$menu['link']['hidden'] ) {  
                //print_r($menu['link']);              
                $content .= '<li class=" '. utigroup_global_functions_active_menu( $active_link['mlid'] ,$menu['link']['mlid']) .' '.utigroup_global_functions_exist($menu['link']['options']['attributes']['class']).'"><a href="'.url($menu['link']['href']).'">'.$menu['link']['link_title'] . '</a>'; //1 niveau
                 if (!empty($menu['below'])) {
                     $content .= '<ul>'; //2 niveau
                     foreach ($menu['below'] as $menub):
                        if(!$menub['link']['hidden']){
                            $__link = $menub['link']['link_title'];
                            $link = url($menub['link']['href']);
                            $options = (array('attributes' => array('class' => array()), 'html' => FALSE, 'external' => TRUE));
                            $content .= '<li>' . l($__link, $link, $options) . '</li>'; //2 niveau
                        }
                     endforeach;
                    $content .= '</ul>'; //2 niveau
                }
			  $content .= '</li>';
             }
            $key++;
            continue;
        
    
    endforeach;

    return $content;
}

function utigroup_get_this_menu($this_menu) {

    $menu_supp = $this_menu;

    $active_path = menu_tree_get_path($menu_supp);
    $router_item = menu_get_item($active_path);
    $active_link = menu_link_get_preferred($active_path, $menu_supp);
    
    $menus = menu_tree_all_data($menu_supp);    
    $content = '';
    $key = 0;
    foreach ($menus as $menu):
        $class=""; 
        if(isset($menu['link']['options']['attributes']['class'])){
         $class =  join(' ', $menu['link']['options']['attributes']['class']); 
        }        
        if ($menu['link']['depth'] == 1) {                
                $content .= '<li class="'.$class.'"><a href="'.url($menu['link']['href']).'">'.$menu['link']['link_title'] . '</a></li>';
             }
            $key++;
            continue;
    endforeach;

    return $content;
}

function utigroup_global_functions_active_menu($id_active, $id){
    return ($id_active == $id)? " active " : "";
}

