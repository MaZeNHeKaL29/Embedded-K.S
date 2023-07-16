/*
 ============================================================================
 Name        : Assignment2_EX7.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	int fact = 1;
	int i;
	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d", &n);
	if(n < 0)
	{
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else if(n <= 1)
	{
		printf("Factorial = %d", fact);
	}
	else
	{
		for(i = n; i > 1; i--)
		{
			fact *= i;
		}
		printf("Factorial = %d", fact);
	}
}
