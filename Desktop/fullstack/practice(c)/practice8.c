//finding greatest common divisor
#include<stdio.h>
int main(){
    int gdc(int,int);
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("gdc of %d and %d is %d",a,b,gdc(a,b));
}
int gdc(int a,int b){
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}