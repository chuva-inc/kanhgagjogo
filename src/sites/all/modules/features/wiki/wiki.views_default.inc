<?php

/**
 * Implementation of hook_views_default_views().
 */
function wiki_views_default_views() {
  $views = array();

  // Exported view: Wikikepe
  $view = new view;
  $view->name = 'Wikikepe';
  $view->description = 'Wiki_kanhgág';
  $view->tag = 'wikikanhgag';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Vĩ ki ke pẽ ', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'title' => array(
      'order' => 'ASC',
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'vikikepe' => 'vikikepe',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header', 'Tag hẽ nỹ tỹ Kanhgág vĩ ki enciclopédia nĩ. Kanhgág pẽ ag tỹ jagnẽ mré han ve vẽ Brasil kãki. 
Tag ki ã tỹ ã jykre to vẽnh-rá há ẽn to vẽnhrán mũ, ã tỹ nén kinhra ẽn to. 
Tag tỹ tỹ kanhgág ag mré to jykrén kãn ge nĩ. 
Hã ra ã pi vé nén ũ vẽnhmỹ, kar nén ũ kórég tỹ ki rán ge nĩ: partidos políticos, igrejas kar tv kãmĩ nén ũ kórég vigvej fã ti. ');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 150);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'list');
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->override_option('title', 'Vĩ ki ke pẽ ');
  $handler->override_option('path', 'wikikanhgag');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
