#include<stdio.h>
#include<stdlib.h>

int main(){

float number;
printf("\nEnter a number: ");
scanf("%f",&number);

switch(0 == number){
    case 1:
         printf("You entered zero.");
         break;
    default :
          switch(number>0){
               case 1 :
                     printf("%0.2f is positive.",number);
                     break;
               default :
                     printf("%0.2f is negative.",number);      
          }     
}
 return 0;   
}