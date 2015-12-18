#include "stm32f429xx.h"
#include "Gpio.h"
#include "Dma.h"
#include "Usart.h"

int main(){
	configureAltFunc(AF_USART1_2_3, PIN_9, PORTA);
	configUsart1();
	while(1){
		sendData('A');
	}

	return 1;
}
