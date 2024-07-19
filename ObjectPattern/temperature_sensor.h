//
// Created by danan on 7/19/2024.
//

#ifndef OBJECTPATTERN_TEMPERATURE_SENSOR_H
#define OBJECTPATTERN_TEMPERATURE_SENSOR_H

#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

struct temperature_sensor {
    char *type;
    uint32_t variable;
    uint32_t flags;

    void (*get_version)(struct temperature_sensor *self, char *version);
    void (*get_temperature)(struct temperature_sensor *self, uint32_t *temp);
};

int temperature_sensor_init(struct temperature_sensor *self);
int temperature_sensor_deinit(struct temperature_sensor *self);

#endif //OBJECTPATTERN_TEMPERATURE_SENSOR_H
