#include<stdio.h>
#include<stdlib.h>

int main(){

int number;
int fact = 1;
printf("\nEnter an intger: ");
scanf("%d",&number);

if(number<0){
    printf("Error!!! factorail of negative number doesnot exist.");
}
else{
    while(number){
        fact *= number--;
    }
    printf("factorail = %d",fact);
}
 return 0;   
}