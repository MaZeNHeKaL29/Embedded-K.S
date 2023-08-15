#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[5];
	printf("Enter Elements : \n");
	for(int i = 0; i < 5; i++)
	{
		printf("Element No.%d : ",i + 1);
		fflush(stdout);
		scanf("%d", arr + i);
	}
	printf("\nReversed Array : \n");
	int *p = arr + 4;
	for(int i = 4; i >= 0; i--)
	{
		printf("Element No.%d : %d\n",i +1, *p);
		p--;
	}
}
