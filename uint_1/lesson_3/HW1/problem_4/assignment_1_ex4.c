/*
 ============================================================================
 Name        : assignment_1_ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1;
	float num2;

	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num1,&num2);

	printf("product: %f",num1*num2);
	return EXIT_SUCCESS;
}
