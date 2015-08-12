<?php

function missing_image_fetcher_config($form, &$form_state) {

  $form['schema_public'] = array(
    '#type' => 'fieldset',
    '#title' => t('Settings for public://'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );

  $form['schema_public']['missing_image_fetcher_location_public'] = array(
    '#type' => 'textfield',
    '#title' => t('Original resources location'),
    '#default_value' => variable_get('missing_image_fetcher_location_public'),
  );

  $form['schema_public']['missing_image_fetcher_downloader_public'] = array(
    '#type' => 'radios',
    '#title' => t('Downloader'),
    '#default_value' => variable_get('missing_image_fetcher_downloader_public', 'default'),
    '#options' => array(
      'default' => t('Default'),
      'curl_basic' => t('cURL with basic auth'),
      'curl_digest' => t('cURL with digest auth'),
    ),
  );

  return system_settings_form($form);
}
