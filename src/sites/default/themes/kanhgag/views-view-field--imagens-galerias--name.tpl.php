<?php

$filepath = db_result(db_query('select filepath from files f inner join image i on f.fid = i.fid inner join term_node t on t.nid = i.nid where tid = %d and image_size = "thumbnail"limit 1;', $row->tid));

print '<div>' . theme('image', $filepath) . '</div>';

print $output; 

