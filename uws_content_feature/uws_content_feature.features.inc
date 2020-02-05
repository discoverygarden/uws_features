<?php

/**
 * @file
 * uws_content_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uws_content_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
