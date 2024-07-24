// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: indicator_ha

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_screen_ha_mix
void ui_screen_ha_mix_screen_init(void);
void ui_event_screen_ha_mix(lv_event_t * e);
lv_obj_t * ui_screen_ha_mix;
lv_obj_t * ui_sensor5_btn1;
lv_obj_t * ui_sensor5_logo1;
lv_obj_t * ui_sensor5_label1;
lv_obj_t * ui_sensor_data_temp_1;
lv_obj_t * ui_sensor5_unit1;
lv_obj_t * ui_sensor6_btn1;
lv_obj_t * ui_sensor6_logo1;
lv_obj_t * ui_sensor6_label1;
lv_obj_t * ui_sensor_data_humi_1;
lv_obj_t * ui_sensor6_unit1;
void ui_event_switch1(lv_event_t * e);
lv_obj_t * ui_switch1;
lv_obj_t * ui_switch1_logo1;
lv_obj_t * ui_switch1_label1;
void ui_event_switch2(lv_event_t * e);
lv_obj_t * ui_switch2;
lv_obj_t * ui_switch2_logo1;
lv_obj_t * ui_switch2_label1;
lv_obj_t * ui_switch_btn3;
lv_obj_t * ui_switch3_label1;
void ui_event_switch3(lv_event_t * e);
lv_obj_t * ui_switch3;
lv_obj_t * ui_panel_top_2;
lv_obj_t * ui_time_ha_data1;
lv_obj_t * ui_screen_home_data_label2;
void ui_event_wifi__st_button_ha_data1(lv_event_t * e);
lv_obj_t * ui_wifi__st_button_ha_data1;
lv_obj_t * ui_wifi_st_1;


// SCREEN: ui_screen_ha_data
void ui_screen_ha_data_screen_init(void);
void ui_event_screen_ha_data(lv_event_t * e);
lv_obj_t * ui_screen_ha_data;
lv_obj_t * ui_panel_top_1;
lv_obj_t * ui_time_ha_data;
lv_obj_t * ui_screen_home_data_label1;
void ui_event_wifi__st_button_ha_data(lv_event_t * e);
lv_obj_t * ui_wifi__st_button_ha_data;
lv_obj_t * ui_wifi_st_2;
lv_obj_t * ui_sensor1_btn1;
lv_obj_t * ui_sensor1_logo1;
lv_obj_t * ui_sensor1_label1;
lv_obj_t * ui_sensor_data_temp_2;
lv_obj_t * ui_sensor1_unit1;
lv_obj_t * ui_sensor2_btn1;
lv_obj_t * ui_sensor2_logo1;
lv_obj_t * ui_sensor2_label1;
lv_obj_t * ui_sensor_data_humi_2;
lv_obj_t * ui_sensor2_unit1;
lv_obj_t * ui_sensor3_btn1;
lv_obj_t * ui_sensor3_logo1;
lv_obj_t * ui_sensor3_label1;
lv_obj_t * ui_sensor_data_tvoc_2;
lv_obj_t * ui_sensor3_unit1;
lv_obj_t * ui_sensor4_btn1;
lv_obj_t * ui_sensor4_logo1;
lv_obj_t * ui_sensor4_label1;
lv_obj_t * ui_sensor_data_co2_2;
lv_obj_t * ui_sensor4_unit1;


// SCREEN: ui_screen_ha_ctrl
void ui_screen_ha_ctrl_screen_init(void);
void ui_event_screen_ha_ctrl(lv_event_t * e);
lv_obj_t * ui_screen_ha_ctrl;
void ui_event_switch4(lv_event_t * e);
lv_obj_t * ui_switch4;
lv_obj_t * ui_switch4_logo1;
lv_obj_t * ui_switch4_label1;
lv_obj_t * ui_switch5;
void ui_event_switch5_arc1(lv_event_t * e);
lv_obj_t * ui_switch5_arc1;
lv_obj_t * ui_switch5_label1;
lv_obj_t * ui_switch5_arc_data1;
void ui_event_switch6(lv_event_t * e);
lv_obj_t * ui_switch6;
lv_obj_t * ui_switch6_logo1;
lv_obj_t * ui_switch6_label1;
lv_obj_t * ui_switch7_btn;
lv_obj_t * ui_switch7_label1;
void ui_event_switch7(lv_event_t * e);
lv_obj_t * ui_switch7;
lv_obj_t * ui_switch8;
lv_obj_t * ui_switch8_label1;
void ui_event_switch8_slider1(lv_event_t * e);
lv_obj_t * ui_switch8_slider1;
lv_obj_t * ui_panel_top_3;
lv_obj_t * ui_time_ha_data2;
lv_obj_t * ui_screen_home_data_label3;
void ui_event_wifi__st_button_ha_data2(lv_event_t * e);
lv_obj_t * ui_wifi__st_button_ha_data2;
lv_obj_t * ui_wifi_st_3;


// SCREEN: ui_screen_setting
void ui_screen_setting_screen_init(void);
void ui_event_screen_setting(lv_event_t * e);
lv_obj_t * ui_screen_setting;
lv_obj_t * ui_panel_top_4;
lv_obj_t * ui_time_ha_data3;
void ui_event_wifi__st_button_ha_setting(lv_event_t * e);
lv_obj_t * ui_wifi__st_button_ha_setting;
lv_obj_t * ui_wifi_st_4;
lv_obj_t * ui_Container_Setting;
lv_obj_t * ui_setting_title1;
lv_obj_t * ui_setting_icon1;
void ui_event_setting_wifi1(lv_event_t * e);
lv_obj_t * ui_setting_wifi1;
lv_obj_t * ui_setting_wifi_icon1;
lv_obj_t * ui_setting_wifi_title1;
void ui_event_setting_display1(lv_event_t * e);
lv_obj_t * ui_setting_display1;
lv_obj_t * ui_setting_display_icon1;
lv_obj_t * ui_setting_display_title1;
lv_obj_t * ui_scrolldots1;
lv_obj_t * ui_scrolldots2;
lv_obj_t * ui_scrolldots4;
lv_obj_t * ui_scrolldots5;
void ui_event_setting_display2(lv_event_t * e);
lv_obj_t * ui_setting_display2;
lv_obj_t * ui_Label1;


// SCREEN: ui_screen_wifi
void ui_screen_wifi_screen_init(void);
void ui_event_screen_wifi(lv_event_t * e);
lv_obj_t * ui_screen_wifi;
lv_obj_t * ui_panel_top_5;
void ui_event_back_wifi(lv_event_t * e);
lv_obj_t * ui_back_wifi;
lv_obj_t * ui_screen_home_data_label4;
lv_obj_t * ui_wifi__st_button_ha_data4;
lv_obj_t * ui_wifi_st_0;
lv_obj_t * ui_wifi_scan_wait;
lv_obj_t * ui_temp_image1;


// SCREEN: ui_screen_display
void ui_screen_display_screen_init(void);
lv_obj_t * ui_screen_display;
lv_obj_t * ui_sleep_mode_time;
lv_obj_t * ui_after1;
void ui_event_sleep_mode_time_cfg(lv_event_t * e);
lv_obj_t * ui_sleep_mode_time_cfg;
lv_obj_t * ui_min1;
lv_obj_t * ui_sleep_mode;
lv_obj_t * ui_sleep_mode_title;
void ui_event_sleep_mode_cfg(lv_event_t * e);
lv_obj_t * ui_sleep_mode_cfg;
lv_obj_t * ui_brighness1;
void ui_event_brighness_cfg(lv_event_t * e);
lv_obj_t * ui_brighness_cfg;
lv_obj_t * ui_brighness_title;
lv_obj_t * ui_brighness_icon_3;
lv_obj_t * ui_brighness_icon_4;
void ui_event_display_keyboard(lv_event_t * e);
lv_obj_t * ui_display_keyboard;
lv_obj_t * ui_display_title1;
void ui_event_back3(lv_event_t * e);
lv_obj_t * ui_back3;


// SCREEN: ui_screen_broker
void ui_screen_broker_screen_init(void);
lv_obj_t * ui_screen_broker;
lv_obj_t * ui_panel_top_6;
void ui_event_back_wifi1(lv_event_t * e);
lv_obj_t * ui_back_wifi1;
lv_obj_t * ui_screen_home_data_label5;
void ui_event_wifi__st_button_ha_data3(lv_event_t * e);
lv_obj_t * ui_wifi__st_button_ha_data3;
lv_obj_t * ui_wifi_st_01;
lv_obj_t * ui_container_Inputer;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Label3;
void ui_event_textarea_ip_0(lv_event_t * e);
lv_obj_t * ui_textarea_ip_0;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Container2;
void ui_event_Keyboard_ip(lv_event_t * e);
lv_obj_t * ui_Keyboard_ip;
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_co[1] = {&ui_img_co2_png};
const lv_img_dsc_t * ui_imgset_humidity_[2] = {&ui_img_humidity_1_png, &ui_img_humidity_2_png};
const lv_img_dsc_t * ui_imgset_ic_co[1] = {&ui_img_ic_co2_png};
const lv_img_dsc_t * ui_imgset_location[1] = {&ui_img_location2_png};
const lv_img_dsc_t * ui_imgset_temp_[2] = {&ui_img_temp_1_png, &ui_img_temp_2_png};
const lv_img_dsc_t * ui_imgset_wifi_[3] = {&ui_img_wifi_1_png, &ui_img_wifi_2_png, &ui_img_wifi_3_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_screen_ha_mix(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_screen_ha_data, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, &ui_screen_ha_data_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_screen_setting, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_screen_setting_screen_init);
    }
}
void ui_event_switch1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_switch1_logo1, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_ic_switch2_on_png);
        switch_event_cb(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_switch1_logo1, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_ic_switch2_off_png);
        switch_event_cb(e);
    }
}
void ui_event_switch2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_switch2_logo1, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_ic_switch1_on_png);
        switch_event_cb(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_switch2_logo1, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_ic_switch1_off_png);
        switch_event_cb(e);
    }
}
void ui_event_switch3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        switch_event_cb(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        switch_event_cb(e);
    }
}
void ui_event_wifi__st_button_ha_data1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_screen_wifi, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 0, &ui_screen_wifi_screen_init);
    }
}
void ui_event_screen_ha_data(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_screen_ha_ctrl, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, &ui_screen_ha_ctrl_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_screen_ha_mix, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_screen_ha_mix_screen_init);
    }
}
void ui_event_wifi__st_button_ha_data(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_screen_wifi, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 0, &ui_screen_wifi_screen_init);
    }
}
void ui_event_screen_ha_ctrl(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_screen_setting, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, &ui_screen_setting_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_screen_ha_data, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_screen_ha_data_screen_init);
    }
}
void ui_event_switch4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_switch4_logo1, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_ic_switch2_on_png);
        switch_event_cb(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_switch4_logo1, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_ic_switch2_off_png);
        switch_event_cb(e);
    }
}
void ui_event_switch5_arc1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_switch5_arc_data1, target, "", " °C");
        switch_arc_event_cb(e);
    }
}
void ui_event_switch6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_switch6_logo1, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_ic_switch1_on_png);
        switch_event_cb(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_switch6_logo1, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_ic_switch1_off_png);
        switch_event_cb(e);
    }
}
void ui_event_switch7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        switch_event_cb(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        switch_event_cb(e);
    }
}
void ui_event_switch8_slider1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        switch_arc_event_cb(e);
    }
}
void ui_event_wifi__st_button_ha_data2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_screen_wifi, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 0, &ui_screen_wifi_screen_init);
    }
}
void ui_event_screen_setting(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_screen_ha_mix, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 0, &ui_screen_ha_mix_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_screen_ha_ctrl, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 0, &ui_screen_ha_ctrl_screen_init);
    }
}
void ui_event_wifi__st_button_ha_setting(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_screen_wifi, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 0, &ui_screen_wifi_screen_init);
    }
}
void ui_event_setting_wifi1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_screen_wifi, LV_SCR_LOAD_ANIM_OVER_BOTTOM, 200, 0, &ui_screen_wifi_screen_init);
    }
}
void ui_event_setting_display1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_screen_display, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 0, &ui_screen_display_screen_init);
    }
}
void ui_event_setting_display2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_screen_change(&ui_screen_broker, LV_SCR_LOAD_ANIM_MOVE_TOP, 200, 0, &ui_screen_broker_screen_init);
    }
}
void ui_event_screen_wifi(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        ui_event_wifi_config(e);
    }
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        ui_event_wifi_start(e);
    }
}
void ui_event_back_wifi(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_screen_setting, LV_SCR_LOAD_ANIM_OVER_TOP, 200, 0, &ui_screen_setting_screen_init);
    }
}
void ui_event_sleep_mode_time_cfg(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_display_keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_sleep_mode_cfg(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_display_keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_sleep_mode_time, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_sleep_mode_time, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_brighness_cfg(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        brighness_cfg_event_cb(e);
    }
}
void ui_event_display_keyboard(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_READY) {
        _ui_flag_modify(ui_display_keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if(event_code == LV_EVENT_CANCEL) {
        _ui_flag_modify(ui_display_keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if(event_code == LV_EVENT_DEFOCUSED) {
        _ui_flag_modify(ui_sleep_mode_time, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_back3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_screen_setting, LV_SCR_LOAD_ANIM_MOVE_TOP, 200, 0, &ui_screen_setting_screen_init);
        display_cfg_apply_event_cb(e);
    }
}
void ui_event_back_wifi1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        _ui_screen_change(&ui_screen_setting, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 200, 0, &ui_screen_setting_screen_init);
    }
}
void ui_event_wifi__st_button_ha_data3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_screen_wifi, LV_SCR_LOAD_ANIM_FADE_ON, 200, 0, &ui_screen_wifi_screen_init);
    }
}
void ui_event_textarea_ip_0(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Keyboard_ip, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_Keyboard_ip(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_DEFOCUSED) {
        _ui_flag_modify(ui_Keyboard_ip, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if(event_code == LV_EVENT_READY) {
        _ui_flag_modify(ui_Keyboard_ip, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_screen_ha_mix_screen_init();
    ui_screen_ha_data_screen_init();
    ui_screen_ha_ctrl_screen_init();
    ui_screen_setting_screen_init();
    ui_screen_wifi_screen_init();
    ui_screen_display_screen_init();
    ui_screen_broker_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_screen_ha_mix);
}
