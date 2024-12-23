//Write a program to find maximum between two numbers
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf(" greated number among a and b is a: %d",a);
    }
    else if(a==b){
        printf("both numbers are equal");
    }
    else{
        printf("greater number is b: %d",b);
    }
}