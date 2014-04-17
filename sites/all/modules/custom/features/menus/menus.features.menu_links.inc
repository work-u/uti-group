<?php
/**
 * @file
 * menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_analyses:<front>
  $menu_links['main-menu_analyses:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Analyses',
    'options' => array(
      'identifier' => 'main-menu_analyses:<front>',
      'attributes' => array(
        'title' => 'Analyses',
        'style' => 'Colonne4',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tudes-et-vnements:<front>',
  );
  // Exported menu link: main-menu_comprendre-sa-retraite:<front>
  $menu_links['main-menu_comprendre-sa-retraite:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Comprendre sa retraite',
    'options' => array(
      'identifier' => 'main-menu_comprendre-sa-retraite:<front>',
      'attributes' => array(
        'style' => 'Colonne2',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_services:<front>',
  );
  // Exported menu link: main-menu_espaces-personnaliss:<front>
  $menu_links['main-menu_espaces-personnaliss:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Espaces personnalisés',
    'options' => array(
      'identifier' => 'main-menu_espaces-personnaliss:<front>',
      'attributes' => array(
        'title' => 'Espaces personnalisés',
        'style' => 'Colonne3',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_services:<front>',
  );
  // Exported menu link: main-menu_explication-du-systme-de-retraite:<front>
  $menu_links['main-menu_explication-du-systme-de-retraite:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Explication du système de retraite',
    'options' => array(
      'attributes' => array(
        'title' => 'Explication du système de retraite',
      ),
      'identifier' => 'main-menu_explication-du-systme-de-retraite:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_comprendre-sa-retraite:<front>',
  );
  // Exported menu link: main-menu_fonds-grs-retraites-et-solidarit:<front>
  $menu_links['main-menu_fonds-grs-retraites-et-solidarit:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Fonds gérés Retraites et solidarité',
    'options' => array(
      'identifier' => 'main-menu_fonds-grs-retraites-et-solidarit:<front>',
      'attributes' => array(
        'title' => 'Fonds gérés Retraites et solidarité',
        'style' => 'Colonne1',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_services:<front>',
  );
  // Exported menu link: main-menu_forum-retraite:<front>
  $menu_links['main-menu_forum-retraite:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Forum retraite',
    'options' => array(
      'attributes' => array(
        'title' => 'Forum retraite',
      ),
      'identifier' => 'main-menu_forum-retraite:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_vnements:<front>',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_le-chiffre:<front>
  $menu_links['main-menu_le-chiffre:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Le chiffre',
    'options' => array(
      'attributes' => array(
        'title' => 'Le chiffre',
      ),
      'identifier' => 'main-menu_le-chiffre:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_analyses:<front>',
  );
  // Exported menu link: main-menu_le-point:<front>
  $menu_links['main-menu_le-point:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Le point',
    'options' => array(
      'attributes' => array(
        'title' => 'Le point',
      ),
      'identifier' => 'main-menu_le-point:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_analyses:<front>',
  );
  // Exported menu link: main-menu_les-annuaires:<front>
  $menu_links['main-menu_les-annuaires:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Les annuaires',
    'options' => array(
      'attributes' => array(
        'title' => 'Les annuaires',
      ),
      'identifier' => 'main-menu_les-annuaires:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_statistiques:<front>',
  );
  // Exported menu link: main-menu_les-sries:<front>
  $menu_links['main-menu_les-sries:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Les séries',
    'options' => array(
      'attributes' => array(
        'title' => 'Les séries',
      ),
      'identifier' => 'main-menu_les-sries:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_statistiques:<front>',
  );
  // Exported menu link: main-menu_nos-chiffres-cls-et-bilans:<front>
  $menu_links['main-menu_nos-chiffres-cls-et-bilans:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Nos chiffres-clés et bilans',
    'options' => array(
      'attributes' => array(
        'title' => 'Nos chiffres-clés et bilans',
      ),
      'identifier' => 'main-menu_nos-chiffres-cls-et-bilans:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_que-faisons-nous-:<front>',
  );
  // Exported menu link: main-menu_notre-mtier:<front>
  $menu_links['main-menu_notre-mtier:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Notre métier',
    'options' => array(
      'attributes' => array(
        'title' => 'Notre métier',
      ),
      'identifier' => 'main-menu_notre-mtier:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_que-faisons-nous-:<front>',
  );
  // Exported menu link: main-menu_notre-organisation:<front>
  $menu_links['main-menu_notre-organisation:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Notre organisation',
    'options' => array(
      'attributes' => array(
        'title' => 'Notre organisation',
      ),
      'identifier' => 'main-menu_notre-organisation:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_qui-sommes-nous-:<front>',
  );
  // Exported menu link: main-menu_notre-savoir-faire:<front>
  $menu_links['main-menu_notre-savoir-faire:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Notre savoir-faire',
    'options' => array(
      'attributes' => array(
        'title' => 'Notre savoir-faire',
      ),
      'identifier' => 'main-menu_notre-savoir-faire:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_que-faisons-nous-:<front>',
  );
  // Exported menu link: main-menu_notre-vision:<front>
  $menu_links['main-menu_notre-vision:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Notre vision',
    'options' => array(
      'attributes' => array(
        'title' => 'Notre vision',
      ),
      'identifier' => 'main-menu_notre-vision:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -3,
    'customized' => 1,
    'parent_identifier' => 'main-menu_qui-sommes-nous-:<front>',
  );
  // Exported menu link: main-menu_prsentation:<front>
  $menu_links['main-menu_prsentation:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Présentation',
    'options' => array(
      'attributes' => array(
        'title' => 'Page Présentation',
      ),
      'identifier' => 'main-menu_prsentation:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_qrs-les-cahiers:<front>
  $menu_links['main-menu_qrs-les-cahiers:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'QR&S les cahiers',
    'options' => array(
      'attributes' => array(
        'title' => 'QR&S les cahiers',
      ),
      'identifier' => 'main-menu_qrs-les-cahiers:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -2,
    'customized' => 1,
    'parent_identifier' => 'main-menu_questions-retraites--solidarit:<front>',
  );
  // Exported menu link: main-menu_qrs-les-rencontres:<front>
  $menu_links['main-menu_qrs-les-rencontres:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'QR&S les rencontres',
    'options' => array(
      'attributes' => array(
        'title' => 'QR&S les rencontres',
      ),
      'identifier' => 'main-menu_qrs-les-rencontres:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_vnements:<front>',
  );
  // Exported menu link: main-menu_que-faisons-nous-:<front>
  $menu_links['main-menu_que-faisons-nous-:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Que faisons-nous ?',
    'options' => array(
      'identifier' => 'main-menu_que-faisons-nous-:<front>',
      'attributes' => array(
        'title' => 'Que faisons-nous ?',
        'style' => 'Colonne2',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_prsentation:<front>',
  );
  // Exported menu link: main-menu_questions-retraites--solidarit:<front>
  $menu_links['main-menu_questions-retraites--solidarit:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Questions Retraites & Solidarité',
    'options' => array(
      'identifier' => 'main-menu_questions-retraites--solidarit:<front>',
      'attributes' => array(
        'title' => 'Questions Retraites & Solidarité',
        'style' => 'Colonne1',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tudes-et-vnements:<front>',
  );
  // Exported menu link: main-menu_qui-sommes-nous-:<front>
  $menu_links['main-menu_qui-sommes-nous-:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Qui sommes-nous ?',
    'options' => array(
      'identifier' => 'main-menu_qui-sommes-nous-:<front>',
      'attributes' => array(
        'title' => 'Qui sommes-nous ?',
        'style' => 'Colonne1',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_prsentation:<front>',
  );
  // Exported menu link: main-menu_services:<front>
  $menu_links['main-menu_services:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => 'Services',
      ),
      'identifier' => 'main-menu_services:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sites-utiles:<front>
  $menu_links['main-menu_sites-utiles:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sites utiles',
    'options' => array(
      'identifier' => 'main-menu_sites-utiles:<front>',
      'attributes' => array(
        'style' => 'Colonne4',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_services:<front>',
  );
  // Exported menu link: main-menu_statistiques:<front>
  $menu_links['main-menu_statistiques:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Statistiques',
    'options' => array(
      'identifier' => 'main-menu_statistiques:<front>',
      'attributes' => array(
        'title' => 'Statistiques',
        'style' => 'Colonne5',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tudes-et-vnements:<front>',
  );
  // Exported menu link: main-menu_tout-au-long-de-sa-carrire:<front>
  $menu_links['main-menu_tout-au-long-de-sa-carrire:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Tout au long de sa carrière',
    'options' => array(
      'attributes' => array(
        'title' => 'Tout au long de sa carrière',
      ),
      'identifier' => 'main-menu_tout-au-long-de-sa-carrire:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_comprendre-sa-retraite:<front>',
  );
  // Exported menu link: main-menu_trouver-son-rgime-de-retraite:<front>
  $menu_links['main-menu_trouver-son-rgime-de-retraite:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Trouver son régime de retraite',
    'options' => array(
      'attributes' => array(
        'title' => 'Trouver son régime de retraite',
      ),
      'identifier' => 'main-menu_trouver-son-rgime-de-retraite:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_comprendre-sa-retraite:<front>',
  );
  // Exported menu link: main-menu_tudes-et-vnements:<front>
  $menu_links['main-menu_tudes-et-vnements:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Études et évènements',
    'options' => array(
      'attributes' => array(
        'title' => 'Études et évènements',
      ),
      'identifier' => 'main-menu_tudes-et-vnements:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_tudes:<front>
  $menu_links['main-menu_tudes:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Études',
    'options' => array(
      'identifier' => 'main-menu_tudes:<front>',
      'attributes' => array(
        'title' => 'Études',
        'style' => 'Colonne2',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tudes-et-vnements:<front>',
  );
  // Exported menu link: main-menu_un-acteur-unique-en-france:<front>
  $menu_links['main-menu_un-acteur-unique-en-france:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Un acteur unique en France',
    'options' => array(
      'attributes' => array(
        'title' => 'Un acteur unique en France',
      ),
      'identifier' => 'main-menu_un-acteur-unique-en-france:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_qui-sommes-nous-:<front>',
  );
  // Exported menu link: main-menu_vnements:<front>
  $menu_links['main-menu_vnements:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Évènements',
    'options' => array(
      'identifier' => 'main-menu_vnements:<front>',
      'attributes' => array(
        'title' => 'Évènements',
        'style' => 'Colonne3',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_tudes-et-vnements:<front>',
  );
  // Exported menu link: menu-footer_accessibilit:<front>
  $menu_links['menu-footer_accessibilit:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accessibilité',
    'options' => array(
      'attributes' => array(
        'title' => 'Accessibilité',
      ),
      'identifier' => 'menu-footer_accessibilit:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_espace-presse:<front>
  $menu_links['menu-footer_espace-presse:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Espace presse',
    'options' => array(
      'attributes' => array(
        'title' => 'Espace presse',
      ),
      'identifier' => 'menu-footer_espace-presse:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_facebook:<front>
  $menu_links['menu-footer_facebook:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer_facebook:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_rseaux-sociaux:<front>',
  );
  // Exported menu link: menu-footer_mentions-lgales:<front>
  $menu_links['menu-footer_mentions-lgales:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Mentions légales',
    'options' => array(
      'attributes' => array(
        'title' => 'Mentions légales',
      ),
      'identifier' => 'menu-footer_mentions-lgales:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_newsletter:<front>
  $menu_links['menu-footer_newsletter:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Newsletter',
    'options' => array(
      'attributes' => array(
        'title' => 'Newsletter',
      ),
      'identifier' => 'menu-footer_newsletter:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_rseaux-sociaux:<front>
  $menu_links['menu-footer_rseaux-sociaux:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Réseaux sociaux',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer_rseaux-sociaux:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-footer_twitter:<front>
  $menu_links['menu-footer_twitter:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'title' => 'Twitter',
      ),
      'identifier' => 'menu-footer_twitter:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'menu-footer_rseaux-sociaux:<front>',
  );
  // Exported menu link: menu-menu-sup-rieur_actifsretraits:<front>
  $menu_links['menu-menu-sup-rieur_actifsretraits:<front>'] = array(
    'menu_name' => 'menu-menu-sup-rieur',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Actifs/Retraités',
    'options' => array(
      'identifier' => 'menu-menu-sup-rieur_actifsretraits:<front>',
      'attributes' => array(
        'title' => 'Espace personnalisé actif/retraité',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-sup-rieur_espace-personnalis:<front>',
  );
  // Exported menu link: menu-menu-sup-rieur_employeur:<front>
  $menu_links['menu-menu-sup-rieur_employeur:<front>'] = array(
    'menu_name' => 'menu-menu-sup-rieur',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Employeur',
    'options' => array(
      'identifier' => 'menu-menu-sup-rieur_employeur:<front>',
      'attributes' => array(
        'title' => 'Espace personnalisé employeur',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-sup-rieur_espace-personnalis:<front>',
  );
  // Exported menu link: menu-menu-sup-rieur_espace-personnalis:<front>
  $menu_links['menu-menu-sup-rieur_espace-personnalis:<front>'] = array(
    'menu_name' => 'menu-menu-sup-rieur',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Espace personnalisé',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-sup-rieur_espace-personnalis:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-menu-sup-rieur_fond-2:<front>
  $menu_links['menu-menu-sup-rieur_fond-2:<front>'] = array(
    'menu_name' => 'menu-menu-sup-rieur',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Fond 2',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-sup-rieur_fond-2:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-sup-rieur_liste-des-fonds:<front>',
  );
  // Exported menu link: menu-menu-sup-rieur_fond-3:<front>
  $menu_links['menu-menu-sup-rieur_fond-3:<front>'] = array(
    'menu_name' => 'menu-menu-sup-rieur',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Fond 3',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-sup-rieur_fond-3:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-sup-rieur_liste-des-fonds:<front>',
  );
  // Exported menu link: menu-menu-sup-rieur_fond1:<front>
  $menu_links['menu-menu-sup-rieur_fond1:<front>'] = array(
    'menu_name' => 'menu-menu-sup-rieur',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Fond1',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-sup-rieur_fond1:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-menu-sup-rieur_liste-des-fonds:<front>',
  );
  // Exported menu link: menu-menu-sup-rieur_liste-des-fonds:<front>
  $menu_links['menu-menu-sup-rieur_liste-des-fonds:<front>'] = array(
    'menu_name' => 'menu-menu-sup-rieur',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Liste des fonds',
    'options' => array(
      'attributes' => array(
        'title' => 'Liste des fonds',
      ),
      'identifier' => 'menu-menu-sup-rieur_liste-des-fonds:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accessibilité');
  t('Actifs/Retraités');
  t('Analyses');
  t('Comprendre sa retraite');
  t('Employeur');
  t('Espace personnalisé');
  t('Espace presse');
  t('Espaces personnalisés');
  t('Explication du système de retraite');
  t('Facebook');
  t('Fond 2');
  t('Fond 3');
  t('Fond1');
  t('Fonds gérés Retraites et solidarité');
  t('Forum retraite');
  t('Home');
  t('Le chiffre');
  t('Le point');
  t('Les annuaires');
  t('Les séries');
  t('Liste des fonds');
  t('Mentions légales');
  t('Newsletter');
  t('Nos chiffres-clés et bilans');
  t('Notre métier');
  t('Notre organisation');
  t('Notre savoir-faire');
  t('Notre vision');
  t('Présentation');
  t('QR&S les cahiers');
  t('QR&S les rencontres');
  t('Que faisons-nous ?');
  t('Questions Retraites & Solidarité');
  t('Qui sommes-nous ?');
  t('Réseaux sociaux');
  t('Services');
  t('Sites utiles');
  t('Statistiques');
  t('Tout au long de sa carrière');
  t('Trouver son régime de retraite');
  t('Twitter');
  t('Un acteur unique en France');
  t('Études');
  t('Études et évènements');
  t('Évènements');


  return $menu_links;
}
