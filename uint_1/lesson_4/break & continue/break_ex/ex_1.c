#include<stdio.h>
#include<stdlib.h>



int main(){
int max_num;
float num;
int counter;
int num_of_positive = 0;
float sum = 0;

printf("Maximum no. of inputs\n");
scanf("%d",&max_num);

for(counter =1; counter<=max_num; counter++){
    printf("Enter n%d: ",counter);
    scanf("%f",&num);
   if(num<0)
   {
    break;
   }
   sum += num;
}
printf("Average=%0.2f",sum/counter-1);
 





    return 0;
}