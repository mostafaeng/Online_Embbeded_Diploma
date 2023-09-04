/*
 ============================================================================
 Name        : assignment_1_ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a;
	float b;
	float temp;

	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
    fflush(stdin);fflush(stdout);
	scanf("%f",&b);

	b = a+b;
	a = b-a;
	b = b-a;

	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);
	return EXIT_SUCCESS;
}
