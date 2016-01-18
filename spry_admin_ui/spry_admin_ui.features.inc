<?php
/**
 * @file
 * spry_admin_ui.features.inc
 */

/**
 * Implements hook_views_api().
 */
function spry_admin_ui_views_api() {
  return array(
    'api' => 3,
    'template path' => drupal_get_path('module', 'spry_admin_ui') . '/theme',
  );
}