<?php
// Drupal.org Project plugin for freelinking

// allows for a link like [[drupalproject:Freelinking]] to be expanded to
// drupal.org/project/freelinking

$freelinking['drupalproject'] = array(
  'indicator' => '/d(rupal)?project/',
  'translate' => array(' ' => '_'),
  'replacement' => 'http://drupal.org/project/%1',
);

