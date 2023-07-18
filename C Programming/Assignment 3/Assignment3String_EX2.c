/*
 ============================================================================
 Name        : Assignment3String_EX2.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(void) {
	char str[MAX];
	int len = 0;
	int i = 0;
	printf("Enter String : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	while(str[i] != 0)
	{
		len++;
		i++;
	}
	printf("Length of String : %d",len);
}
