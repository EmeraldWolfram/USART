#include "Rcc.h"

void gpioUnresetEnableClock(GPIO* port){
	int valToShift = ((int)port - (0x40020000))/(0x400);

	RCC_reg->RCC_AHB1RSTR	&= ~GPIOx_RESET(valToShift);
	RCC_reg->RCC_AHB1ENR	|= GPIOx_ENABLE_CLOCK(valToShift);
}

void dmaUnresetEnableClock(DMA_t* dMAx){
  int x = ((int)dMAx - 0x40026000)/(0x400);
  
  RCC_reg->RCC_AHB1ENR  |= DMAx_ENABLE_CLOCK(x);
  RCC_reg->RCC_AHB1RSTR &= ~DMAx_RESET(x);;
}


void usart1UnresetEnableClock(){
	RCC_reg->RCC_APB2RSTR	&= ~USART1_RESET;
	RCC_reg->RCC_APB2ENR	|= USART1_ENABLE_CLOCK;
}
