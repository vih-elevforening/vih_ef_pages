<?php
/**
 * @file
 * vih_ef_members.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vih_ef_members_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'members';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Medlemmer';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Felt: Bruger: Adresse */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  /* Sorteringskriterie: Bruger: Adresse (field_address:last_name) */
  $handler->display->display_options['sorts']['field_address_last_name']['id'] = 'field_address_last_name';
  $handler->display->display_options['sorts']['field_address_last_name']['table'] = 'field_data_field_address';
  $handler->display->display_options['sorts']['field_address_last_name']['field'] = 'field_address_last_name';
  /* Sorteringskriterie: Bruger: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Kontekstuelt filter: Bruger: Årgang (field_year) */
  $handler->display->display_options['arguments']['field_year_tid']['id'] = 'field_year_tid';
  $handler->display->display_options['arguments']['field_year_tid']['table'] = 'field_data_field_year';
  $handler->display->display_options['arguments']['field_year_tid']['field'] = 'field_year_tid';
  $handler->display->display_options['arguments']['field_year_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_year_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_year_tid']['default_argument_options']['term_page'] = 0;
  $handler->display->display_options['arguments']['field_year_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['field_year_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['field_year_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_year_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_year_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_year_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_year_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['field_year_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_year_tid']['validate_options']['vocabularies'] = array(
    'year' => 'year',
  );
  $handler->display->display_options['arguments']['field_year_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['field_year_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_year_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_year_tid']['not'] = 0;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Årgang (field_year) */
  $handler->display->display_options['filters']['field_year_tid']['id'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_tid']['field'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['value'] = '';
  $handler->display->display_options['filters']['field_year_tid']['group'] = '0';
  $handler->display->display_options['filters']['field_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_tid']['expose']['operator_id'] = 'field_year_tid_op';
  $handler->display->display_options['filters']['field_year_tid']['expose']['label'] = 'Årgang (field_year)';
  $handler->display->display_options['filters']['field_year_tid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['field_year_tid']['expose']['operator'] = 'field_year_tid_op';
  $handler->display->display_options['filters']['field_year_tid']['expose']['identifier'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['field_year_tid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_year_tid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_year_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['filters']['field_year_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Adresse (field_address:name_line) */
  $handler->display->display_options['filters']['field_address_name_line']['id'] = 'field_address_name_line';
  $handler->display->display_options['filters']['field_address_name_line']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_name_line']['field'] = 'field_address_name_line';
  $handler->display->display_options['filters']['field_address_name_line']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_name_line']['group'] = 1;
  $handler->display->display_options['filters']['field_address_name_line']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_name_line']['expose']['operator_id'] = 'field_address_name_line_op';
  $handler->display->display_options['filters']['field_address_name_line']['expose']['label'] = 'Navn';
  $handler->display->display_options['filters']['field_address_name_line']['expose']['operator'] = 'field_address_name_line_op';
  $handler->display->display_options['filters']['field_address_name_line']['expose']['identifier'] = 'field_address_name_line';
  $handler->display->display_options['filters']['field_address_name_line']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_address_name_line']['expose']['multiple'] = FALSE;
  /* Filterkriterie: Bruger: Årgang (field_year) */
  $handler->display->display_options['filters']['field_year_tid']['id'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_tid']['field'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_tid']['expose']['operator_id'] = 'field_year_tid_op';
  $handler->display->display_options['filters']['field_year_tid']['expose']['label'] = 'Årgang';
  $handler->display->display_options['filters']['field_year_tid']['expose']['operator'] = 'field_year_tid_op';
  $handler->display->display_options['filters']['field_year_tid']['expose']['identifier'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_year_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['filters']['field_year_tid']['error_message'] = 1;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'medlemmer';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Medlemmer';
  $handler->display->display_options['menu']['name'] = 'management';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Årgang (field_year) */
  $handler->display->display_options['filters']['field_year_tid']['id'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_tid']['field'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['group'] = '0';
  $handler->display->display_options['filters']['field_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_tid']['expose']['operator_id'] = 'field_year_tid_op';
  $handler->display->display_options['filters']['field_year_tid']['expose']['label'] = 'Årgang';
  $handler->display->display_options['filters']['field_year_tid']['expose']['operator'] = 'field_year_tid_op';
  $handler->display->display_options['filters']['field_year_tid']['expose']['identifier'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_year_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['filters']['field_year_tid']['error_message'] = 1;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '200';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktiv */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Bruger: Årgang (field_year) */
  $handler->display->display_options['filters']['field_year_tid']['id'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['table'] = 'field_data_field_year';
  $handler->display->display_options['filters']['field_year_tid']['field'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_year_tid']['group'] = '0';
  $handler->display->display_options['filters']['field_year_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_year_tid']['expose']['operator_id'] = 'field_year_tid_op';
  $handler->display->display_options['filters']['field_year_tid']['expose']['label'] = 'Årgang';
  $handler->display->display_options['filters']['field_year_tid']['expose']['operator'] = 'field_year_tid_op';
  $handler->display->display_options['filters']['field_year_tid']['expose']['identifier'] = 'field_year_tid';
  $handler->display->display_options['filters']['field_year_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_year_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_year_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_year_tid']['vocabulary'] = 'year';
  $handler->display->display_options['filters']['field_year_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'export';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'block_1' => 'block_1',
    'default' => 0,
  );
  $translatables['members'] = array(
    t('Master'),
    t('Medlemmer'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('E-mail'),
    t('Adresse'),
    t('Alle'),
    t('Årgang (field_year)'),
    t('Page'),
    t('Navn'),
    t('Årgang'),
    t('Blok'),
    t('Data export'),
  );
  $export['members'] = $view;

  return $export;
}
