//Write a program to copy all elements from an array to another array:
#include<stdio.h>
int main(){
    int a[100],n,i,b[100];
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements of an array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
      for(i=0;i<n;i++){
       b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d\t",b[i]);
    }
}