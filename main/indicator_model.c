#include "app/indicator_wifi.h"
#include "indicator_enabler.h"

int indicator_model_init(void) {
#ifdef INDICATOR_STORAGE_NVS_H
	indicator_nvs_init();
#else
	#error "Please inplement storage model"
#endif

#ifdef INDICATOR_BTN_H
	indicator_btn_init();
#endif

#ifdef INDICATOR_DISPLAY_H
	indicator_display_init(); // lcd bl on
#endif

#ifdef ESP32_RP2040_H
	esp32_rp2040_init();
	#ifdef SENSOR_H
	indicator_sensor_init();
	#endif
#endif

#ifdef INDICATOR_CMD_H
	indicator_cmd_init();
#endif

#ifdef INDICATOR_WIFI_H
	indicator_wifi_model_init();
	#ifdef INDICATOR_MQTT_H
	indicator_mqtt_init();
		#ifdef INDICATOR_HA_H
	indicator_ha_model_init();
		#endif
	#endif

#endif

#ifdef INDICATOR_LORAWAN_H
	indicator_lorawan_init();
	#ifdef INDICATOR_CMD_H
	indicator_cmd_init();
	#endif
#endif

#ifdef INDICATOR_TERMINAL_H
	indicator_terminal_init();
#endif
}