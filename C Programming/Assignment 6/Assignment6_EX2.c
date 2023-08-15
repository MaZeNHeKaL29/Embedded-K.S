#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch = 'A';
	char* p = &ch;
	while(*p <= 'Z')
	{
		printf("%c  ", *p);
		(*p)++;
	}
}
