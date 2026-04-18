#include "MPU9250.h"

uint8_t MPU9250_init()
{
    uint8_t whoami_check;
    if (HAL_I2C_Master_Receive(&hi2c3, uint16_t DevAddress, whoami_check, 1, 1) != HAL_OK) return 0x1;
    if (whoami_check != WHOAMI) return 0x1;
    return 0x0;
}

void MPU9250_getGyroscope(uint16_t* buffer)
{
    //TODO
}

void MPU9250_getAccelerometer(uint16_t* buffer)
{
    //TODO
}
void MPU9250_getMagnetometer(uint16_t* buffer)
{
    //TODO
}