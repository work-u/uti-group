<?php
/**
 * @file
 * Hooks provided by this module.
 */

/**
 * @addtogroup hooks
 * @{
 */

/**
 * Acts on recruit_application being loaded from the database.
 *
 * This hook is invoked during $recruit_application loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of $recruit_application entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_recruit_application_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a $recruit_application is inserted.
 *
 * This hook is invoked after the $recruit_application is inserted into the database.
 *
 * @param RecruitApplication $recruit_application
 *   The $recruit_application that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_recruit_application_insert(RecruitApplication $recruit_application) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('recruit_application', $recruit_application),
      'extra' => print_r($recruit_application, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a $recruit_application being inserted or updated.
 *
 * This hook is invoked before the $recruit_application is saved to the database.
 *
 * @param RecruitApplication $recruit_application
 *   The $recruit_application that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_recruit_application_presave(RecruitApplication $recruit_application) {
  $recruit_application->name = 'foo';
}

/**
 * Responds to a $recruit_application being updated.
 *
 * This hook is invoked after the $recruit_application has been updated in the database.
 *
 * @param RecruitApplication $recruit_application
 *   The $recruit_application that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_recruit_application_update(RecruitApplication $recruit_application) {
  db_update('mytable')
    ->fields(array('extra' => print_r($recruit_application, TRUE)))
    ->condition('id', entity_id('recruit_application', $recruit_application))
    ->execute();
}

/**
 * Responds to $recruit_application deletion.
 *
 * This hook is invoked after the $recruit_application has been removed from the database.
 *
 * @param RecruitApplication $recruit_application
 *   The $recruit_application that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_recruit_application_delete(RecruitApplication $recruit_application) {
  db_delete('mytable')
    ->condition('pid', entity_id('recruit_application', $recruit_application))
    ->execute();
}

/**
 * Act on a recruit_application that is being assembled before rendering.
 *
 * @param $recruit_application
 *   The recruit_application entity.
 * @param $view_mode
 *   The view mode the recruit_application is rendered in.
 * @param $langcode
 *   The language code used for rendering.
 *
 * The module may add elements to $recruit_application->content prior to rendering. The
 * structure of $recruit_application->content is a renderable array as expected by
 * drupal_render().
 *
 * @see hook_entity_prepare_view()
 * @see hook_entity_view()
 */
function hook_recruit_application_view($recruit_application, $view_mode, $langcode) {
  $recruit_application->content['my_additional_field'] = array(
    '#markup' => $additional_field,
    '#weight' => 10,
    '#theme' => 'mymodule_my_additional_field',
  );
}

/**
 * Alter the results of entity_view() for recruit_applications.
 *
 * @param $build
 *   A renderable array representing the recruit_application content.
 *
 * This hook is called after the content has been assembled in a structured
 * array and may be used for doing processing which requires that the complete
 * recruit_application content structure has been built.
 *
 * If the module wishes to act on the rendered HTML of the recruit_application rather than
 * the structured content array, it may use this hook to add a #post_render
 * callback. Alternatively, it could also implement hook_preprocess_recruit_application().
 * See drupal_render() and theme() documentation respectively for details.
 *
 * @see hook_entity_view_alter()
 */
function hook_recruit_application_view_alter($build) {
  if ($build['#view_mode'] == 'full' && isset($build['an_additional_field'])) {
    // Change its weight.
    $build['an_additional_field']['#weight'] = -10;

    // Add a #post_render callback to act on the rendered HTML of the entity.
    $build['#post_render'][] = 'my_module_post_render';
  }
}

/**
 * Acts on recruit_application_type being loaded from the database.
 *
 * This hook is invoked during recruit_application_type loading, which is handled by
 * entity_load(), via the EntityCRUDController.
 *
 * @param array $entities
 *   An array of recruit_application_type entities being loaded, keyed by id.
 *
 * @see hook_entity_load()
 */
function hook_recruit_application_type_load(array $entities) {
  $result = db_query('SELECT pid, foo FROM {mytable} WHERE pid IN(:ids)', array(':ids' => array_keys($entities)));
  foreach ($result as $record) {
    $entities[$record->pid]->foo = $record->foo;
  }
}

/**
 * Responds when a recruit_application_type is inserted.
 *
 * This hook is invoked after the recruit_application_type is inserted into the database.
 *
 * @param RecruitApplicationType $recruit_application_type
 *   The recruit_application_type that is being inserted.
 *
 * @see hook_entity_insert()
 */
function hook_recruit_application_type_insert(RecruitApplicationType $recruit_application_type) {
  db_insert('mytable')
    ->fields(array(
      'id' => entity_id('recruit_application_type', $recruit_application_type),
      'extra' => print_r($recruit_application_type, TRUE),
    ))
    ->execute();
}

/**
 * Acts on a recruit_application_type being inserted or updated.
 *
 * This hook is invoked before the recruit_application_type is saved to the database.
 *
 * @param RecruitApplicationType $recruit_application_type
 *   The recruit_application_type that is being inserted or updated.
 *
 * @see hook_entity_presave()
 */
function hook_recruit_application_type_presave(RecruitApplicationType $recruit_application_type) {
  $recruit_application_type->name = 'foo';
}

/**
 * Responds to a recruit_application_type being updated.
 *
 * This hook is invoked after the recruit_application_type has been updated in the database.
 *
 * @param RecruitApplicationType $recruit_application_type
 *   The recruit_application_type that is being updated.
 *
 * @see hook_entity_update()
 */
function hook_recruit_application_type_update(RecruitApplicationType $recruit_application_type) {
  db_update('mytable')
    ->fields(array('extra' => print_r($recruit_application_type, TRUE)))
    ->condition('id', entity_id('recruit_application_type', $recruit_application_type))
    ->execute();
}

/**
 * Responds to recruit_application_type deletion.
 *
 * This hook is invoked after the recruit_application_type has been removed from the database.
 *
 * @param RecruitApplicationType $recruit_application_type
 *   The recruit_application_type that is being deleted.
 *
 * @see hook_entity_delete()
 */
function hook_recruit_application_type_delete(RecruitApplicationType $recruit_application_type) {
  db_delete('mytable')
    ->condition('pid', entity_id('recruit_application_type', $recruit_application_type))
    ->execute();
}

/**
 * Define default recruit_application_type configurations.
 *
 * @return
 *   An array of default recruit_application_type, keyed by machine names.
 *
 * @see hook_default_recruit_application_type_alter()
 */
function hook_default_recruit_application_type() {
  $defaults['main'] = entity_create('recruit_application_type', array(
    // …
  ));
  return $defaults;
}

/**
 * Alter default recruit_application_type configurations.
 *
 * @param array $defaults
 *   An array of default recruit_application_type, keyed by machine names.
 *
 * @see hook_default_recruit_application_type()
 */
function hook_default_recruit_application_type_alter(array &$defaults) {
  $defaults['main']->name = 'custom name';
}
