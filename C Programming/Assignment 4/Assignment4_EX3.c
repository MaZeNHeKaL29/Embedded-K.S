/*
 ============================================================================
 Name        : Assignment4_EX3.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stringLength(char str[]);

void reverseString(char str[], int n);

int main(void) {
	char str[MAX];
	int n;
	printf("Enter a sentence : ");
	fflush(stdout);
	gets(str);
	n = stringLength(str);
	reverseString(str, n);
}

int stringLength(char str[])
{
	int i = 0;
	for(i = 0; str[i] != '\0'; i++);
	return i;
}

void reverseString(char str[], int n)
{
	printf("%c", str[n - 1]);
	if(n == 1)
	{
		return;
	}
	reverseString(str, n - 1);
}
