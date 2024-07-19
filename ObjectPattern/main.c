#include <stdio.h>
#include "temperature_sensor.h"

struct application {
    struct temperature_sensor temp_sensor_1;
};

int application_init(struct application *self) {
    char version[8];
    uint32_t simulated_temp;

    temperature_sensor_init(&self->temp_sensor_1);
    self->temp_sensor_1.get_version(&self->temp_sensor_1, version);
    printf("Sensor: %s OK\r\n",version);
    self->temp_sensor_1.get_temperature(&self->temp_sensor_1,&simulated_temp);
    printf("Simulated T=%d\r\n",simulated_temp);
}

int main(void) {
    struct application app = {};
    application_init(&app);
    return 0;
}
