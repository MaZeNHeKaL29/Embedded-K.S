#include <stdio.h>
#include <stdlib.h>

typedef struct{
	double real;
	double imaginary;
}complex_num;

int main(void) {
	complex_num c1;
	complex_num c2;
	printf("Enter information for 1st complex number :\n");
	printf("Enter real : ");
	fflush(stdout);
	scanf("%lf", &(c1.real));
	printf("Enter imaginary : ");
	fflush(stdout);
	scanf("%lf", &(c1.imaginary));
	printf("Enter information for 2nd complex number :\n");
	printf("Enter real : ");
	fflush(stdout);
	scanf("%lf", &(c2.real));
	printf("Enter imaginary : ");
	fflush(stdout);
	scanf("%lf", &(c2.imaginary));

	printf("\nSum = %.2lf + %.2lfi",c1.real + c2.real,c1.imaginary + c2.imaginary);
	return EXIT_SUCCESS;
}
