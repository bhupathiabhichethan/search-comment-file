//fact of a number using recursive function:
#include<stdio.h>
int main(){
    int fact(int);
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("fact of %d is %d",n,fact(n));
}
int fact(int n){

    if(n==0){
        return 1;
    }
    else{
       return n*fact(n-1);
    }
}