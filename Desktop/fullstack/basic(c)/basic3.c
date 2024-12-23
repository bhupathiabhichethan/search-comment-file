//Write a program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number:  ");
    scanf("%d",&n);
    if(n>0){
        printf("given number %d positive number",n);
    }
    else if(n==0){
        printf("given  number %d is zero",n);
    }
    else{
        printf("number is negative");
    }
}