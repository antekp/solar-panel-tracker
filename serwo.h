#ifndef INC_SERVO_H_
#define INC_SERVO_H_
#include <stdint.h>

/* konfiguracja timera do generowania PWM */
#define TIM_NO htim16
#define TIM_CH_NO TIM_CHANNEL_1

/* zakresy katowe pracy serwomechanizmu */
#define ANGLE_MIN 0
#define ANGLE_MAX 900
/* zakres PWM */
#define PWM_MIN 1100
#define PWM_MAX 2050

#define STEP ((1000 * (PWM_MAX - PWM_MIN)) / (ANGLE_MAX - ANGLE_MIN))

void set_ang(uint16_t ang, uint8_t mode);

#endif
