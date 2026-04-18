#ifndef MPU9250_H
#define MPU9250_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "i2c.h"
#include "stm32f4xx_hal_i2c.h"

//Accelerometer mode
#define ACC_SCALE_2G        0b00
#define ACC_SCALE_4G        0b01
#define ACC_SCALE_8G        0b10
#define ACC_SCALE_16G       0b11

//Gyroscope mode
#define GYRO_SCALE_250      0b00
#define GYRO_SCALE_500      0b01
#define GYRO_SCALE_1000     0b10
#define GYRO_SCALE_2000     0b11

//I2C address
#define MPU9250_ADDRESS     0x68
#define MAG_ADDRESS         0x0C

//Others
#define WHOAMI 0x71

void MPU9250_init();
void MPU9250_getGyroscope(uint16_t* buffer);
void MPU9250_getAccelerometer(uint16_t* buffer);
void MPU9250_getMagnetometer(uint16_t* buffer);

#ifdef __cplusplus
}
#endif

#endif //MPU9250_H