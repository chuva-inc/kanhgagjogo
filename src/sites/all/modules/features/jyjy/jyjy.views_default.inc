<?php

/**
 * Implementation of hook_views_default_views().
 */
function jyjy_views_default_views() {
  $views = array();

  // Exported view: jyjy
  $view = new view;
  $view->name = 'jyjy';
  $view->description = 'Lista de nomes';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => 'Jyjy',
      'link_to_node' => 0,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'field_metade_value' => array(
      'label' => 'Kamẽ / Kanhru',
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'unformatted',
      'multiple' => array(
        'group' => 1,
        'multiple_number' => '1',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_metade_value',
      'table' => 'node_data_field_metade',
      'field' => 'field_metade_value',
      'relationship' => 'none',
    ),
    'field_ra_value' => array(
      'label' => 'Rá',
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ra_value',
      'table' => 'node_data_field_ra',
      'field' => 'field_ra_value',
      'relationship' => 'none',
    ),
    'field_tifi_value' => array(
      'label' => 'Ti/Fi',
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_tifi_value',
      'table' => 'node_data_field_tifi',
      'field' => 'field_tifi_value',
      'relationship' => 'none',
    ),
    'field_ema_nid' => array(
      'label' => 'Emã',
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ema_nid',
      'table' => 'node_data_field_ema',
      'field' => 'field_ema_nid',
      'relationship' => 'none',
    ),
    'field_ranja_value' => array(
      'label' => 'Ũ tỹ rán ja',
      'link_to_node' => 1,
      'label_type' => 'widget',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_ranja_value',
      'table' => 'node_data_field_ranja',
      'field' => 'field_ranja_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'jyjy' => 'jyjy',
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
  $handler->override_option('title', 'Kanhgág jyjy');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'title' => 'title',
      'field_ra_value' => 'field_ra_value',
      'field_tifi_value' => 'field_tifi_value',
      'field_ema_nid' => 'field_ema_nid',
      'field_ranja_value' => 'field_ranja_value',
    ),
    'info' => array(
      'title' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_ra_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'field_tifi_value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'field_ema_nid' => array(
        'separator' => '',
      ),
      'field_ranja_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => 'title',
  ));
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->override_option('items_per_page', 500);
  $handler->override_option('path', 'jyjy');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Kanhgág jyjy',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
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
