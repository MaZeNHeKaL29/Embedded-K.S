#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int feet;
	double inch;
}distance;

int main(void) {
	distance d1;
	distance d2;
	printf("Enter information for 1st distance :\n");
	printf("Enter feet : ");
	fflush(stdout);
	scanf("%d", &d1.feet);
	printf("Enter inch : ");
	fflush(stdout);
	scanf("%lf", &d1.inch);
	printf("Enter information for 2nd distance :\n");
	printf("Enter feet : ");
	fflush(stdout);
	scanf("%d", &d2.feet);
	printf("Enter inch : ");
	fflush(stdout);
	scanf("%lf", &d2.inch);
	int feet = d1.feet + d2.feet + (unsigned int)(d1.inch + d2.inch - 12);
	double inch = d1.inch + d2.inch;
	if(inch >= 12)
	{
		inch -= 12;
	}
	printf("\nSum of distances = %d \'-%.2lf\"",feet,inch);
	return EXIT_SUCCESS;
}
