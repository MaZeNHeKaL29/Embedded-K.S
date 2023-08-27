/* startup.c
By : Mazen Hekal

*/

#include <stdint.h>

extern int main(void);
extern unsigned int _E_text;
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_bss;
extern unsigned int _E_bss;

void Reset_Handler();
void Default_Handler()
{
	Reset_Handler();
}
void NMI_Handler() __attribute__((weak,alias("Default_Handler")));
void Hard_Fault_Handler() __attribute__((weak,alias("Default_Handler")));
void MM_Fault_Handler() __attribute__((weak,alias("Default_Handler")));
void Bus_Fault() __attribute__((weak,alias("Default_Handler")));
void Usage_Fault_Handler() __attribute__((weak,alias("Default_Handler")));

static unsigned long _stack_top[256];



void (* const g_p_fn_vectors[])() __attribute__((section(".vectors"))) = {
	(void(*)())	((unsigned long)_stack_top + sizeof(_stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&Hard_Fault_Handler,
	&MM_Fault_Handler,
	&Bus_Fault,
	&Usage_Fault_Handler
};

void Reset_Handler()
{
	int i;
	//copy data from ROM to RAM
	unsigned int DATA_SIZE = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA;
	unsigned char* P_src = (unsigned char*)&_E_text;
	unsigned char* P_dst = (unsigned char*)&_S_DATA;
	for(i = 0; i < DATA_SIZE; i++)
	{
		*((unsigned char*)P_dst++) = *((unsigned char*)P_src++);
	}
	//init the bss with zero
	unsigned int bss_SIZE = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	P_dst = (unsigned char*)&_S_bss;
	for(i = 0; i < bss_SIZE; i++)
	{
		*((unsigned char*)P_dst++) = (unsigned char)0;
	}
	//jump to main
	main();
}
