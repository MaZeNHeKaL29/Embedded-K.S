/*
 ============================================================================
 Name        : Assignment3_Continue.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int product = 1;
	int arr[4];
	for(i = 0; i < 4; i++)
	{
		printf("Enter Element No.%d : ", i + 1);
		fflush(stdout);
		scanf("%d", &arr[i]);
		if(arr[i] == 0)
		{
			continue;
		}
		product *= arr[i];
	}
	printf("Product is %d", product);
}
