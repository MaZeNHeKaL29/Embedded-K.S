/*
 ============================================================================
 Name        : Assignment1_EX6.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a = 5;
	int b = 6;
	printf("Before Swapping : ");
	printf("a = %d, b = %d\n", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("After Swapping : ");
	printf("a = %d, b = %d", a, b);
}
