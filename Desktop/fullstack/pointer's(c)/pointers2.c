//genaric pointer:
#include<stdio.h>
int main(){
    int a;
    float b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%f",&b);
    char c;
    printf("Enter a character: ");
    scanf(" %c",&c);
    
   
    void *ptr;
    ptr=&a;
printf("size of a is %u and value is %d\n",ptr,*(int *)ptr);
    ptr=&b;
    printf("size of ptr is %d\n",sizeof(ptr));
printf("size of b is %u and value is %.2f\n",ptr,*(float *)ptr);

    ptr=&c;
printf("size of c is %u and value is %c\n",ptr,*(char *)ptr);

}