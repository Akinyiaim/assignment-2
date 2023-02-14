/*
program that print characters in uppercase and lowercase using putchar
return:0
*/
#include<stdio.h>
int main()
{
    char letter = 'a';
    while(letter <= 'z'){
         putchar(letter);
         letter++;
    }
    putchar('\n');
    char ch ='A';
    while(ch <= 'Z'){
         putchar(ch);
         ch++;
    }
    return 0;
}


