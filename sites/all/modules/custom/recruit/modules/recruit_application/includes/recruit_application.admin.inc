<?php

/**
 * @file
 * Defines form, validate and submit callbacks.
 */

/**
 * Generates the application type editing form.
 */
function recruit_application_type_form($form, &$form_state, $application_type, $op = 'edit') {

  if ($op == 'clone') {
    $application_type->label .= ' (cloned)';
    $application_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $application_type->label,
    '#description' => t('The human-readable name of this application type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($application_type->type) ? $application_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $application_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'recruit_application_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this application type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($application_type->description) ? $application_type->description : '',
    '#description' => t('Description about the application type.'),
  );

  $form['settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Application settings'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['settings']['application_link_label'] = array(
    '#title' => t('Apply label'),
    '#type' => 'textfield',
    '#default_value' => variable_get('recruit_application_application_link_label_' . $application_type->type, RECRUIT_APPLICATION_APPLICATION_LINK_LABEL),
    '#description' => t('Text used for the link to the apply page on the job.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  $form['settings']['submit_button_label'] = array(
    '#title' => t('Submit button label'),
    '#type' => 'textfield',
    '#default_value' => variable_get('recruit_application_submit_button_label_' . $application_type->type, RECRUIT_APPLICATION_SUBMIT_BUTTON_LABEL),
    '#description' => t('Text used in the submit button.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  $form['settings']['submission_message'] = array(
    '#title' => t('Submission message'),
    '#type' => 'textfield',
    '#default_value' => variable_get('recruit_application_submission_message_' . $application_type->type, RECRUIT_APPLICATION_SUBMISSION_MESSAGE),
    '#description' => t('Message that will appear when a user submits an application.'),
    '#required' => TRUE,
  );

  $form['settings']['confirmation_mail'] = array(
    '#type' => 'checkbox',
    '#title' => t('Send confirmation email to applicant'),
    '#default_value' => variable_get('recruit_application_confirmation_mail_' . $application_type->type, FALSE),
  );

  $form['settings']['confirmation_mail_subject'] = array(
    '#title' => t('Confirmation subject'),
    '#type' => 'textfield',
    '#default_value' => variable_get('recruit_application_confirmation_mail_subject_' . $application_type->type, ''),
    '#description' => t('Subject will be used in the confirmation email.'),
    '#states' => array(
      'visible' => array(
        ':input[name="confirmation_mail"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['settings']['confirmation_mail_message'] = array(
    '#title' => t('Confirmation message'),
    '#type' => 'textarea',
    '#default_value' => variable_get('recruit_application_confirmation_mail_message_' . $application_type->type, ''),
    '#description' => t('Message will be used in the body of the confirmation email.'),
    '#states' => array(
      'visible' => array(
        ':input[name="confirmation_mail"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['settings']['notification_mail'] = array(
    '#type' => 'checkbox',
    '#title' => t('Send notification email to recruiter(s)'),
    '#default_value' => variable_get('recruit_application_notification_mail_' . $application_type->type, FALSE),
  );

  $form['settings']['notification_mail_subject'] = array(
    '#title' => t('Notification subject'),
    '#type' => 'textfield',
    '#default_value' => variable_get('recruit_application_notification_mail_subject_' . $application_type->type, ''),
    '#description' => t('Subject will be used in the notification email.'),
    '#states' => array(
      'visible' => array(
        ':input[name="notification_mail"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['settings']['notification_mail_message'] = array(
    '#title' => t('Notification message'),
    '#type' => 'textarea',
    '#default_value' => variable_get('recruit_application_notification_mail_message_' . $application_type->type, ''),
    '#description' => t('Message will be used in the body of the notification email.'),
    '#states' => array(
      'visible' => array(
        ':input[name="notification_mail"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save application type'),
    '#weight' => 40,
  );

  if (!$application_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete application type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('recruit_application_type_form_submit_delete'),
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing application_type.
 */
function recruit_application_type_form_submit(&$form, &$form_state) {
  $application_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Get form $op.
  $op = $form_state['op'];
  // Save and go back.
  recruit_application_type_save($application_type);
  // Save settings to variable table.
  recruit_application_type_form_save_settings($form, $form_state, $application_type);
  // If $op is not edit, then it's add or clone.
  if ($op != 'edit') {
    // Run application type through configure helper function.
    recruit_application_configure_application_type($application_type);
  }
  // Redirect user back to list of application types.
  $form_state['redirect'] = 'admin/structure/application-types';
}

/**
 * Helper function used to save elements within the "Application settings"
 * field-set.
 *
 *  @param Array $form
 *    Form array.
 *
 *  @param Array $form_state
 *    Form state array.
 *
 *  @param RecruitApplicationType $application_type
 *    Application type object.
 *
 *  @return NULL
 *
 */
function recruit_application_type_form_save_settings(&$form, &$form_state, RecruitApplicationType $application_type) {
  $values = $form_state['values'];
  foreach($values as $k => $value) {
    if (!empty($form['settings'][$k])) {
      variable_set('recruit_application_' . $k . '_' . $application_type->type, $value);
    }
  }
}

/**
 * Application type submit delete form.
 */
function recruit_application_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/application-types/' . $form_state['recruit_application_type']->type . '/delete';
}

/**
 * Application type delete form.
 */
function recruit_application_type_form_delete_confirm($form, &$form_state, $application_type) {
  $form_state['application_type'] = $application_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['application_type_id'] = array(
    '#type' => 'value',
    '#value' => entity_id('recruit_application_type', $application_type),
  );

  return confirm_form($form,
    t('Are you sure you want to delete application type %title?',
      array('%title' => entity_label('application_type', $application_type))),
      'application/' . entity_id('recruit_application_type', $application_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Application type delete form submit handler.
 */
function recruit_application_type_form_delete_confirm_submit($form, &$form_state) {
  $application_type = $form_state['application_type'];
  recruit_application_type_delete($application_type);

  watchdog('recruit_application_type', '@type: deleted %title.', array('@type' => $application_type->type, '%title' => $application_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $application_type->type, '%title' => $application_type->label)));

  $form_state['redirect'] = 'admin/structure/application-types';
}

/**
 * Page to select application Type to add new application.
 */
function recruit_application_admin_add_page() {
  $items = array();
  foreach (recruit_application_types() as $application_type_key => $application_type) {
    $items[] = l(entity_label('recruit_application_type', $application_type), 'application/add/' . $application_type_key);
  }
  return array(
    'list' => array(
      '#theme' => 'item_list',
      '#items' => $items,
      '#title' => t('Select type of application to create.')),
  );
}

/**
 * Add new application page callback.
 */
function recruit_application_add($type) {
  $application_type = recruit_application_types($type);

  $application = entity_create('recruit_application', array('type' => $type));
  drupal_set_title(t('Create @name',
    array('@name' => entity_label('application_type', $application_type))));

  $output = drupal_get_form('recruit_application_form', $application);

  return $output;
}

/**
 * Application Form.
 */
function recruit_application_form($form, &$form_state, $application) {
  // Ensure this include file is loaded when the form is rebuilt from the cache.
  $form_state['build_info']['files']['form'] = drupal_get_path('module', 'recruit_application') . '/includes/recruit_application.admin.inc';

  $form_state['application'] = $application;

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $application->uid,
  );

  field_attach_form('recruit_application', $application, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $submit_button_label = variable_get('recruit_application_submit_button_label_' . $application->type, RECRUIT_APPLICATION_SUBMIT_BUTTON_LABEL);

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t($submit_button_label),
    '#submit' => $submit + array('recruit_application_form_submit'),
  );

  // Show Delete button if we edit application.
  $application_id = entity_id('recruit_application', $application);
  if (!empty($application_id) && recruit_application_access('edit', $application)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('recruit_application_form_submit_delete'),
    );
  }

  return $form;
}

/**
 * Application submit handler.
 */
function recruit_application_form_submit($form, &$form_state) {
  $application = $form_state['application'];
  entity_form_submit_build_entity('recruit_application', $application, $form, $form_state);

  recruit_application_save($application);

  $application_uri = entity_uri('recruit_application', $application);
  $form_state['redirect'] = $application_uri['path'];

  $submission_message = variable_get('recruit_application_submission_message_' . $application->type, RECRUIT_APPLICATION_SUBMISSION_MESSAGE);
  drupal_set_message(t($submission_message));
}

/**
 * Application submit delete handler.
 */
function recruit_application_form_submit_delete($form, &$form_state) {
  $application = $form_state['application'];
  $application_uri = entity_uri('recruit_application', $application);
  $form_state['redirect'] = $application_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function recruit_application_delete_form($form, &$form_state, $application) {
  $form_state['application'] = $application;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['application_type_id'] = array(
    '#type' => 'value',
    '#value' => entity_id('recruit_application', $application),
  );
  $application_uri = entity_uri('recruit_application', $application);
  return confirm_form($form,
    t('Are you sure you want to delete application %title?', array('%title' => entity_label('recruit_application', $application))),
    $application_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function recruit_application_delete_form_submit($form, &$form_state) {
  $application = $form_state['application'];
  recruit_application_delete($application);

  drupal_set_message(t('application %title deleted.', array('%title' => entity_label('recruit_application', $application))));

  $form_state['redirect'] = '<front>';
}
