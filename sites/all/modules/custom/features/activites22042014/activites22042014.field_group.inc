<?php
/**
 * @file
 * activites22042014.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function activites22042014_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_principaux_metiers|node|activites|form';
  $field_group->group_name = 'group_principaux_metiers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'activites';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Nos principaux métiers',
    'weight' => '4',
    'children' => array(
      0 => 'field_titre_maitrise_ouvrage',
      1 => 'field_field_text_en_savoir_plus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-principaux-metiers field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_principaux_metiers|node|activites|form'] = $field_group;

  return $export;
}
