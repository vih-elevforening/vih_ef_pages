<?php
/**
 * @file
 * vih_ef_board.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vih_ef_board_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'bestyrelse';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bestyrelse';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bestyrelse';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_picture' => 'field_picture',
    'field_title' => 'field_title',
    'title' => 'field_title',
    'field_email' => 'field_title',
    'field_phone' => 'field_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '	<strong>Kontaktinformation</strong></p>
<table border="0" cellpadding="0">
	<tbody>
		<tr>
			<td colspan="2">
				<p style="text-align:center;">
					Kontaktinformation til bestyrelsen</p>
			</td>
		</tr>
		<tr>
			<td>
				<p style="text-align:center;">
					<strong>Adresse</strong></p>
			</td>
			<td>
				<p>
					Vindingvej 28c, 7100 Vejle</p>
			</td>
		</tr>
		<tr>
			<td>
				<p style="text-align:center;">
					<strong>Email</strong></p>
			</td>
			<td>
				<p>
					elevforeningen@vih.dk</p>
			</td>
		</tr>
		<tr>
			<td>
				<p style="text-align:center;">
					<strong>Bankkonto</strong></p>
			</td>
			<td>
				<p>
					1551&nbsp; - 8041970</p>
			</td>
		</tr>
	</tbody>
</table>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_picture']['group_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['field_title']['id'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['table'] = 'field_data_field_title';
  $handler->display->display_options['fields']['field_title']['field'] = 'field_title';
  $handler->display->display_options['fields']['field_title']['label'] = '';
  $handler->display->display_options['fields']['field_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['text'] = '<strong>[field_title]</strong>';
  $handler->display->display_options['fields']['field_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_title']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: E-mail */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Felt: Felt: Telefon */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = '<strong>[field_title]</strong>
[title]
[field_email]
[field_phone]';
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bestyrelse' => 'bestyrelse',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bestyrelse';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Bestyrelse';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['bestyrelse'] = array(
    t('Master'),
    t('Bestyrelse'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('	<strong>Kontaktinformation</strong></p>
<table border="0" cellpadding="0">
	<tbody>
		<tr>
			<td colspan="2">
				<p style="text-align:center;">
					Kontaktinformation til bestyrelsen</p>
			</td>
		</tr>
		<tr>
			<td>
				<p style="text-align:center;">
					<strong>Adresse</strong></p>
			</td>
			<td>
				<p>
					Vindingvej 28c, 7100 Vejle</p>
			</td>
		</tr>
		<tr>
			<td>
				<p style="text-align:center;">
					<strong>Email</strong></p>
			</td>
			<td>
				<p>
					elevforeningen@vih.dk</p>
			</td>
		</tr>
		<tr>
			<td>
				<p style="text-align:center;">
					<strong>Bankkonto</strong></p>
			</td>
			<td>
				<p>
					1551&nbsp; - 8041970</p>
			</td>
		</tr>
	</tbody>
</table>'),
    t('<strong>[field_title]</strong>'),
    t('E-mail'),
    t('Telefon'),
    t('<strong>[field_title]</strong>
[title]
[field_email]
[field_phone]'),
    t('Page'),
  );
  $export['bestyrelse'] = $view;

  return $export;
}
