<?php
/**
 * @file
 * secteur_23_04_2014.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function secteur_23_04_2014_field_group_info() {
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

  return $export;
}
