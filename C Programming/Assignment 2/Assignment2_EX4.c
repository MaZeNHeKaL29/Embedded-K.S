/*
 ============================================================================
 Name        : Assignment2_EX4.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%f", &n);
	if(n > 0)
	{
		printf("%.2f is positive", n);
	}
	else if(n < 0)
	{
		printf("%.2f is negative", n);
	}
	else
	{
		printf("You entered Zero");
	}
}
