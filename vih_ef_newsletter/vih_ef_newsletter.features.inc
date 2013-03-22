<?php
/**
 * @file
 * vih_ef_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_ef_newsletter_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_ef_newsletter_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function vih_ef_newsletter_node_info() {
  $items = array(
    'nyhedsbrev' => array(
      'name' => t('Nyhedsbrev'),
      'base' => 'node_content',
      'description' => t('Upload nyhedsbrev i pdf til elevforeningen'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
