cmake_minimum_required(VERSION 3.22)
project(ObjectPattern C)

set(CMAKE_C_STANDARD 11)

add_executable(ObjectPattern
        main.c
        temperature_sensor.c
)

target_include_directories(ObjectPattern PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})