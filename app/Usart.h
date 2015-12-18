#ifndef	__Usart_H__
#define	__Usart_H__


#include <stdint.h>
#include "Rcc.h"
#include "Dma.h"

typedef struct USART_Type USART_t;

struct USART_Type{
	uint32_t SR;
	uint32_t DR;
	uint32_t BRR;
	uint32_t CR1;
	uint32_t CR2;
	uint32_t CR3;
	uint32_t GTPR;
};


#define USART1	((USART_t*)0x40011000)

#define USART_EN	(1 << 13)
#define PARITY_EN	(1 << 10)
#define TX_EN		(1 << 3)
#define OVER8_EN	(1 << 15)

void configUsart1();
void sendData(uint8_t dataSend);

#endif	//__Usart_H__
