
#include "platform_Types.h"

#define SYSCTL_RCGC2_R		(*(volatile unsigned long*)(0x400FE000+0x108))
#define GPIO_PORTF_DATA_R	(*(volatile unsigned long*)(0x40025000+0x3FC))
#define GPIO_PORTF_DIR_R	(*(volatile unsigned long*)(0x40025000+0x400))
#define GPIO_PORTF_DEN_R	(*(volatile unsigned long*)(0x40025000+0x51C))


int main(void)
{
	volatile unsigned long delay;
	SYSCTL_RCGC2_R = 0x00000020;
	for(delay = 0; delay < 200; delay++);
	GPIO_PORTF_DIR_R |= (1<<3);
	GPIO_PORTF_DEN_R |= (1<<3);
	while(1)
	{
		GPIO_PORTF_DATA_R |= (1<<3);
		for(delay = 0; delay < 2000000; delay++);
		GPIO_PORTF_DATA_R &= ~(1<<3);
		for(delay = 0; delay < 2000000; delay++);
	}
}
