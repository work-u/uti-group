<?php

/**
 * @file
 * Defines entity controllers.
 */

class RecruitApplicationController extends EntityAPIController {

  /**
   * {@inheritdoc}
   */
  public function create(array $values = array()) {
    global $user;
    $values += array(
      'created' => REQUEST_TIME,
      'changed' => REQUEST_TIME,
      'uid' => $user->uid,
    );
    return parent::create($values);
  }

  /**
   * {@inheritdoc}
   */
  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    $wrapper = entity_metadata_wrapper('recruit_application', $entity);
    $content['author'] = array('#markup' => t('Created by: !author', array('!author' => $wrapper->uid->name->value(array('sanitize' => TRUE)))));

    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
}

class RecruitApplicationTypeController extends EntityAPIControllerExportable {

  /**
   * {@inheritdoc}
   */
  public function create(array $values = array()) {
    $values += array(
      'label' => '',
      'description' => '',
    );
    return parent::create($values);
  }
}

/**
 * UI controller for application Type.
 */
class RecruitApplicationTypeUIController extends EntityDefaultUIController {
  /**
   * {@inheritdoc}
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path]['description'] = 'Manage application types and their fields.';
    return $items;
  }
}

/**
 * Application class.
 */
class RecruitApplication extends Entity {
  /**
   * {@inheritdoc}
   */
  protected function defaultLabel() {
    return 'Application: ' . $this->aid;
  }

  /**
   * {@inheritdoc}
   */
  protected function defaultUri() {
    return array('path' => 'application/' . $this->identifier());
  }
}

/**
 * application Type class.
 */
class RecruitApplicationType extends Entity {
  public $type;
  public $label;
  public $weight = 0;
  /**
   * {@inheritdoc}
   */
  public function __construct($values = array()) {
    parent::__construct($values, 'recruit_application_type');
  }

  /**
   * Checks to see if entity is locked.
   */
  public function isLocked() {
    return isset($this->status) && empty($this->is_new) && (($this->status & ENTITY_IN_CODE) || ($this->status & ENTITY_FIXED));
  }
}
