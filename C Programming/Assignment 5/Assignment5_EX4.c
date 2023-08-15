#include <stdio.h>
#include <stdlib.h>

#define STUDENT_NUM 10

#define MAX 100

typedef struct{
	int roll_number;
	char name[MAX];
	double marks;
}student;

int main(void) {
	student students[STUDENT_NUM];
	int i;
	for(i = 0; i < STUDENT_NUM; i++)
	{
		printf("Enter information of student whose roll number is %d:\n",i + 1);
		students[i].roll_number = i + 1;
		printf("Enter Name : ");
		fflush(stdout);
		gets(students[i].name);
		fflush(stdin);
		printf("Enter marks : ");
		fflush(stdout);
		scanf("%lf", &students[i].marks);
		fflush(stdin);
	}
	for(i = 0; i < STUDENT_NUM; i++)
	{
		printf("\nDisplaying Information : \n");
		printf("Roll : %d\n", students[i].roll_number);
		printf("Name : ");
		puts(students[i].name);
		printf("Marks : %lf\n", students[i].marks);
	}
}
