<?php
/**
 * @file
 * menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer',
    'description' => 'Menu pied de page',
  );
  // Exported menu: menu-footer-minisite.
  $menus['menu-footer-minisite'] = array(
    'menu_name' => 'menu-footer-minisite',
    'title' => 'footer minisite',
    'description' => '',
  );
  // Exported menu: menu-menu-site.
  $menus['menu-menu-site'] = array(
    'menu_name' => 'menu-menu-site',
    'title' => 'Menu Site',
    'description' => '',
  );
  // Exported menu: menu-menu-sup-rieur.
  $menus['menu-menu-sup-rieur'] = array(
    'menu_name' => 'menu-menu-sup-rieur',
    'title' => 'Menu Supérieur',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');
  t('Main menu');
  t('Menu Site');
  t('Menu Supérieur');
  t('Menu pied de page');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('footer minisite');


  return $menus;
}
