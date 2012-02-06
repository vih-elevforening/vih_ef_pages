<?php
/**
 * @file
 * vih_ef_members.features.inc
 */

/**
 * Implements hook_views_api().
 */
function vih_ef_members_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
