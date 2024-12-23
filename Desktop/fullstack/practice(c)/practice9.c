#include<stdio.h>
int main(){
    int big(int [],int);
    int input(int[],int);
    int a[100],n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the array elements:");
    input(a,n);
    printf("biggest element in an given array is: %d",big(a,n));
}
int input(int a[],int x){
    int i;
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
}
int big(int a[],int n){
    int i;
    int max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
    
}
