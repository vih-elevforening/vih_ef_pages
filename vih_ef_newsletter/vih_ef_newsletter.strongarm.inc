<?php
/**
 * @file
 * vih_ef_newsletter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vih_ef_newsletter_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_nyhedsbrev';
  $strongarm->value = '0';
  $export['language_content_type_nyhedsbrev'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_nyhedsbrev';
  $strongarm->value = array();
  $export['menu_options_nyhedsbrev'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_nyhedsbrev';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_nyhedsbrev'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nyhedsbrev';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_nyhedsbrev'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_nyhedsbrev';
  $strongarm->value = '1';
  $export['node_preview_nyhedsbrev'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_nyhedsbrev';
  $strongarm->value = 1;
  $export['node_submitted_nyhedsbrev'] = $strongarm;

  return $export;
}
