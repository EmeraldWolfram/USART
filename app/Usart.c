#include "Usart.h"

void configUsart1(){
	usart1UnresetEnableClock();

	USART1->CR1	|= USART_EN;
	USART1->CR1 |= TX_EN;
	USART1->CR1 &= ~OVER8_EN;

	USART1->BRR |= 0x493 << 4;
	USART1->BRR |= 7;
}


void sendData(uint8_t dataSend){
	USART1->DR = dataSend;
}
