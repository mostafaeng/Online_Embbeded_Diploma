#include<stdio.h>
#include<stdlib.h>

int main(){

unsigned int rows;
unsigned int cols;
unsigned int counter_1;
unsigned int counter_2;
int matrix[10][10];
int trans[10][10];

printf("Enter row and column of matrix: ");
scanf("%d%d",&rows,&cols);

printf("Enter elements of matrix: \n");
for(counter_1 =0; counter_1<rows; counter_1++){
    for(counter_2 =0; counter_2<cols; counter_2++){
        printf("Enter element a%d%d: ",counter_1+1,counter_2+1);
        scanf("%d",&matrix[counter_1][counter_2]);
    }
}

printf("entered matrix\n");
for(counter_1 =0; counter_1<rows; counter_1++){
    for(counter_2 =0; counter_2<cols; counter_2++){
        printf("%d ",matrix[counter_1][counter_2]);
    }
    printf("\n");
}


for(counter_1 =0; counter_1<rows; counter_1++){
    for(counter_2 =0; counter_2<cols; counter_2++){
        trans[counter_2][counter_1] = matrix[counter_1][counter_2]; 
        
    }
    
}



printf("Transpose of matrix: \n");
for(counter_1 =0; counter_1<cols; counter_1++){
    for(counter_2 =0; counter_2<rows; counter_2++){
        printf("%d ",trans[counter_1][counter_2]); 
        
    }
    printf("\n");
    
}
    
   



    return 0;
}