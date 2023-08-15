#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct{
	char name[MAX];
	int id;
}employee;

int main(void) {
	employee e1 = {"Alex", 1002};
	employee *ptr = &e1;
	printf("Employee Name : %s\n", ptr->name);
	printf("Employee ID : %d", ptr->id);
}
