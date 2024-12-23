//write a function which take a number and return fact of that number withour recursive function:
#include<stdio.h>
int main(){
    long int fact(int);
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("fact if %d is %ld",n,fact(n));
}
long int fact(int n){
   int f=1,i;
   if(n==0){
    f=1;
   }
   else{
    for(i=1;i<=n;i++){
        f=f*i;
    }
   }
   return f;
}
