//dynamic memory allocation using calloc function:
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *n;
    int m,i;
    printf("enter the value of m:");
    scanf("%d",&m);
    n=(int *)calloc(m,sizeof(int));
    printf("enter the elements:");
    for(i=0;i<5;i++){
        scanf("%d",n+i);
    }
    printf("elements are:\t");
    for(i=0;i<5;i++){
        printf("%d\t",*(n+i));
        }
}