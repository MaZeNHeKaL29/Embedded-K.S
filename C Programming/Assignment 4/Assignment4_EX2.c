/*
 ============================================================================
 Name        : Assignment4_EX2.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void) {
	int n;
	printf("Enter a positive integer : ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Factorial of %d = %d", n, factorial(n));
}


int factorial(int n)
{
	if(n == 2 || n == 1)
	{
		return n;
	}
	return n * factorial(n-1);
}
