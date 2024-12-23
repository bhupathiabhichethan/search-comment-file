#include<stdio.h>
int main(){
    int swap(int*,int*);
    int *a,*b;
    printf("enter the value of a and b;\n");
    scanf("%d %d",&a,&b);
    printf("before swapping a,b are %d %d",a,b);
    printf("\n");
    swap(&a,&b);
    printf("after swapping a,b are %d %d",a,b);
}
int swap(int *x ,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}