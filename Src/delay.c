#include <stdint.h>


uint32_t time_delay; // 延时时间，注意定义为全局变量
//延时n_ms
void delay_ms(volatile unsigned long nms)
{
    //SYSTICK分频--1ms的系统时钟中断
    if (SysTick_Config(SystemFrequency/1000))
    {
   
        while (1);
    }
    time_delay=nms;//读取定时时间
    while(time_delay);
    SysTick->CTRL=0x00; //关闭计数器
    SysTick->VAL =0X00; //清空计数器
}
//延时nus
void delay_us(volatile unsigned long nus)
{
 //SYSTICK分频--1us的系统时钟中断
    if (SysTick_Config(SystemFrequency/1000000))
    {
   
        while (1);
    }
    time_delay=nus;//读取定时时间
    while(time_delay);
    SysTick->CTRL=0x00; //关闭计数器
    SysTick->VAL =0X00; //清空计数器
}



