/*
 ============================================================================
 Name        : Assignment4_EX1.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void primeNumbers(int n1,int n2);

int main(void) {
	int n1;
	int n2;
	printf("Enter two numbers(intervals) : ");
	fflush(stdout);
	scanf("%d %d", &n1,&n2);
	primeNumbers(n1, n2);
}

void primeNumbers(int n1, int n2)
{
	int first;
	int second;
	int i;
	int j;
	if(n1 <= n2)
	{
		first = n1;
		second = n2;
	}
	else
	{
		first = n2;
		second = n1;
	}
	printf("Prime Numbers between %d and %d are : ", first, second);
	for(i = first; i <= second; i++)
	{
		if(i == 1 || i == 0)
		{
			continue;
		}
		for(j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				break;
			}
		}
		if(j == i)
		{
			printf("%d  ", i);
		}
	}
}
