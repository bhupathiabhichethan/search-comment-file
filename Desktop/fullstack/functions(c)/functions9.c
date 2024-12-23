#include<stdio.h>
int main(){
    int sum(int ,int );
    int a,b;
    printf("enter the values of a and b: \n");
    scanf("%d %d",&a,&b);
    printf("sum of %d,%d is %d:",a,b,sum(a,b));
}
int sum(int a,int b){
    return a+b;
}