#include<stdio.h>
#include<stdlib.h>



int main(){


int num;
int counter;
int product = 1;

for(counter =1; counter<=4; counter++){
    printf("Enter n%d: ",counter);
    scanf("%d",&num);
   if(num == 0)
   {
    continue;
   }
   product *= num;
}

printf("product=%d",product);
 





    return 0;
}