// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: indicator_ha

#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

void switch_event_cb(lv_event_t * e);
void switch_arc_event_cb(lv_event_t * e);
void ui_event_wifi_config(lv_event_t * e);
void ui_event_wifi_start(lv_event_t * e);
void brighness_cfg_event_cb(lv_event_t * e);
void display_cfg_apply_event_cb(lv_event_t * e);
void mqtt_addr_changed(lv_event_t * e);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
