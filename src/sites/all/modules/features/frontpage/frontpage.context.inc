<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function frontpage_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'front' => 'front',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-front_image-block_1' => array(
          'module' => 'views',
          'delta' => 'front_image-block_1',
          'region' => 'home_left',
          'weight' => 0,
        ),
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'home_middle',
          'weight' => 0,
        ),
        'views-videos-block_1' => array(
          'module' => 'views',
          'delta' => 'videos-block_1',
          'region' => 'home_right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['frontpage'] = $context;
  return $export;
}
