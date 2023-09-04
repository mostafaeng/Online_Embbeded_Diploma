#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

char string[100];
unsigned int counter;
unsigned int frequency = 0;
char ch;

printf("Enter a string: ");
gets(string);

printf("Enter a character to find frequency: ");
scanf("%c",&ch);

for(counter =0; counter<strlen(string); counter++){
    if(ch == string[counter]){
        frequency++;
    }
}

printf("Frequency of %c = %d",ch,frequency);

    return 0;
}