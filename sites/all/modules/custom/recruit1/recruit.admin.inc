<?php

function recruit_admin_settings(){

  $form['recruit_allow_anon'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('recruit_allow_anon', 0),
    '#title' => t('Allow anonymous user to submit applications.'),
  );


  return system_settings_form($form);
}
