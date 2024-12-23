//find the reverse of an array:
#include<stdio.h>
int main(){
    void input(int[],int);
    void reverse(int [],int);
    int a[100];
  int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the array elements:");
    input(a,n);
    printf("reverse of array is : ");
    reverse(a,n);
}
void input(int a[],int x){
    int i;
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
}
void reverse(int a[],int n){
    int i;
    for(i=n-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
}