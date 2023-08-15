#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define area_circle(r) M_PI*r*r

int main(void) {
	int radius;
	double area;
	printf("Enter radius : ");
	fflush(stdout);
	scanf("%d", &radius);
	area = area_circle(radius);
	printf("Area = %.2lf", area);
	return EXIT_SUCCESS;
}
