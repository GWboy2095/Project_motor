#include "main.h"
//#include "stm32f030x6.h"
#include <stdbool.h>
#include <stdint.h>
#define Motor_1_H													HAL_GPIO_WritePin(Motor_1_GPIO_Port,Motor_1_Pin,GPIO_PIN_SET)
#define Motor_1_L													HAL_GPIO_WritePin(Motor_1_GPIO_Port,Motor_1_Pin,GPIO_PIN_RESET)													

#define Motor_2_H													HAL_GPIO_WritePin(Motor_2_GPIO_Port,Motor_2_Pin,GPIO_PIN_SET)
#define Motor_2_L													HAL_GPIO_WritePin(Motor_2_GPIO_Port,Motor_2_Pin,GPIO_PIN_RESET)

#define FAN_H														HAL_GPIO_WritePin(FAN_GPIO_Port,FAN_Pin,GPIO_PIN_SET)
#define FAN_L													    HAL_GPIO_WritePin(FAN_GPIO_Port,FAN_Pin,GPIO_PIN_RESET)

#define	Buzzer_ON													HAL_GPIO_WritePin(Buzzer_GPIO_Port,Buzzer_Pin,GPIO_PIN_SET)
#define Buzzer_OFF												    HAL_GPIO_WritePin(Buzzer_GPIO_Port,Buzzer_Pin,GPIO_PIN_RESET)

#define DIG_A_H														HAL_GPIO_WritePin(DIG_A_GPIO_Port,DIG_A_Pin,GPIO_PIN_SET)
#define DIG_A_L														HAL_GPIO_WritePin(DIG_A_GPIO_Port,DIG_A_Pin,GPIO_PIN_RESET)

#define DIG_B_H														HAL_GPIO_WritePin(DIG_B_GPIO_Port,DIG_B_Pin,GPIO_PIN_SET)
#define DIG_B_L														HAL_GPIO_WritePin(DIG_B_GPIO_Port,DIG_B_Pin,GPIO_PIN_RESET)

#define DIG_C_H														HAL_GPIO_WritePin(DIG_C_GPIO_Port,DIG_C_Pin,GPIO_PIN_SET)
#define DIG_C_L														HAL_GPIO_WritePin(DIG_C_GPIO_Port,DIG_C_Pin,GPIO_PIN_RESET)

#define DIG_D_H														HAL_GPIO_WritePin(DIG_D_GPIO_Port,DIG_D_Pin,GPIO_PIN_SET)
#define DIG_D_L														HAL_GPIO_WritePin(DIG_D_GPIO_Port,DIG_D_Pin,GPIO_PIN_RESET)

#define DIG_E_H														HAL_GPIO_WritePin(DIG_E_GPIO_Port,DIG_E_Pin,GPIO_PIN_SET)
#define DIG_E_L														HAL_GPIO_WritePin(DIG_E_GPIO_Port,DIG_E_Pin,GPIO_PIN_RESET)

#define DIG_F_H														HAL_GPIO_WritePin(DIG_F_GPIO_Port,DIG_F_Pin,GPIO_PIN_SET)
#define DIG_F_L														HAL_GPIO_WritePin(DIG_F_GPIO_Port,DIG_F_Pin,GPIO_PIN_RESET)

#define DIG_G_H														HAL_GPIO_WritePin(DIG_G_GPIO_Port,DIG_G_Pin,GPIO_PIN_SET)
#define DIG_G_L														HAL_GPIO_WritePin(DIG_G_GPIO_Port,DIG_G_Pin,GPIO_PIN_RESET)

#define DIG_DP_H													HAL_GPIO_WritePin(DIG_DP_GPIO_Port,DIG_DP_Pin,GPIO_PIN_SET)
#define DIG_DP_L													HAL_GPIO_WritePin(DIG_DP_GPIO_Port,DIG_DP_Pin,GPIO_PIN_RESET)

#define DIG1_H														HAL_GPIO_WritePin(DIG1_GPIO_Port,DIG1_Pin,GPIO_PIN_SET)
#define DIG1_L														HAL_GPIO_WritePin(DIG1_GPIO_Port,DIG1_Pin,GPIO_PIN_RESET)

#define DIG2_H														HAL_GPIO_WritePin(DIG2_GPIO_Port,DIG2_Pin,GPIO_PIN_SET)
#define DIG2_L														HAL_GPIO_WritePin(DIG2_GPIO_Port,DIG2_Pin,GPIO_PIN_RESET)

#define DIG3_H														HAL_GPIO_WritePin(DIG3_GPIO_Port,DIG3_Pin,GPIO_PIN_SET)
#define DIG3_L														HAL_GPIO_WritePin(DIG3_GPIO_Port,DIG3_Pin,GPIO_PIN_RESET)




#define ACTION_SHOW_TIME                        0
#define ACTION_SET_TIME                         1
#define ACTION_SET_OUT                          2

#define SHOW_FAN_TIME                           0
#define SHOW_MOTOR_1_TIME                       1
#define SHOW_MOTOR_2_TIME                       2

#define SET_FAN_TIME                            0
#define SET_MOTOR_1_TIME                        1
#define SET_MOTOR_2_TIME                        2

extern bool LOGIC_POWER_ON;
extern bool LOGIC_FUNCTION;
extern bool LOGIC_TIMING ;
extern bool LOGIC_AUTO ;
extern bool LOGIC_PLUS ;
extern bool LOGIC_LESS ;
extern uint16_t POWER_ON_MOTOR1_TIME;
extern uint16_t POWER_ON_MOTOR2_TIME;
extern uint16_t POWER_ON_FAN_TIME;

extern uint16_t POWER_ON_SET_MOTOR1_TIME;
extern uint16_t POWER_ON_SET_MOTOR2_TIME;
extern uint16_t POWER_ON_SET_FAN_TIME;

extern uint8_t TIME_SET_1;   				//时间设置
extern uint8_t TIME_SET_2;
extern uint8_t TIME_SET_3;
extern uint8_t TIME_SHOW_1;					//数码管显示时间
extern uint8_t TIME_SHOW_2;
extern uint8_t TIME_SHOW_3;

void Digital_Tube_Show(void);




