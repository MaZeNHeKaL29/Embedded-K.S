/*
 ============================================================================
 Name        : Assignment3String_EX3.c
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
	char str_rev[MAX];
	int len = 0;
	int i = 0;
	int j = 0;
	printf("Enter String : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	while(str[i] != 0)
	{
		len++;
		i++;
	}
	for(i = len - 1, j = 0; i>= 0; i--,j++)
	{
		str_rev[j] = str[i];
	}
	printf("Reverse String is : %s", str_rev);
}
