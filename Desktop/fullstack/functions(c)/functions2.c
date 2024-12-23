//write a program to return sum of two values using functions:
#include<stdio.h>
int main(){
    int sum(int,int);
    int a,b;
    printf("enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    printf("sum of two elements is %d",sum(a,b));
}
int sum(int a,int b){
    return a+b;
}