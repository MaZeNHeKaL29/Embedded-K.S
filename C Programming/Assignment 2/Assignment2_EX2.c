/*
 ============================================================================
 Name        : Assignment2_EX2.c
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
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c", &c);
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		printf("%c is a vowel", c);
	}
	else
	{
		printf("%c is consonant", c);
	}
}
