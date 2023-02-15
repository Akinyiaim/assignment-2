#include<stdio.h>
int main(){
    char hex[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    int j;
    for(j=0;j<16;j++){
        putchar(hex[j]);
    }
    putchar('\n');
    return 0 ;
}