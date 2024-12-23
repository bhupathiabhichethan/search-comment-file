//Write a program to merge two array to third array:
#include<stdio.h>
int main(){
   int a[100],b[100],n,m;
   printf("Enter the size of first array:");
   scanf("%d",&n);
   printf("Enter the elements of first array:\n");
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d",&m);
    printf("Enter the elements of second array:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
        } 
    int c=n+m;
    int d[c];
    int i,j=0;
    for(i=0;i<c;i++){
        if(i<n){
            d[i]=a[i];
        }
        else{
            d[i]=b[j];
            j++;
           }
        }
    printf("resultant array is ......\n");
    for(i=0;i<c;i++){
        printf("%d ",d[i]);
        }
}