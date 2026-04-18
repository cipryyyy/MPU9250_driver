#include "EKF.h"
#include <stdint.h>

typedef struct {
    uint8_t X_gyro_byas;
    uint8_t Y_gyro_byas;
    uint8_t Z_gyro_byas;
    uint8_t X_accl_byas;
    uint8_t Y_accl_byas;
    uint8_t Z_accl_byas;
} bias;

typedef struct {
    uint16_t w;
    uint16_t x;
    uint16_t y;
    uint16_t z;
} quaternions;

void EKF_init()
{

}

void EKF_update()
{

}

void EKF_update()
{

}