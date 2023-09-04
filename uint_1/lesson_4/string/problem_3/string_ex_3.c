#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){



char string[100];
unsigned int counter = 0;

printf("\n\nEnter a string: ");
gets(string);

while(counter < strlen(string)/2)
{   char temp;
    temp = string[counter];
    string[counter] = string[strlen(string)-1-counter];
    string[strlen(string)-1-counter] = temp;
    counter++;
}
printf("\n\nReverse string is : %s",string);




    return 0;
}


