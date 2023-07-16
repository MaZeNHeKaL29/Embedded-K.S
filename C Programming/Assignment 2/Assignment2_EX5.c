/*
 ============================================================================
 Name        : Assignment2_EX5.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c", &c);
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		printf("%c is an alphabet", c);
	}
	else
	{
		printf("%c is not an alphabet", c);
	}
}
