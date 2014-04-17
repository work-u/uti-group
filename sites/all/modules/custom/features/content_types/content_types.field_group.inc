<?php
/**
 * @file
 * content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_minisite_banner|node|minisite|form';
  $field_group->group_name = 'group_minisite_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'minisite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bannière',
    'weight' => '4',
    'children' => array(
      0 => 'field_minisite_banner',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-minisite-banner field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_minisite_banner|node|minisite|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_minisite_logo_title|node|minisite|form';
  $field_group->group_name = 'group_minisite_logo_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'minisite';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Logo+titre',
    'weight' => '3',
    'children' => array(
      0 => 'field_minisite_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-minisite-logo-title field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_minisite_logo_title|node|minisite|form'] = $field_group;

  return $export;
}
