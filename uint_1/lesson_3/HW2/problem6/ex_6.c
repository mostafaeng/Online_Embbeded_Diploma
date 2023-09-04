#include<stdio.h>
#include<stdlib.h>

int main(){

int number;
int counter = 1;
int sum = 0;
printf("\nEnter an intger: ");
scanf("%d",&number);

while(counter<=number){
  sum+=counter;
  counter++;
}
printf("sum = %d",sum);
 return 0;   
}