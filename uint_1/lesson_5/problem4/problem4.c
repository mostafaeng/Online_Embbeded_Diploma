#include<stdio.h>


int get_power_number(int num,unsigned int power);
int main(){

    int num;
    unsigned int power;

    printf("\n\nEnter base number: ");
    scanf("%d",&num);
    printf("Enter power number(positive integer): ");
    scanf("%d",&power);

    printf("%d^%d = %d",num,power,get_power_number(num,power));



    return 0;
}

int get_power_number(int num,unsigned int power){

   static int ret_value = 1;
   ret_value *=num;
   power--;
   
   if(power)
   {
    get_power_number(num,power);
   }

return ret_value;

}