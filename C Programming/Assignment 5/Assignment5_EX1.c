
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct{
	char name[MAX];
	int roll_number;
	double marks;
}student;

int main(void) {
	student s1;
	printf("Enter information of students:\n");
	printf("Enter Name : ");
	fflush(stdout);
	gets(s1.name);
	fflush(stdin);
	printf("Enter roll number : ");
	fflush(stdout);
	scanf("%d", &s1.roll_number);
	printf("Enter marks : ");
	fflush(stdout);
	scanf("%lf", &s1.marks);
	printf("\nDisplaying Information : \n");
	printf("Name : ");
	puts(s1.name);
	printf("Roll : %d\n", s1.roll_number);
	printf("Marks : %lf\n", s1.marks);
	return EXIT_SUCCESS;
}
