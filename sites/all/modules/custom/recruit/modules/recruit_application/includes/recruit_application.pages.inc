<?php

/**
 * @file
 * Defines page callbacks.
 */

/**
 * Application view callback.
 */
function recruit_application_view($application) {
  drupal_set_title(entity_label('recruit_application', $application));
  return entity_view('recruit_application', array(entity_id('recruit_application', $application) => $application));
}

/**
 * Apply application page callback.
 */
function recruit_application_apply($job, RecruitApplicationType $recruit__application_type) {
  // Include the recruit_application.admin.inc file.
  module_load_include('inc', 'recruit_application', 'includes/recruit_application.admin');

  $application = entity_create('recruit_application', array('type' => $recruit__application_type->type));

  // Assigning application programmatically to job node.
  $field_info = field_info_field(RECRUIT_APPLICATION_JOB_FIELD);
  $langcode = $field_info['translatable'] ? entity_language('recruit_application', $application) : LANGUAGE_NONE;
  $application->{RECRUIT_APPLICATION_JOB_FIELD}[$langcode][0]['target_id'] = $job->nid;

  drupal_set_title(t('Application form: @name', array('@name' => $job->title)));

  $output = drupal_get_form('recruit_application_form', $application);

  return $output;
}
