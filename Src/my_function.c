#include "My_define.h"

uint8_t show_device_time;//显示设备的时间
uint8_t CUR_ACTION;//当前功能定义
uint8_t set_IO_out;//设置输出端子

void Digital_Tube_show_num(uint8_t num)
{
	switch(num)
		{
		case 0:
			DIG_A_H;DIG_B_H;DIG_C_H;DIG_D_H;DIG_E_H;DIG_F_H;
			DIG_G_L;DIG_DP_L;
			break;
		case 1:
			DIG_B_H;DIG_C_H;
			DIG_A_L;DIG_D_L;DIG_E_L;DIG_F_L;DIG_G_L;DIG_DP_L;
			break;
		case 2:
			DIG_A_H;DIG_B_H;DIG_D_H;DIG_E_H;DIG_G_H;
			DIG_C_L;DIG_F_L;DIG_DP_L;
			break;
		case 3:
			DIG_A_H;DIG_B_H;DIG_C_H;DIG_D_H;DIG_G_H;
			DIG_E_L;DIG_F_L;DIG_DP_L;
			break;
		case 4:
			DIG_B_H;DIG_C_H;DIG_F_H;DIG_G_H;
			DIG_A_L;DIG_D_L;DIG_E_L;DIG_DP_L;
			break;
		case 5:
			DIG_A_H;DIG_C_H;DIG_D_H;DIG_F_H;DIG_G_H;
			DIG_B_L;DIG_E_L;DIG_DP_L;
			break;
		case 6:
			DIG_A_H;DIG_C_H;DIG_D_H;DIG_E_H;DIG_F_H;DIG_G_H;
			DIG_B_L;DIG_DP_L;
			break;
		case 7:
			DIG_A_H;DIG_B_H;DIG_C_H;
			DIG_D_L;DIG_E_L;DIG_F_L;DIG_G_L;DIG_DP_L;
			break;
		case 8:
			DIG_A_H;DIG_B_H;DIG_C_H;DIG_D_H;DIG_E_H;DIG_F_H;DIG_G_H;
			DIG_DP_L;
			break;
		case 9:
			DIG_A_H;DIG_B_H;DIG_C_H;DIG_D_H;DIG_F_H;DIG_G_H;
			DIG_E_L;DIG_DP_L;
			break;
		default:
      DIG_A_L;DIG_B_L;DIG_C_L;DIG_D_L;DIG_E_L;DIG_F_L;DIG_G_L;DIG_DP_L;
			break;
		}
}
void delay_us(uint32_t us)
{
    uint32_t delay = (HAL_RCC_GetHCLKFreq() / 48000000 * us);
    while (delay--)
	{
		;
	}
}

void Digital_Tube_Show(void)
{
    switch (CUR_ACTION)
    {
    case ACTION_SHOW_TIME:
     switch (show_device_time)
        {
            case SHOW_FAN_TIME:
                DIG1_H;
                Digital_Tube_show_num(POWER_ON_FAN_TIME/100);
                delay_us(50);
                DIG1_L;
                DIG2_H;
                Digital_Tube_show_num((POWER_ON_FAN_TIME%100)/10);
                delay_us(50);
                DIG2_L;
                DIG3_H;
                Digital_Tube_show_num(POWER_ON_FAN_TIME%10);
            break;
            case SHOW_MOTOR_1_TIME:
                DIG1_H;
                Digital_Tube_show_num(POWER_ON_MOTOR1_TIME/100);
                delay_us(50);
                DIG1_L;
                DIG2_H;
                Digital_Tube_show_num((POWER_ON_MOTOR1_TIME%100)/10);
                delay_us(50);
                DIG2_L;
                DIG3_H;
                Digital_Tube_show_num(POWER_ON_MOTOR1_TIME%10);           
            break;
            case SHOW_MOTOR_2_TIME:
                DIG1_H;
                Digital_Tube_show_num(POWER_ON_MOTOR2_TIME/100);
                delay_us(50);
                DIG1_L;
                DIG2_H;
                Digital_Tube_show_num((POWER_ON_MOTOR2_TIME%100)/10);
                delay_us(50);
                DIG2_L;
                DIG3_H;
                Digital_Tube_show_num(POWER_ON_MOTOR2_TIME%10);     
            break;  

            default:
                break;          
        }
        break;
    case ACTION_SET_TIME:
     switch (show_device_time)
        {
            case SET_FAN_TIME:
                DIG1_H;
                Digital_Tube_show_num(POWER_ON_SET_FAN_TIME/100);
                delay_us(50);
                DIG1_L;
                DIG2_H;
                Digital_Tube_show_num((POWER_ON_SET_FAN_TIME%100)/10);
                delay_us(50);
                DIG2_L;
                DIG3_H;
                Digital_Tube_show_num(POWER_ON_SET_FAN_TIME%10);
            break;
            case SET_MOTOR_1_TIME:
                DIG1_H;
                Digital_Tube_show_num(POWER_ON_SET_MOTOR1_TIME/100);
                delay_us(50);
                DIG1_L;
                DIG2_H;
                Digital_Tube_show_num((POWER_ON_SET_MOTOR1_TIME%100)/10);
                delay_us(50);
                DIG2_L;
                DIG3_H;
                Digital_Tube_show_num(POWER_ON_SET_MOTOR1_TIME%10);           
            break;
            case SET_MOTOR_2_TIME:
                DIG1_H;
                Digital_Tube_show_num(POWER_ON_SET_MOTOR2_TIME/100);
                delay_us(50);
                DIG1_L;
                DIG2_H;
                Digital_Tube_show_num((POWER_ON_SET_MOTOR2_TIME%100)/10);
                delay_us(50);
                DIG2_L;
                DIG3_H;
                Digital_Tube_show_num(POWER_ON_SET_MOTOR2_TIME%10);     
            break;  
            default:
                break;          
        }       
        break;
    case ACTION_SET_OUT:
        if(set_IO_out&0x01)
        {
            DIG1_H;
            Digital_Tube_show_num(1);
            delay_us(50);
            DIG1_L;              
        }  
        else
        {
            DIG1_H;
            Digital_Tube_show_num(0);
            delay_us(50);
            DIG1_L;                  
        }       

        if(set_IO_out&0x02)
        {
            DIG1_H;
            Digital_Tube_show_num(2);
            delay_us(50);
            DIG1_L;              
        }  
        else
        {
            DIG2_H;
            Digital_Tube_show_num(0);
            delay_us(50);
            DIG2_L;                  
        }

        if(set_IO_out&0x04)
        {
            DIG3_H;
            Digital_Tube_show_num(1);
            delay_us(50);
            DIG3_L;              
        }  
        else
        {
            DIG3_H;
            Digital_Tube_show_num(0);
            delay_us(50);
            DIG3_L;                  
        }
        break;
    default:
        break;
    }

}
void key_logic_action(void)
{
    if(LOGIC_POWER_ON)
    {
        FAN_H;
        if(LOGIC_FUNCTION)
        {
            if(CUR_ACTION == ACTION_SHOW_TIME)     
                CUR_ACTION = ACTION_SET_OUT;
            else if(CUR_ACTION == ACTION_SET_OUT)
                CUR_ACTION = ACTION_SHOW_TIME; 

            LOGIC_FUNCTION = false;
        }
        if(LOGIC_TIMING)
        {
            if(CUR_ACTION == ACTION_SHOW_TIME)     
                CUR_ACTION = ACTION_SET_TIME;
            else if(CUR_ACTION == ACTION_SET_TIME)  
                CUR_ACTION = ACTION_SHOW_TIME;

            LOGIC_TIMING = false;    
        }
        if(LOGIC_AUTO) //定时时间初始化
        {
            if(CUR_ACTION != ACTION_SHOW_TIME)
                CUR_ACTION = ACTION_SHOW_TIME;

            POWER_ON_MOTOR1_TIME = 120;
            POWER_ON_FAN_TIME = 120;
            POWER_ON_MOTOR2_TIME = 120;
            
            LOGIC_AUTO = false;
        }
        if(LOGIC_PLUS)
        {
            LOGIC_PLUS = false;
            if(CUR_ACTION == ACTION_SET_TIME)
            {
                if(POWER_ON_SET_MOTOR1_TIME > 900)
                {}
                else
                    POWER_ON_SET_MOTOR1_TIME = POWER_ON_SET_MOTOR1_TIME + 10;

            }
            if(CUR_ACTION == ACTION_SET_OUT)
            {
                if(set_IO_out ==3)
                    set_IO_out = 0;
                else
                    set_IO_out = set_IO_out+1;
                
            }
        }
        if(LOGIC_LESS)
        {
            LOGIC_LESS = false;
            if(CUR_ACTION == ACTION_SET_TIME)
            {
                POWER_ON_SET_MOTOR1_TIME = POWER_ON_SET_MOTOR1_TIME - 10;
            }
        }
        Digital_Tube_Show();
        if(set_IO_out&0x01){Motor_1_H;}
        else{ Motor_1_L;} 
        if(set_IO_out&0x02){Motor_2_H;}
        else{ Motor_2_L;}
        
    }
    else
    {
        FAN_L;Motor_1_L;Motor_2_L;
        DIG_A_L;DIG_B_L;DIG_C_L;DIG_D_L;DIG_E_L;DIG_F_L;DIG_G_L;DIG_DP_L;
        DIG1_L;DIG2_L;DIG3_L;

    }
    
}


