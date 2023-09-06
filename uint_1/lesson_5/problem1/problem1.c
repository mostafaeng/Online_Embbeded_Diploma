#include<stdio.h>
#include<stdlib.h>

void prime_numbers(unsigned int num1,unsigned int num2);

int main(){
          int num1;
          int num2;    
         
         printf("Enter two numbers(interval): ");
         scanf("%d%d",&num1,&num2);
         prime_numbers(num1,num2);
    return 0;
}


void prime_numbers(unsigned int num1,unsigned int num2){

      unsigned int counter_1;
      unsigned int counter_2;
      char flag;
      printf("prime numbers between %d and %d are:",num1,num2);
      for(counter_1 = num1; counter_1<=num2; counter_1++)
      {
            for(counter_2 =2; counter_2<counter_1/2; counter_2++)
            {
                  if(0 == counter_1%counter_2)
                  {    flag = 0; // not prime
                       break; 
                  }
                  else
                  {
                       flag = 1; // prime
                  }

            }
            if(flag)
            {
               printf("%d ",counter_1);

            }
      }


}