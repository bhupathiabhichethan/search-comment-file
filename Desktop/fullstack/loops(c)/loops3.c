//Write a program to print multiplication table of a given number:
#include<stdio.h>
int main(){
    int n,i;
    // printf("enter what table u need");
    // scanf("%d",&n);
    for(n=1;n<=20;n++){
    for(i=1;i<=10;i++){

        printf("%d*%d=%d\n",n,i,n*i);
    }
printf("\n");
    }
}