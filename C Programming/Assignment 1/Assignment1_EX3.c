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
	int a;
	int b;
	printf("Enter two integers : ");
	fflush(stdout);
	scanf("%d %d", &a, &b);
	printf("Sum : %d", a + b);
}
