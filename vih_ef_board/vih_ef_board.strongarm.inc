<?php
/**
 * @file
 * vih_ef_board.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_ef_board_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_bestyrelse';
  $strongarm->value = '0';
  $export['language_content_type_bestyrelse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_bestyrelse';
  $strongarm->value = array();
  $export['menu_options_bestyrelse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_bestyrelse';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_bestyrelse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_bestyrelse';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_bestyrelse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_bestyrelse';
  $strongarm->value = '1';
  $export['node_preview_bestyrelse'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_bestyrelse';
  $strongarm->value = 0;
  $export['node_submitted_bestyrelse'] = $strongarm;

  return $export;
}
