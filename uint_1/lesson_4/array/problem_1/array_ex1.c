#include<stdio.h>
#include<stdlib.h>



int main(){
float a[2][2];
float b[2][2];
char counter_1;
char counter_2;

printf("Enter the elements of 1st matrix\n");
for(counter_1 =0; counter_1<2; counter_1++){
    for(counter_2 =0; counter_2<2; counter_2++){
        printf("Enter a%d%d: ",counter_1+1,counter_2+1);
        scanf("%f",&a[counter_1][counter_2]);      
        
    }
}

printf("Enter the elements of 2sd matrix\n");
for(counter_1 =0; counter_1<2; counter_1++){
    for(counter_2 =0; counter_2<2; counter_2++){
        printf("Enter b%d%d: ",counter_1+1,counter_2+1);
        scanf("%f",&b[counter_1][counter_2]);
        
    }
}

printf("sum of Matrix\n");
for(counter_1 =0; counter_1<2; counter_1++){
    for(counter_2 =0; counter_2<2; counter_2++){
       printf("%0.1f ",a[counter_1][counter_2] + b[counter_1][counter_2]);
    }
    printf("\n");
}



    return 0;
}