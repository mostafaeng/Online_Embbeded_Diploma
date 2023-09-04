#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

char string[100];
unsigned int counter = 0;
unsigned int length= 0;

printf("\n\nEnter a string: ");
gets(string);

while('\0' != string[counter++])
{
    length++;
}
printf("\n\nLength of string = %d",length);

    return 0;
}