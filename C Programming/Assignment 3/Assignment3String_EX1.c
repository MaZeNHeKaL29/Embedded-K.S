/*
 ============================================================================
 Name        : Assignment3String_EX1.c
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
	char c;
	int i;
	int freq = 0;
	printf("Enter String : ");
	fflush(stdout);
	gets(str);
	fflush(stdin);
	printf("Enter a character to find frequency : ");
	fflush(stdout);
	scanf("%c", &c);
	for(i = 0; i < MAX; i++)
	{
		if(str[i] == c)
		{
			freq++;
		}
	}
	printf("Frequency of %c : %d", c, freq);
}
