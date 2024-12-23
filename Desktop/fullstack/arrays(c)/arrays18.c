//binary search with bubble sort:
#include<stdio.h>
#include "array.h"
int main(){
    int a[10],n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the elements of an array: ");
    insert(a,n);
    printf("array elements before sorting are....");
    output(a,n);
    printf("\n");
    int i,j;
    int temp;
    //bubbble sorting:
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("after sorting array elements are....");
    output(a,n);
    printf("\n");
    int x;
    printf("enter element to be search: ");
    scanf("%d",&x);
    int first=0,last=n-1,mid,found=0;
    while((first<=last) && found==0)
    {
        mid=(first+last)/2;
        if(a[mid]==x){
            found=1;
           break;

        }
        else if(x>a[mid]){
            first=mid+1;
        }
        else if(x<a[mid]){
            last=mid-1;
        }
       
    }
    if(found==0){
        printf("no found");
    }
    else{
        printf("element found at position %d",mid+1);
    }
    
}