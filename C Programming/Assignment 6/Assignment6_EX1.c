#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m = 29;
	int *ab = &m;
	printf("Address of m : 0x%x\n", &m);
	printf("Value of m : %d\n\n", m);
	printf("Address of ab : 0x%x\n", ab);
	printf("Value of ab : %d\n\n", *ab);
	m = 34;
	printf("Address of ab : 0x%x\n", ab);
	printf("Value of ab : %d\n\n", *ab);
	*ab = 7;
	printf("Address of m : 0x%x\n", &m);
	printf("Value of m : %d\n\n", m);
}
