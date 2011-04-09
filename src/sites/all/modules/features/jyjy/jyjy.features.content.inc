<?php

/**
 * Implementation of hook_content_default_fields().
 */
function jyjy_content_default_fields() {
  $fields = array();

  // Exported field: field_ema
  $fields['jyjy-field_ema'] = array(
    'field_name' => 'field_ema',
    'type_name' => 'jyjy',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'ema' => 'ema',
      'hynhan_ja' => 0,
      'jyjy' => 0,
      'ka_sa_tag' => 0,
      'image' => 0,
      'kagra_vogvo' => 0,
      'my_gej_ke' => 0,
      'manual' => 0,
      'pagina' => 0,
      'ti_fej' => 0,
      'va_me' => 0,
      'vaminmen' => 0,
      'vikikepe' => 0,
      'texto' => 0,
      'un' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Emã',
      'weight' => '-1',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_metade
  $fields['jyjy-field_metade'] = array(
    'field_name' => 'field_metade',
    'type_name' => 'jyjy',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => 'Kamẽ
Kanhru
Votor
Vãnhjẽnky',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Kamẽ / Kanhru',
      'weight' => '-3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_ra
  $fields['jyjy-field_ra'] = array(
    'field_name' => 'field_ra',
    'type_name' => 'jyjy',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '20',
    'allowed_values' => 'téj
ror',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '3',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ra][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Rá',
      'weight' => '-4',
      'description' => 'Use apenas: téj ou ror  (sem maiúsculas)',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ranja
  $fields['jyjy-field_ranja'] = array(
    'field_name' => 'field_ranja',
    'type_name' => 'jyjy',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '30',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ranja][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Ũ tỹ rán ja',
      'weight' => '2',
      'description' => 'informa quem fez o registro desse ítem',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_tifi
  $fields['jyjy-field_tifi'] = array(
    'field_name' => 'field_tifi',
    'type_name' => 'jyjy',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '2',
    'allowed_values' => 'fi
ti',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '2',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_tifi][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Ti/Fi',
      'weight' => '-2',
      'description' => 'Use apenas: ti ou fi (sem maiúsculas)',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Emã');
  t('Kamẽ / Kanhru');
  t('Rá');
  t('Ti/Fi');
  t('Ũ tỹ rán ja');

  return $fields;
}
