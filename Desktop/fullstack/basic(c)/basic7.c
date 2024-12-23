//Write a program to check whether a character is alphabet or not:
#include<stdio.h>
int main(){
    char c;
    printf("enter the charactor");
    scanf("%c",&c);
    if((c>='A' && c<='Z') || (c>='a' && c<='z')){
        printf("its an alphabet");
    }
    else{
        printf("its not an alphabet");
    }
}