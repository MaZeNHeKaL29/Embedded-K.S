/*
 * app.c
 *
 *      Author: Mazen Hekal
 */

#include "platform_Types.h"
#include "uart.h"

#define MAX 100

uint8 string_buffer[MAX] = "Hello There Mazen";

uint8 string_buffer2[MAX];

uint8 const string_buffer3[MAX] = "What's Up";

void main()
{
	UART_Send_string(string_buffer);
}