#include<stdio.h>
#include<stdlib.h>



int main(){

int arr[100];
unsigned int num_of_elem;
int inserted_elem;
unsigned int position;
unsigned int counter;

printf("Enter number of elements: ");
scanf("%d",&num_of_elem);

for(counter =0; counter<num_of_elem; counter++){
    arr[counter] = counter+1;
    printf("%d ",arr[counter]);
}

printf("\nEnter element to be inserted: ");
scanf("%d",&inserted_elem);

printf("\nEnter the location: ");
scanf("%d",&position);

for(counter =num_of_elem; counter>=position-1; counter--){
    arr[counter+1] = arr[counter];
}
num_of_elem++;
arr[position-1] = inserted_elem;

for(counter =0; counter<num_of_elem; counter++){
    printf("%d ",arr[counter]);
}






    return 0;
}