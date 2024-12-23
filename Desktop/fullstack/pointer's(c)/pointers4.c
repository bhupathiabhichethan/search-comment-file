//ptr is itself an array so no need to declare pointer:
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements of an array");
    a = (int *)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
    scanf("%d",a+i);
    }
    printf("a[i]\t\ti[a]\t\t*(a+i)\t\n");
    for(i=0;i<n;i++){
        printf("%d\t\t%d\t\t%d\t\n",*(a+i),a[i],i[a]);
    }
}