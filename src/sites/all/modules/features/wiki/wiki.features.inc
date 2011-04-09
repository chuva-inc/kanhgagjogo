<?php

/**
 * Implementation of hook_node_info().
 */
function wiki_node_info() {
  $items = array(
    'vikikepe' => array(
      'name' => t('Vĩkikepẽ'),
      'module' => 'features',
      'description' => t('Vĩ ki ke pẽ é um verbete de enciclopédia wiki, em Kanhgág. '),
      'has_title' => '1',
      'title_label' => t('Tu rán ge'),
      'has_body' => '1',
      'body_label' => t('Kãki nỹtĩ'),
      'min_word_count' => '10',
      'help' => t('Kanhgág vĩ ki ke tỹvĩn.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function wiki_views_api() {
  return array(
    'api' => '2',
  );
}
