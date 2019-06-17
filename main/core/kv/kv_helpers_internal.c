/*
 * Copyright (C) 2019  SuperGreenLab <towelie@supergreenlab.com>
 * Author: Constantin Clauzel <constantin.clauzel@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <string.h>

#include "kv.h"
#include "keys.h"
#include "kv_ble.h"
#include "../ble/ble.h"

#include "../include_modules.h"

/*
 * [GENERATED]
 */

void internal_set_wifi_status(int value) {


  set_attr_value_and_notify(IDX_CHAR_VAL_WIFI_STATUS, (uint8_t *)&value, sizeof(int));

  // TODO: httpd notify
}
void internal_set_wifi_ssid(const char *value) {
  set_wifi_ssid(value);

  value = on_set_wifi_ssid(value);

  set_wifi_ssid(value);

  set_attr_value(IDX_CHAR_VAL_WIFI_SSID, (uint8_t *)value, strlen(value));
}
void internal_set_wifi_password(const char *value) {
  set_wifi_password(value);

  value = on_set_wifi_password(value);

  set_wifi_password(value);

}
void internal_set_wifi_ap_ssid(const char *value) {
  set_wifi_ap_ssid(value);


}
void internal_set_wifi_ap_password(const char *value) {
  set_wifi_ap_password(value);


}
void internal_set_mdns_domain(const char *value) {
  set_mdns_domain(value);


}
void internal_set_wifi_ip(const char *value) {
  set_wifi_ip(value);


  set_attr_value_and_notify(IDX_CHAR_VAL_WIFI_IP, (uint8_t *)value, strlen(value));
}
void internal_set_time(int value) {
  set_time(value);

  value = on_set_time(value);

  set_time(value);

  set_attr_value_and_notify(IDX_CHAR_VAL_TIME, (uint8_t *)&value, sizeof(int));

  // TODO: httpd notify
}
void internal_set_n_restarts(int value) {
  set_n_restarts(value);



  // TODO: httpd notify
}
void internal_set_ota_timestamp(int value) {
  set_ota_timestamp(value);



  // TODO: httpd notify
}
void internal_set_ota_server_ip(const char *value) {
  set_ota_server_ip(value);


}
void internal_set_ota_server_hostname(const char *value) {
  set_ota_server_hostname(value);


}
void internal_set_ota_server_port(const char *value) {
  set_ota_server_port(value);


}
void internal_set_ota_basedir(const char *value) {
  set_ota_basedir(value);


}
void internal_set_ota_status(int value) {



  // TODO: httpd notify
}
void internal_set_broker_url(const char *value) {
  set_broker_url(value);


}
void internal_set_broker_channel(const char *value) {
  set_broker_channel(value);


}
void internal_set_broker_clientid(const char *value) {
  set_broker_clientid(value);


}
void internal_set_i2c_0_sda(int value) {
  set_i2c_0_sda(value);



  // TODO: httpd notify
}
void internal_set_i2c_0_scl(int value) {
  set_i2c_0_scl(value);



  // TODO: httpd notify
}
void internal_set_i2c_0_enabled(int value) {
  set_i2c_0_enabled(value);



  // TODO: httpd notify
}
void internal_set_reboot(int value) {

  value = on_set_reboot(value);



  // TODO: httpd notify
}
void internal_set_state(int value) {
  set_state(value);


  set_attr_value_and_notify(IDX_CHAR_VAL_STATE, (uint8_t *)&value, sizeof(int));

  // TODO: httpd notify
}
void internal_set_device_name(const char *value) {
  set_device_name(value);


  set_attr_value(IDX_CHAR_VAL_DEVICE_NAME, (uint8_t *)value, strlen(value));
}
void internal_set_status_led_red_gpio(int value) {
  set_status_led_red_gpio(value);



  // TODO: httpd notify
}
void internal_set_status_led_green_gpio(int value) {
  set_status_led_green_gpio(value);



  // TODO: httpd notify
}
void internal_set_status_led_dim(int value) {
  set_status_led_dim(value);



  // TODO: httpd notify
}
void internal_set_box_0_enabled(int value) {
  set_box_0_enabled(value);



  // TODO: httpd notify
}
void internal_set_box_0_timer_type(int value) {

  value = on_set_box_0_timer_type(value);



  // TODO: httpd notify
}
void internal_set_box_0_timer_output(int value) {
  set_box_0_timer_output(value);



  // TODO: httpd notify
}
void internal_set_box_0_started_at(int value) {
  set_box_0_started_at(value);


  set_attr_value_and_notify(IDX_CHAR_VAL_BOX_0_STARTED_AT, (uint8_t *)&value, sizeof(int));

  // TODO: httpd notify
}
void internal_set_box_0_on_hour(int value) {
  set_box_0_on_hour(value);



  // TODO: httpd notify
}
void internal_set_box_0_on_min(int value) {
  set_box_0_on_min(value);



  // TODO: httpd notify
}
void internal_set_box_0_off_hour(int value) {
  set_box_0_off_hour(value);



  // TODO: httpd notify
}
void internal_set_box_0_off_min(int value) {
  set_box_0_off_min(value);



  // TODO: httpd notify
}
void internal_set_box_0_stretch(int value) {
  set_box_0_stretch(value);

  value = on_set_box_0_stretch(value);

  set_box_0_stretch(value);

  set_attr_value_and_notify(IDX_CHAR_VAL_BOX_0_STRETCH, (uint8_t *)&value, sizeof(int));

  // TODO: httpd notify
}
void internal_set_box_0_led_dim(int value) {
  set_box_0_led_dim(value);

  value = on_set_box_0_led_dim(value);

  set_box_0_led_dim(value);

  set_attr_value_and_notify(IDX_CHAR_VAL_BOX_0_LED_DIM, (uint8_t *)&value, sizeof(int));

  // TODO: httpd notify
}
void internal_set_box_0_sht21_temp_c(int value) {
  set_box_0_sht21_temp_c(value);



  // TODO: httpd notify
}
void internal_set_box_0_sht21_temp_f(int value) {
  set_box_0_sht21_temp_f(value);



  // TODO: httpd notify
}
void internal_set_box_0_sht21_humi(int value) {
  set_box_0_sht21_humi(value);



  // TODO: httpd notify
}
void internal_set_box_0_led_info(const char *value) {


  set_attr_value_and_notify(IDX_CHAR_VAL_BOX_0_LED_INFO, (uint8_t *)value, strlen(value));
}
void internal_set_led_0_duty(int value) {
  set_led_0_duty(value);

  value = on_set_led_0_duty(value);

  set_led_0_duty(value);


  // TODO: httpd notify
}
void internal_set_led_0_gpio(int value) {
  set_led_0_gpio(value);



  // TODO: httpd notify
}
void internal_set_led_0_x(int value) {
  set_led_0_x(value);



  // TODO: httpd notify
}
void internal_set_led_0_y(int value) {
  set_led_0_y(value);



  // TODO: httpd notify
}
void internal_set_led_0_z(int value) {
  set_led_0_z(value);



  // TODO: httpd notify
}
void internal_set_led_0_enabled(int value) {
  set_led_0_enabled(value);



  // TODO: httpd notify
}
void internal_set_led_0_box(int value) {
  set_led_0_box(value);



  // TODO: httpd notify
}
void internal_set_led_0_dim(int value) {
  set_led_0_dim(value);

  value = on_set_led_0_dim(value);

  set_led_0_dim(value);


  // TODO: httpd notify
}
void internal_set_led_0_fade(int value) {
  set_led_0_fade(value);



  // TODO: httpd notify
}

/*
 * [/GENERATED]
 */
