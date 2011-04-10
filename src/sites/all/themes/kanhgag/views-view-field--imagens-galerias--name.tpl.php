<?php

// VERY Ugly code. :-(
// Please take in consideration it's been written three years ago

$filepath = db_result(db_query('
  SELECT filepath
  FROM {files} f
  INNER JOIN image i ON f.fid = i.fid
  INNER JOIN term_node t on t.nid = i.nid
  WHERE tid = %d AND image_size = "thumbnail" limit 1;', $row->tid));

print '<div>' . theme('image', $filepath) . '</div>';

print $output; 
