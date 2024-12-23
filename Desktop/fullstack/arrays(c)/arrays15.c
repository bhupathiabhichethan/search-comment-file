//Write a program to find reverse of an array:
#include<stdio.h>
int main(){
    int a[100],n;
    int i;
    printf("emter the value of n: ");
    scanf("%d",&n);
    printf("enter the elements of an array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("reverse of an array is: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}