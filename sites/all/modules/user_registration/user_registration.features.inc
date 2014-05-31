<?php
/**
 * @file
 * user_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function user_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function user_registration_default_profile2_type() {
  $items = array();
  $items['interest'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "interest",
    "label" : "Interest",
    "weight" : "0",
    "data" : { "registration" : false, "use_page" : 1, "step_step" : "interest" },
    "rdf_mapping" : []
  }');
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Personal Information",
    "weight" : "0",
    "data" : {
      "registration" : false,
      "use_page" : 1,
      "step_step" : "personal_information",
      "step_exclude" : {
        "field_first_name" : 0,
        "field_last_name" : 0,
        "field_date_of_birth" : 0,
        "field_address" : 0,
        "field_phone_number" : 0
      }
    },
    "rdf_mapping" : []
  }');
  $items['social_profile'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "social_profile",
    "label" : "Social Profile",
    "weight" : "0",
    "data" : {
      "registration" : false,
      "use_page" : 1,
      "step_step" : "social_information",
      "step_exclude" : {
        "field_facebook_profile_url" : 0,
        "field_twitter_profile_handler" : 0,
        "field_linkedin_profile_url" : 0
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}
