/*
 ============================================================================
 Name        : Assignment2_EX8.c
 Author      : Mazen Hekal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char oper;
	float n1;
	float n2;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c", &oper);
	printf("Enter two operands : ");
	fflush(stdout);
	scanf("%f %f", &n1, &n2);
	switch(oper)
	{
	case '+':
		printf("%.2f %c %.2f = %.2f", n1,oper,n2,n1 + n2);
		break;
	case '-':
		printf("%.2f %c %.2f = %.2f", n1,oper,n2,n1 - n2);
		break;
	case '*':
		printf("%.2f %c %.2f = %.2f", n1,oper,n2,n1 * n2);
		break;
	case '/':
		printf("%.2f %c %.2f = %.2f", n1,oper,n2,n1 / n2);
		break;
	default:
		printf("Wrong Operation");
		break;
	}
}
