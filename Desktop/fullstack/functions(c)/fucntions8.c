//findind power of a number using recursive:
#include<stdio.h>
int main(){
    int power(int ,int);
    int b,p;
    printf("enter the value of b and p:");
    scanf("%d%d",&b,&p);
    printf("value of %d power %d is %d",b,p,power(b,p));
}
int power(int b,int p){
    if(p==0){
        return 1;
    }
    else{
        return b*power(b,p-1);
    }
}