/*
 ============================================================================
 Name        : Assignment3_Break.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_NO 100

int main(void) {
	int n;
	int arr[MAX_NO];
	int i;
	int sum = 0;
	printf("Enter Number of elements : ");
	fflush(stdout);
	scanf("%d", &n);
	for(i = 0; i < n && i < MAX_NO; i++)
	{
		printf("Enter Element No.%d : ", i + 1);
		fflush(stdout);
		scanf("%d", &arr[i]);
		if(arr[i] < 0)
		{
			n = i;
			break;
		}
	}
	for(i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	printf("Average is %.2f", sum/n * 1.0);
}
