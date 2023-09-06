#include<stdio.h>
#include<string.h>




void reverse_string(char *str);
int main(){

char str[100];
printf("Enter a sentence: ");
gets(str);
reverse_string(str);
printf("\n\n%s",str);


    return 0;
}


void reverse_string(char *str){

    static unsigned int counter = 0;
    unsigned int length = strlen(str);

    char temp = str[counter];
    str[counter] = str[length-counter-1];
    str[length-counter-1] = temp;

    counter++;

    if(counter<length/2)
    {
        reverse_string(str);
    }
}