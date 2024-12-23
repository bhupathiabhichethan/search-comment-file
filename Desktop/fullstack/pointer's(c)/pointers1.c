#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a: ");
    scanf("%d",&a);
    int *ptr;
    ptr=&a;
    int **ptr1;
    ptr1=&ptr;
    printf("size of a is %u and value of a is %d\n",&a,a);
    printf("size of a is %u and value of a is %d\n",ptr,*ptr);
    printf("size of ptr is %u and value of ptr is %d\n",ptr1,*ptr1);
    printf("size of a is %u and value of a is %d\n",*ptr1,**ptr1);
}