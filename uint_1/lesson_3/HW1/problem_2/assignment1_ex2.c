/*
 ============================================================================
 Name        : assignment1_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;

	printf("Enter a integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	printf("You entered: %d",num);

	return EXIT_SUCCESS;
}
