#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(void) {
	char str[MAX];
	printf("Enter String : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	char* p;
	p = &str[strlen(str) - 1];
	int i = strlen(str) - 1;
	while(i >= 0)
	{
		printf("%c",*p);
		p--;
		i--;
	}
}
