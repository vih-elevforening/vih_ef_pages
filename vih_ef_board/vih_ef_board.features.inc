<?php
/**
 * @file
 * vih_ef_board.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_ef_board_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_ef_board_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_ef_board_node_info() {
  $items = array(
    'bestyrelse' => array(
      'name' => t('Bestyrelse'),
      'base' => 'node_content',
      'description' => t('Bruges til bestyrelsesmedlemmer.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
