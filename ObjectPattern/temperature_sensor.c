//
// Created by danan on 7/19/2024.
//

#include "temperature_sensor.h"

void get_version(struct temperature_sensor *self, char *version) {
    memcpy(version,self->type,8);
}

void get_temperature(struct temperature_sensor *self, uint32_t *temp) {
    srand(time(NULL));   // Initialization, should only be called once.
    *temp = rand();      // Returns a pseudo-random integer between 0 and RAND_MAX
}

int temperature_sensor_init(struct temperature_sensor *self) {
    memset(self,0,sizeof(*self));

    self->type = "Temp v1a";
    self->flags = 0xFF;
    self->variable = 0xFF;
    self->get_version = get_version;
    self->get_temperature = get_temperature;
    return 0;
}

int temperature_sensor_deinit(struct temperature_sensor *self) {
    // cleanup
}

