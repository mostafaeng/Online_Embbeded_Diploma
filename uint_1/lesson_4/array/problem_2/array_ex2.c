#include<stdio.h>
#include<stdlib.h>



int main(){

float arr[100];
unsigned int num_of_elem;
unsigned int counter;
float sum = 0;

printf("Enter number of data: ");
scanf("%d",&num_of_elem);

for(counter =0; counter<num_of_elem; counter++){
     printf("%d. Enter number: ",counter+1);
     fflush(stdin);fflush(stdout);
     scanf("%f",&arr[counter]);
     sum += arr[counter];
}
printf("Average = %0.2f",sum/num_of_elem);



    return 0;
}