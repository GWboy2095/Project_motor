#include <stdint.h>


uint32_t time_delay; // ��ʱʱ�䣬ע�ⶨ��Ϊȫ�ֱ���
//��ʱn_ms
void delay_ms(volatile unsigned long nms)
{
    //SYSTICK��Ƶ--1ms��ϵͳʱ���ж�
    if (SysTick_Config(SystemFrequency/1000))
    {
   
        while (1);
    }
    time_delay=nms;//��ȡ��ʱʱ��
    while(time_delay);
    SysTick->CTRL=0x00; //�رռ�����
    SysTick->VAL =0X00; //��ռ�����
}
//��ʱnus
void delay_us(volatile unsigned long nus)
{
 //SYSTICK��Ƶ--1us��ϵͳʱ���ж�
    if (SysTick_Config(SystemFrequency/1000000))
    {
   
        while (1);
    }
    time_delay=nus;//��ȡ��ʱʱ��
    while(time_delay);
    SysTick->CTRL=0x00; //�رռ�����
    SysTick->VAL =0X00; //��ռ�����
}



