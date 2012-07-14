<?php
/**
 * @file
 * d7pf_security_pp_tax.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function d7pf_security_pp_tax_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'security_pp_tax';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'security_pp_tax';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: PP */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['group_rows'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: PP (taxonomy_vocabulary_3) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['specify_validation'] = 1;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['validate_options']['vocabularies'] = array(
    'vocabulary_3' => 'vocabulary_3',
  );
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['validate_options']['transform'] = 0;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'security_attribute' => 'security_attribute',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'security/%/test';
  $export['security_pp_tax'] = $view;

  return $export;
}
