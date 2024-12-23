//	•	Write a program to print all natural numbers in reverse order:
#include<stdio.h>
int main(){
    int n,i;
    printf("enter how many numbers needed to printf");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        printf("%d\t",i);
    }
    
}