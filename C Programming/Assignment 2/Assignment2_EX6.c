/*
 ============================================================================
 Name        : Assignment2_EX6.c
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
	int sum = 0;
	int i;
	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("Sum = %d", sum);
}
