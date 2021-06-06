/*
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

#include <stdlib.h>
#include "scd30.h"
#include "driver/i2c.h"

#include "driver.h"
#include "../core/i2c/i2c.h"
#include "../core/kv/kv.h"
#include "../core/log/log.h"

#define SCD30_ADDR 0x42

static scd30_handle scd30_handlers[N_SCD30] = {0};

void init_scd30(int i2cId) {
  ESP_LOGI(SGO_LOG_EVENT, "@SCD30 Initializing scd30 i2c device");
	for (int i = 0; i < N_SCD30; ++i) {
		scd30_handlers[i].port = get_i2c_port(i);
	}
}

void loop_scd30(int i2cId) {
	ESP_LOGI(SGO_LOG_NOSEND, "@SCD30 %d", i2cId);
  start_i2c(i2cId);

	scd30_handle *s = &(scd30_handlers[i2cId]);
	if (!s->init) {
		if (begin(s)) {
			s->init = true;
		} else {
			ESP_LOGI(SGO_LOG_EVENT, "@SCD30 begin failed");
		}
	}
	if (s->init) {
		if (!readMeasurement(s)) {
			ESP_LOGI(SGO_LOG_EVENT, "@SCD30 readMeasurement failed");
		} else {
			ESP_LOGI(SGO_LOG_EVENT, "@SCD30 i2cId: %d - co2: %f - temp: %f - humi: %f", i2cId, s->co2, s->temperature, s->humidity);
		}
	}

  stop_i2c(i2cId);
}

