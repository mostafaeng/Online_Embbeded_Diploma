#include<stdio.h>
#include<stdlib.h>



int main(){

int arr[100];
unsigned int num_of_elem;
int searched_elem;
unsigned int counter;

printf("Enter number of elements: ");
scanf("%d",&num_of_elem);

for(counter =0; counter<num_of_elem; counter++){
    arr[counter] = (counter+1)*11;
    printf("%d ",arr[counter]);
}

printf("\n\nEnter element to be searched: ");
scanf("%d",&searched_elem);

for(counter =0; counter<num_of_elem; counter++){
    if(searched_elem == arr[counter]){
        printf("\n\nNumber found at location = %d",counter+1);
        break;
    }
}






    return 0;
}