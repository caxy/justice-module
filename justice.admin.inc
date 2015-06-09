<?php

/**
 * Settings for Justice.js script.
 */
function justice_admin_settings() {
  $form = array();
  $form['budget'] = array(
    '#type' => 'fieldset',
    '#title' => 'Budgets',
  );
  $form['budget']['justice_budget_ttfb'] = array(
    '#type' => 'textfield',
    '#title' => 'Time To First Byte',
    '#field_suffix' => 'ms',
    '#default_value' => variable_get('justice_budget_ttfb', 200),
  );
  $form['budget']['justice_budget_dominteractive'] = array(
    '#type' => 'textfield',
    '#title' => 'DOM Interactive',
    '#field_suffix' => 'ms',
    '#default_value' => variable_get('justice_budget_dominteractive', 250),
  );
  $form['budget']['justice_budget_domcomplete'] = array(
    '#type' => 'textfield',
    '#title' => 'DOM Complete',
    '#field_suffix' => 'ms',
    '#default_value' => variable_get('justice_budget_domcomplete', 800),
  );
  $form['budget']['justice_budget_firstpaint'] = array(
    '#type' => 'textfield',
    '#title' => 'First paint',
    '#field_suffix' => 'ms',
    '#default_value' => variable_get('justice_budget_firstpaint', 1000),
  );
  $form['budget']['justice_budget_pageload'] = array(
    '#type' => 'textfield',
    '#title' => 'Page load',
    '#field_suffix' => 'ms',
    '#default_value' => variable_get('justice_budget_pageload', 2000),
  );
  $form['budget']['justice_budget_requests'] = array(
    '#type' => 'textfield',
    '#title' => 'Requests',
    '#default_value' => variable_get('justice_budget_requests', 6),
  );
  $form['interface'] = array(
    '#type' => 'fieldset',
    '#title' => 'Interface',
  );
  $form['interface']['justice_interface_position'] = array(
    '#type' => 'select',
    '#title' => 'Position',
    '#options' => array(
      'fixed' => 'fixed',
    ),
    '#default_value' => variable_get('justice_interface_position', 'fixed'),
  );
  $form['interface']['justice_interface_placement'] = array(
    '#type' => 'select',
    '#title' => 'Placement',
    '#options' => array(
      'bottom' => 'bottom',
    ),
    '#default_value' => variable_get('justice_interface_placement', 'bottom'),
  );
  $form['justice_warnthreshold'] = array(
    '#type' => 'textfield',
    '#title' => 'Warning threshold',
    '#default_value' => variable_get('justice_warnthreshold', 0.8),
  );
  $form['justice_showfps'] = array(
    '#type' => 'checkbox',
    '#title' => 'Show FPS',
    '#return_value' => TRUE,
    '#default_value' => variable_get('justice_showfps', TRUE),
  );
  $form['justice_charttype'] = array(
    '#type' => 'select',
    '#title' => 'Chart type',
    '#options' => array(
      'spline' => 'spline',
      'dots' => 'dots',
    ),
    '#default_value' => variable_get('justice_charttype', 'spline'),
  );
  return system_settings_form($form);
}