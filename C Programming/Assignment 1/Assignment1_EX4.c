/*
 ============================================================================
 Name        : Assignment1_EX4.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a;
	float b;
	printf("Enter two integers : ");
	fflush(stdout);
	scanf("%f %f", &a, &b);
	printf("Sum : %.2f", a * b);
}
