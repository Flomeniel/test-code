#include <stm32f4xx_gpio.h>
#include <stm32f4xx_rcc.h>
#include <stm32f4xx_tim.h>

TIM_TimeBaseInitTypeDef TIM_Initstructure;
TIM_OCInitTypeDef TIM_OCInitstructure;
GPIO_InitTypeDef GPIO_Initstructure;


int t = SystemCoreClock;

void init(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM1, ENABLE);

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD, ENABLE);


	GPIO_Initstructure.GPIO_Mode	=	 GPIO_Mode_OUT;
	GPIO_Initstructure.GPIO_OType	=	 GPIO_OType_PP;
	GPIO_Initstructure.GPIO_Pin		=	 GPIO_Pin_12;
	GPIO_Initstructure.GPIO_PuPd 	=	 GPIO_PuPd_NOPULL;
	GPIO_Initstructure.GPIO_Speed 	=	 GPIO_Speed_2MHz;

	TIM_Initstructure.TIM_ClockDivision	= 	0;
	TIM_Initstructure.TIM_CounterMode	= 	TIM_CounterMode_Up;
	TIM_Initstructure.TIM_Period		=
}


int main(void)
{

    while(1)
    {
    }
}
