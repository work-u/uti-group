<?php
/*
 * @file
 * Default Rules
 */
/**
 * Implements hook_default_rules_configuration().
 */
function recruit_application_default_rules_configuration() {
  $exported_rules = array();
  $exported_rules['rules_recruit_application_send_confirmation_email'] = '{ "rules_recruit_application_send_confirmation_email" : {
    "LABEL" : "Send confirmation email to applicant",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "TAGS" : [ "recruit_application" ],
    "REQUIRES" : [ "rules", "recruit_application" ],
    "ON" : { "recruit_application_insert" : [] },
    "IF" : [
      { "NOT data_is_empty" : { "data" : [ "recruit-application:confirmation-mail" ] } },
      { "user_has_role" : {
          "account" : [ "site:current-user" ],
          "roles" : { "value" : { "2" : "2" } }
        }
      }
    ],
    "DO" : [
      { "mail" : {
          "to" : [ "site:current-user:mail" ],
          "subject" : [ "recruit-application:confirmation-mail-subject" ],
          "message" : [ "recruit-application:confirmation-mail-message" ],
          "language" : [ "" ]
        }
      }
    ]
  }
}';


  foreach ($exported_rules as $exported_rule) {
    $rule = rules_import($exported_rule);
    $configs[$rule->name] = $rule;
  }

  return $configs;
}