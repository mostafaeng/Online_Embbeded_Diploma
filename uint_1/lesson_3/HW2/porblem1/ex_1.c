#include<stdio.h>
#include<stdlib.h>

int main(){

int num;
printf("Enter an integer you want to check: ");
scanf("%d",&num);
(num%2) == 0 ? printf("%d is even.",num) : printf("%d is odd.",num);
 return 0;   
}