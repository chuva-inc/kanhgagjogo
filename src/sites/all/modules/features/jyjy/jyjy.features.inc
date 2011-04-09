<?php

/**
 * Implementation of hook_node_info().
 */
function jyjy_node_info() {
  $items = array(
    'jyjy' => array(
      'name' => t('Jyjy'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Jyjy'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '1',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function jyjy_views_api() {
  return array(
    'api' => '2',
  );
}
