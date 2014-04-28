<?php
/**
 * @file
 * type_de_contenu.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function type_de_contenu_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_asurance_secteur|node|secteurs|form';
  $field_group->group_name = 'group_asurance_secteur';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secteurs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Assurances/ Mutuelle/retraite',
    'weight' => '47',
    'children' => array(
      0 => 'field_image_assurance_secteur',
      1 => 'field_article_assurance_secteur',
      2 => 'field_en_savoir_plus_assurance',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-asurance-secteur field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_asurance_secteur|node|secteurs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banque|node|secteurs|form';
  $field_group->group_name = 'group_banque';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secteurs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banques/Finances',
    'weight' => '5',
    'children' => array(
      0 => 'field_image_banque',
      1 => 'field_article_banque_scteur',
      2 => 'field_en_savoir_plusbanque',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-banque field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_banque|node|secteurs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_demarche_qualite|node|groupe_qualite|form';
  $field_group->group_name = 'group_demarche_qualite';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'groupe_qualite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notre démarche qualité',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_photo_groupe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-demarche-qualite field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_demarche_qualite|node|groupe_qualite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_durable|node|developpement_durable_rse|form';
  $field_group->group_name = 'group_durable';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'developpement_durable_rse';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Développement durable',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_right_texte_deve_groupe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-durable field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_durable|node|developpement_durable_rse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipe_recrutement|node|process_de_recrut|form';
  $field_group->group_name = 'group_equipe_recrutement';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'process_de_recrut';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Equipe du recrutement',
    'weight' => '2',
    'children' => array(
      0 => 'field_photo_equipe_du_recrutemen',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-equipe-recrutement field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_equipe_recrutement|node|process_de_recrut|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indusrie_secteur|node|secteurs|form';
  $field_group->group_name = 'group_indusrie_secteur';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secteurs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Industrie services',
    'weight' => '50',
    'children' => array(
      0 => 'field_image_industri_secteur',
      1 => 'field_article_industrie_secteur',
      2 => 'field_en_savoir_plus_secteur',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-indusrie-secteur field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_indusrie_secteur|node|secteurs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mot_president|node|groupe_uti_en_bref|form';
  $field_group->group_name = 'group_mot_president';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'groupe_uti_en_bref';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Le mot du président',
    'weight' => '13',
    'children' => array(
      0 => 'field_mot_president_groupe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mot-president field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mot_president|node|groupe_uti_en_bref|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisation|node|groupe_qualite|form';
  $field_group->group_name = 'group_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'groupe_qualite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notre organisation',
    'weight' => '4',
    'children' => array(
      0 => 'field_left_description_qualite',
      1 => 'field_right_description_qualite',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organisation field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organisation|node|groupe_qualite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_procesus|node|process_de_recrut|form';
  $field_group->group_name = 'group_procesus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'process_de_recrut';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Process de recrutement',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_schema',
      2 => 'field_en_savoir_plus_shema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-procesus field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_procesus|node|process_de_recrut|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_produits|node|secteurs|form';
  $field_group->group_name = 'group_produits';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'secteurs';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'produits',
    'weight' => '4',
    'children' => array(
      0 => 'field_image_produit',
      1 => 'field_produit_secteur',
      2 => 'field_savoir_plus_produits',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-produits field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_produits|node|secteurs|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rse|node|developpement_durable_rse|form';
  $field_group->group_name = 'group_rse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'developpement_durable_rse';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Responsabilité Sociétale des Entreprises',
    'weight' => '2',
    'children' => array(
      0 => 'field_texte_top_rse_groupe',
      1 => 'field_texte_encadre_rse_groupe',
      2 => 'field_photo_groupe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rse field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rse|node|developpement_durable_rse|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_temoigniyage|node|rejoignez_nous_vie_entreprise|form';
  $field_group->group_name = 'group_temoigniyage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rejoignez_nous_vie_entreprise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Témoignages',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-temoigniyage field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_temoigniyage|node|rejoignez_nous_vie_entreprise|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_uti_dates|node|groupe_uti_en_bref|form';
  $field_group->group_name = 'group_uti_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'groupe_uti_en_bref';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UTI en dates',
    'weight' => '3',
    'children' => array(
      0 => 'field_date_1_groupe',
      1 => 'field_date_2',
      2 => 'field_date_3_groupe',
      3 => 'field_date_4_groupe',
      4 => 'field_savoir_plus_date1',
      5 => 'field_savoir_plus_date_2',
      6 => 'field_savoir_plus_date_3',
      7 => 'field_savoir_plus_date_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-uti-dates field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_uti_dates|node|groupe_uti_en_bref|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_uti_en_bref|node|groupe_uti_en_bref|form';
  $field_group->group_name = 'group_uti_en_bref';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'groupe_uti_en_bref';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'UTI en bref',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_photo_groupe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-uti-en-bref field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_uti_en_bref|node|groupe_uti_en_bref|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vie_entreprise|node|rejoignez_nous_vie_entreprise|form';
  $field_group->group_name = 'group_vie_entreprise';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'rejoignez_nous_vie_entreprise';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vie dans l’entreprise',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_schema_entreprise',
      2 => 'field_savoir_plus_shema_entrepri',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-vie-entreprise field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_vie_entreprise|node|rejoignez_nous_vie_entreprise|form'] = $field_group;

  return $export;
}
