<?php

/**
 * Implementation of hook_node_info().
 */
function videos_node_info() {
  $items = array(
    'kagra_vogvo' => array(
      'name' => t('Kãgrá vogvo vej fã'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'has_body' => '1',
      'body_label' => t('Corpo'),
      'min_word_count' => '1',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function videos_views_api() {
  return array(
    'api' => '2',
  );
}
