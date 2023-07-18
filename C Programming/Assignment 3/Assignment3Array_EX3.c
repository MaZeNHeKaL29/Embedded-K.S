/*
 ============================================================================
 Name        : AssignmnetArray_EX3.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int r;
	int c;
	int i,j;
	printf("Enter rows and columns of matrix : ");
	fflush(stdout);
	scanf("%d %d", &r,&c);
	int arr[r][c];
	int arr_tr[c][r];
	printf("Enter elements of matrix\r\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("a%d%d : ", i+1,j+1);
			fflush(stdout);
			scanf("%d", &arr[i][j]);
		}
	}

	for(i = 0; i < c; i++)
	{
		for(j = 0; j < r; j++)
		{
			arr_tr[i][j] = arr[j][i];
		}
	}

	printf("Entered Matrix : \r\n");
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("%d  ", arr[i][j]);
		}
		printf("\r\n");
	}

	printf("Transpose Matrix : \r\n");
	for(i = 0; i < c; i++)
	{
		for(j = 0; j < r; j++)
		{
			printf("%d  ", arr_tr[i][j]);
		}
		printf("\r\n");
	}
}
