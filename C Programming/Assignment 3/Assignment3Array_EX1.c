/*
 ============================================================================
 Name        : Assignment3Array_EX1.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float arr1[2][2];
	float arr2[2][2];
	float arr_sum[2][2];
	int i;
	int j;
	printf("Enter elements of 1st matrix\r\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("a%d%d : ", i+1,j+1);
			fflush(stdout);
			scanf("%f", &arr1[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix\r\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("b%d%d : ", i+1,j+1);
			fflush(stdout);
			scanf("%f", &arr2[i][j]);
		}
	}

	printf("Sum Of Matrix\r\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			arr_sum[i][j] = arr1[i][j] + arr2[i][j];
			printf("%.2f  ", arr_sum[i][j]);
		}
		printf("\r\n");
	}
}
