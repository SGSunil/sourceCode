#ifndef __GPIO_BITS_
#define __GPIO_BITS_

char gpio_port_0_literals[7][50] = { "Kill Switch Fitted", "Kill Switch Sense", "Kill Switch State", "Kill Switch Parity", "Seat Occupied Switch", "Seat Switch Parity", "Seat Fitted Switch"};

int gpio_port_0_literals_index[7] = {4, 5, 6, 7, 18, 20, 23};

char gpio_port_1_literals[4][50] = { "Fault Indicator", "Maintenance Action Indicator", "Left Motor Drive Enabled", "Right Motor Drive Enabled"};

int gpio_port_1_literals_index[4] = {9, 10, 24, 25};

enum ADC_CHANNEL
{
    ADC_0_SEAT_HEIGHT,
    ADC_1_JOYSTICK_X,
    ADC_2_JOYSTICK_Y,
    ADC_3_LEFT_MOTOR_SPEED,
    ADC_4_RIGHT_MOTOR_SPEED,
    ADC_5_TEST_AROUND,
    ADC_6_SPARE,
    ADC_7_SPARE

};

enum PORT_0_BITS

{
GPIO_PORT_0_SPARE_0,// = 0,
GPIO_PORT_0_SPARE_1,// = 1,
GPIO_PORT_0_SPARE_2,// = 2,
GPIO_PORT_0_SPARE_3,// = 3,
GPIO_PORT_0_KILL_SWITCH_FITTED,// = 4,
GPIO_PORT_0_KILL_SWITCH_SENSE,// = 5,
GPIO_PORT_0_KILL_SWITCH_STATE,// = 6,
GPIO_PORT_0_KILL_SWITCH_PARITY,// = 7,
GPIO_PORT_0_SPARE_8,// = 8,
GPIO_PORT_0_SPARE_9,// = 9,
GPIO_PORT_0_SPARE_10,// = 10,
GPIO_PORT_0_SPARE_11,// = 11,
GPIO_PORT_0_SPARE_12,// = 12,
GPIO_PORT_0_SPARE_13,// = 13,
GPIO_PORT_0_SPARE_14,// = 14,
GPIO_PORT_0_SPARE_15,// = 15,
GPIO_PORT_0_SPARE_16,// = 16,
GPIO_PORT_0_SPARE_17,// = 17,
GPIO_PORT_0_SEAT_OCCUPIED_SWITCH,// = 18,
GPIO_PORT_0_SPARE_19,// = 19,
GPIO_PORT_0_SEAT_SWITCH_PARITY,// = 20,
GPIO_PORT_0_SPARE_21,// = 21,
GPIO_PORT_0_SPARE_22,// = 22,
GPIO_PORT_0_SEAT_FITTED_SWITCH,// = 23,
GPIO_PORT_0_SPARE_24,// = 24,
GPIO_PORT_0_SPARE_25,// = 25,
GPIO_PORT_0_SPARE_26,// = 26,
GPIO_PORT_0_SPARE_27,// = 27,
GPIO_PORT_0_SPARE_28,// = 28,
GPIO_PORT_0_SPARE_29,// = 29,
GPIO_PORT_0_SPARE_30,// = 30,
GPIO_PORT_0_SPARE_31,// = 31
};



enum PORT_1_BITS
{
GPIO_PORT_1_SPARE_0,// = 0,
GPIO_PORT_1_SPARE_1,// = 1,
GPIO_PORT_1_SPARE_2,// = 2,
GPIO_PORT_1_SPARE_3,// = 3,
GPIO_PORT_1_SPARE_4,// = 4,
GPIO_PORT_1_SPARE_5,// = 5,
GPIO_PORT_1_SPARE_6,// = 6,
GPIO_PORT_1_SPARE_7,// = 7,
GPIO_PORT_1_SPARE_8,// = 8,
GPIO_PORT_1_FAULT_INDICATOR,// = 9,
GPIO_PORT_1_MAINTENANCE_ACTION_INDICATOR,// = 10,
GPIO_PORT_1_SPARE_11,// = 11,
GPIO_PORT_1_SPARE_12,// = 12,
GPIO_PORT_1_SPARE_13,// = 13,
GPIO_PORT_1_SPARE_14,// = 14,
GPIO_PORT_1_SPARE_15,// = 15,
GPIO_PORT_1_SPARE_16,// = 16,
GPIO_PORT_1_SPARE_17,// = 17,
GPIO_PORT_1_SPARE_18,// = 18,
GPIO_PORT_1_SPARE_19,// = 19,
GPIO_PORT_1_SPARE_20,// = 20,
GPIO_PORT_1_SPARE_21,// = 21,
GPIO_PORT_1_SPARE_22,// = 22,
GPIO_PORT_1_SPARE_23,// = 23,
GPIO_PORT_1_LEFT_MOTOR_DRIVE_ENABLE,// = 24,
GPIO_PORT_1_RIGHT_MOTOR_DRIVE_ENABLE,// = 25,
GPIO_PORT_1_SPARE_26,// = 26,
GPIO_PORT_1_SPARE_27,// = 27,
GPIO_PORT_1_SPARE_28,// = 28,
GPIO_PORT_1_SPARE_29,// = 29,
GPIO_PORT_1_SPARE_30,// = 30,
GPIO_PORT_1_SPARE_31,// = 31
};

#endif
