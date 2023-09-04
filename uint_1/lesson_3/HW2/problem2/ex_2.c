#include<stdio.h>
#include<stdlib.h>

int main(){

char ch;
printf("Enter an alphabet: ");
scanf("%c",&ch);
char flag1 = ('a' == ch || 'e' == ch || 'i' == ch || 'u' == ch || 'o' == ch);
char flag2 = ('A' == ch || 'E' == ch || 'I' == ch || 'U' == ch || 'O' == ch);

if(flag1 || flag2){
     printf("%c is a vowel",ch);
}
else{
    printf("%c is a consonant.",ch);
}
 return 0;   
}