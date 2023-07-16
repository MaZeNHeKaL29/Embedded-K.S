/*
 ============================================================================
 Name        : Assignment2_EX3.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n1;
	float n2;
	float n3;
	float max;
	printf("Enter three numbers : ");
	fflush(stdout);
	scanf("%f %f %f", &n1,&n2,&n3);
	printf("Largest Number = ");
	max = n1;
	if(n2 > max)
	{
		max = n2;
	}

	if(n3 > max)
	{
		max = n3;
	}

	printf("%.2f", max);
}
