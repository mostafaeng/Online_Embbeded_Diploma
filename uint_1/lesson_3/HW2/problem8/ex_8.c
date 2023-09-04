#include<stdio.h>
#include<stdlib.h>

int main(){

float num1;
float num2;
char operator;
printf("\nEnter operator + or - or * or divide: ");
fflush(stdin);fflush(stdout);
scanf("%c",&operator);

printf("Enter two operands: ");
scanf("%f%f",&num1,&num2);

switch (operator)
{
case '+':
    printf("%0.1f + %0.1f = %0.1f",num1,num2,num1+num2);
    break;
case '-':
    printf("%0.1f - %0.1f = %0.1f",num1,num2,num1-num2);
    break;
case '*':
    printf("%0.1f * %0.1f = %0.1f",num1,num2,num1*num2);
    break;
case '/':
    printf("%0.1f / %0.1f = %0.1f",num1,num2,num1/num2);
    break;            

default:
      
    break;
}



return 0;
}