//Write a program to find maximum between three numbers:
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("greates number is a: %d\n",a);
 
   }
   else if(b>c){
    printf("greatest numbers is b: %d\n",b);
   }
   else if(c>b){
    printf("greatest number is c:%d\n",c);
   }

   if(a==b){
    printf(" a and b are equal\n");
   }
   else if(b==c){
    printf("b and c are equal\n");
   }
   else {
    printf("a and c are equaal\n");
   }
   if(a==b==c){
    printf("all numbers are equal\n");
   }
}