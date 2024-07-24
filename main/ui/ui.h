// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: indicator_ha

#ifndef _INDICATOR_HA_UI_H
#define _INDICATOR_HA_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_screen_ha_mix
void ui_screen_ha_mix_screen_init(void);
void ui_event_screen_ha_mix(lv_event_t * e);
extern lv_obj_t * ui_screen_ha_mix;
extern lv_obj_t * ui_sensor5_btn1;
extern lv_obj_t * ui_sensor5_logo1;
extern lv_obj_t * ui_sensor5_label1;
extern lv_obj_t * ui_sensor_data_temp_1;
extern lv_obj_t * ui_sensor5_unit1;
extern lv_obj_t * ui_sensor6_btn1;
extern lv_obj_t * ui_sensor6_logo1;
extern lv_obj_t * ui_sensor6_label1;
extern lv_obj_t * ui_sensor_data_humi_1;
extern lv_obj_t * ui_sensor6_unit1;
void ui_event_switch1(lv_event_t * e);
extern lv_obj_t * ui_switch1;
extern lv_obj_t * ui_switch1_logo1;
extern lv_obj_t * ui_switch1_label1;
void ui_event_switch2(lv_event_t * e);
extern lv_obj_t * ui_switch2;
extern lv_obj_t * ui_switch2_logo1;
extern lv_obj_t * ui_switch2_label1;
extern lv_obj_t * ui_switch3;
extern lv_obj_t * ui_switch3_label1;
void ui_event_switch3_switch1(lv_event_t * e);
extern lv_obj_t * ui_switch3_switch1;
extern lv_obj_t * ui_panel_top_2;
extern lv_obj_t * ui_time_ha_data1;
extern lv_obj_t * ui_screen_home_data_label2;
void ui_event_wifi__st_button_ha_data1(lv_event_t * e);
extern lv_obj_t * ui_wifi__st_button_ha_data1;
extern lv_obj_t * ui_wifi_st_4;
// SCREEN: ui_screen_ha_data
void ui_screen_ha_data_screen_init(void);
void ui_event_screen_ha_data(lv_event_t * e);
extern lv_obj_t * ui_screen_ha_data;
extern lv_obj_t * ui_panel_top_1;
extern lv_obj_t * ui_time_ha_data;
extern lv_obj_t * ui_screen_home_data_label1;
void ui_event_wifi__st_button_ha_data(lv_event_t * e);
extern lv_obj_t * ui_wifi__st_button_ha_data;
extern lv_obj_t * ui_wifi_st_2;
extern lv_obj_t * ui_sensor1_btn1;
extern lv_obj_t * ui_sensor1_logo1;
extern lv_obj_t * ui_sensor1_label1;
extern lv_obj_t * ui_sensor_data_temp_2;
extern lv_obj_t * ui_sensor1_unit1;
extern lv_obj_t * ui_sensor2_btn1;
extern lv_obj_t * ui_sensor2_logo1;
extern lv_obj_t * ui_sensor2_label1;
extern lv_obj_t * ui_sensor_data_humi_2;
extern lv_obj_t * ui_sensor2_unit1;
extern lv_obj_t * ui_sensor3_btn1;
extern lv_obj_t * ui_sensor3_logo1;
extern lv_obj_t * ui_sensor3_label1;
extern lv_obj_t * ui_sensor_data_tvoc_2;
extern lv_obj_t * ui_sensor3_unit1;
extern lv_obj_t * ui_sensor4_btn1;
extern lv_obj_t * ui_sensor4_logo1;
extern lv_obj_t * ui_sensor4_label1;
extern lv_obj_t * ui_sensor_data_co2_2;
extern lv_obj_t * ui_sensor4_unit1;
// SCREEN: ui_screen_ha_ctrl
void ui_screen_ha_ctrl_screen_init(void);
void ui_event_screen_ha_ctrl(lv_event_t * e);
extern lv_obj_t * ui_screen_ha_ctrl;
void ui_event_switch4(lv_event_t * e);
extern lv_obj_t * ui_switch4;
extern lv_obj_t * ui_switch4_logo1;
extern lv_obj_t * ui_switch4_label1;
extern lv_obj_t * ui_switch5;
void ui_event_switch5_arc1(lv_event_t * e);
extern lv_obj_t * ui_switch5_arc1;
extern lv_obj_t * ui_switch5_label1;
extern lv_obj_t * ui_switch5_arc_data1;
void ui_event_switch6(lv_event_t * e);
extern lv_obj_t * ui_switch6;
extern lv_obj_t * ui_switch6_logo1;
extern lv_obj_t * ui_switch6_label1;
extern lv_obj_t * ui_switch7_btn;
extern lv_obj_t * ui_switch7_label1;
void ui_event_switch7(lv_event_t * e);
extern lv_obj_t * ui_switch7;
extern lv_obj_t * ui_switch8;
extern lv_obj_t * ui_switch8_label1;
void ui_event_switch8_slider1(lv_event_t * e);
extern lv_obj_t * ui_switch8_slider1;
extern lv_obj_t * ui_panel_top_3;
extern lv_obj_t * ui_time_ha_data2;
extern lv_obj_t * ui_screen_home_data_label3;
void ui_event_wifi__st_button_ha_data2(lv_event_t * e);
extern lv_obj_t * ui_wifi__st_button_ha_data2;
extern lv_obj_t * ui_wifi_st_5;
// SCREEN: ui_screen_setting
void ui_screen_setting_screen_init(void);
void ui_event_screen_setting(lv_event_t * e);
extern lv_obj_t * ui_screen_setting;
extern lv_obj_t * ui_panel_top_4;
extern lv_obj_t * ui_time_ha_data3;
void ui_event_wifi__st_button_ha_setting(lv_event_t * e);
extern lv_obj_t * ui_wifi__st_button_ha_setting;
extern lv_obj_t * ui_wifi_st_6;
extern lv_obj_t * ui_Container_Setting;
extern lv_obj_t * ui_setting_title1;
extern lv_obj_t * ui_setting_icon1;
void ui_event_setting_wifi1(lv_event_t * e);
extern lv_obj_t * ui_setting_wifi1;
extern lv_obj_t * ui_setting_wifi_icon1;
extern lv_obj_t * ui_setting_wifi_title1;
void ui_event_setting_display1(lv_event_t * e);
extern lv_obj_t * ui_setting_display1;
extern lv_obj_t * ui_setting_display_icon1;
extern lv_obj_t * ui_setting_display_title1;
extern lv_obj_t * ui_scrolldots1;
extern lv_obj_t * ui_scrolldots2;
extern lv_obj_t * ui_scrolldots4;
extern lv_obj_t * ui_scrolldots5;
void ui_event_setting_display2(lv_event_t * e);
extern lv_obj_t * ui_setting_display2;
extern lv_obj_t * ui_Label1;
// SCREEN: ui_screen_wifi
void ui_screen_wifi_screen_init(void);
extern lv_obj_t * ui_screen_wifi;
extern lv_obj_t * ui_panel_top_5;
extern lv_obj_t * ui_back_wifi;
extern lv_obj_t * ui_screen_home_data_label4;
extern lv_obj_t * ui_wifi__st_button_ha_data4;
extern lv_obj_t * ui_wifi_st_7;
// SCREEN: ui_screen_display
void ui_screen_display_screen_init(void);
extern lv_obj_t * ui_screen_display;
extern lv_obj_t * ui_sleep_mode_time;
extern lv_obj_t * ui_after1;
void ui_event_sleep_mode_time_cfg(lv_event_t * e);
extern lv_obj_t * ui_sleep_mode_time_cfg;
extern lv_obj_t * ui_min1;
extern lv_obj_t * ui_sleep_mode;
extern lv_obj_t * ui_sleep_mode_title;
void ui_event_sleep_mode_cfg(lv_event_t * e);
extern lv_obj_t * ui_sleep_mode_cfg;
extern lv_obj_t * ui_brighness1;
void ui_event_brighness_cfg(lv_event_t * e);
extern lv_obj_t * ui_brighness_cfg;
extern lv_obj_t * ui_brighness_title;
extern lv_obj_t * ui_brighness_icon_3;
extern lv_obj_t * ui_brighness_icon_4;
void ui_event_display_keyboard(lv_event_t * e);
extern lv_obj_t * ui_display_keyboard;
extern lv_obj_t * ui_display_title1;
void ui_event_back3(lv_event_t * e);
extern lv_obj_t * ui_back3;
// SCREEN: ui_screen_broker
void ui_screen_broker_screen_init(void);
extern lv_obj_t * ui_screen_broker;
extern lv_obj_t * ui_panel_top_6;
void ui_event_back_wifi1(lv_event_t * e);
extern lv_obj_t * ui_back_wifi1;
extern lv_obj_t * ui_screen_home_data_label5;
void ui_event_wifi__st_button_ha_data3(lv_event_t * e);
extern lv_obj_t * ui_wifi__st_button_ha_data3;
extern lv_obj_t * ui_wifi_st_1;
extern lv_obj_t * ui_container_Inputer;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Label3;
void ui_event_textarea_ip_0(lv_event_t * e);
extern lv_obj_t * ui_textarea_ip_0;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Container2;
void ui_event_Keyboard_ip(lv_event_t * e);
extern lv_obj_t * ui_Keyboard_ip;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_ic_temp_png);    // assets/ic_temp.png
LV_IMG_DECLARE(ui_img_ic_hum_png);    // assets/ic_hum.png
LV_IMG_DECLARE(ui_img_ic_switch2_on_png);    // assets/ic_switch2_on.png
LV_IMG_DECLARE(ui_img_ic_switch2_off_png);    // assets/ic_switch2_off.png
LV_IMG_DECLARE(ui_img_ic_switch1_on_png);    // assets/ic_switch1_on.png
LV_IMG_DECLARE(ui_img_ic_switch1_off_png);    // assets/ic_switch1_off.png
LV_IMG_DECLARE(ui_img_wifi_disconet_png);    // assets/wifi_disconet.png
LV_IMG_DECLARE(ui_img_ic_tvoc_png);    // assets/ic_tVOC.png
LV_IMG_DECLARE(ui_img_ic_co2_png);    // assets/ic_co2.png
LV_IMG_DECLARE(ui_img_setting_png);    // assets/setting.png
LV_IMG_DECLARE(ui_img_wifi_setting_png);    // assets/wifi_setting.png
LV_IMG_DECLARE(ui_img_display_png);    // assets/display.png
LV_IMG_DECLARE(ui_img_back_png);    // assets/back.png
LV_IMG_DECLARE(ui_img_high_light_png);    // assets/high_light.png
LV_IMG_DECLARE(ui_img_low_light_png);    // assets/low_light.png
LV_IMG_DECLARE(ui_img_co2_png);    // assets/co2.png
LV_IMG_DECLARE(ui_img_humidity_1_png);    // assets/humidity_1.png
LV_IMG_DECLARE(ui_img_humidity_2_png);    // assets/humidity_2.png
LV_IMG_DECLARE(ui_img_location2_png);    // assets/location2.png
LV_IMG_DECLARE(ui_img_temp_1_png);    // assets/temp_1.png
LV_IMG_DECLARE(ui_img_temp_2_png);    // assets/temp_2.png
LV_IMG_DECLARE(ui_img_wifi_1_png);    // assets/wifi_1.png
LV_IMG_DECLARE(ui_img_wifi_2_png);    // assets/wifi_2.png
LV_IMG_DECLARE(ui_img_wifi_3_png);    // assets/wifi_3.png



LV_FONT_DECLARE(ui_font_font0);
LV_FONT_DECLARE(ui_font_font2);
LV_FONT_DECLARE(ui_font_font3);
LV_FONT_DECLARE(ui_font_font4);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
