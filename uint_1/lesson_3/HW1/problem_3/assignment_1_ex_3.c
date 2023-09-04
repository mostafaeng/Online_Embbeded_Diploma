/*
 ============================================================================
 Name        : assignment_1_ex_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	int num2;

	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);

	printf("sum : %d",num1+num2);

	return EXIT_SUCCESS;
}
