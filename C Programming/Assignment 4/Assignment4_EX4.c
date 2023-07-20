/*
 ============================================================================
 Name        : Assignment4_EX4.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int n, int i);

int main(void) {
	int n;
	int i;
	printf("Enter base Number : ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Enter power number(positive integer) : ");
	fflush(stdout);
	scanf("%d", &i);
	printf("%d^%d = %d", n,i,power(n, i));
}

int power(int n, int i)
{
	if(i == 1)
	{
		return n;
	}
	return n * power(n,i - 1);
}
