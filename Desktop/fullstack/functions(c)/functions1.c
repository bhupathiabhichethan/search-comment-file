#include<stdio.h>
#include "function.h"
int main(){
    int a[10],n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the elements of an array: ");
    insert(a,n);
    printf("arrray elements are:.....\n");
    output(a,n);
}
