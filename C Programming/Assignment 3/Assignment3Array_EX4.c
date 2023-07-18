/*
 ============================================================================
 Name        : Assignment3Array_EX4.c
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
	int loc;
	int value;
	printf("Enter Number of elements : ");
	fflush(stdout);
	scanf("%d", &n);
	for(i = 0; i < n && i < MAX_NO; i++)
	{
		printf("Enter Element No.%d : ", i + 1);
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdout);
	scanf("%d", &value);
	printf("Enter the location : ");
	fflush(stdout);
	scanf("%d", &loc);
	for(i = n; i > loc - 1; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[i] = value;
	n++;
	for(i = 0; i < n; i++)
	{
		printf("%d  ", arr[i]);
	}
}
