#include<stdio.h>

unsigned int get_factorial(unsigned int num);
int main(){

    unsigned int num;
    printf("Enter positive integer: ");
    scanf("%d",&num);

    printf("\nfactorail of %d = %d",num,get_factorial(num));


    return 0;
}


unsigned int get_factorial(unsigned int num){

      if(num == 0)
      {
           return 1;
      }
      else
      {
           return (num *get_factorial(num-1));   
      }

}