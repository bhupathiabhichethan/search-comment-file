//Write a program to find maximum and minimum element in an array:
#include<stdio.h>
int main(){
    int a[100],i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
       printf("%d\t",a[i]);
    }
    int big,small;
    big=small=a[0];
    for(i=1;i<n;i++){
        if(a[i]>big){
             big=a[i];
        }
        if(a[i]<small){
         small=a[i];
        }
        }
        printf(" smallest element is:%d\n",small);
        printf("biggest element is:%d",big);
        
        
        
}