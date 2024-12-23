//swapping two numbers using call by value:
#include<stdio.h>
int main()
{
    void swap(int ,int);
    int a,b;
    printf("enter the values of a and b;");
    scanf("%d %d",&a,&b);
    printf("before swapping a=%d b=%d\n",a,b);
    swap(a,b);
    // printf("after swappping a=%d b=%d",b,a);
}
void swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("after swapping a=%d b=%d",x,y);
}