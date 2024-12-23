//insertion of an element to an array:
#include<stdio.h>
int main(){
    int a[20],n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("elements of array are:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
//insertion of an element at the end of an array:
   int element;
    printf("enter the element");
        scanf("%d",&element);
        for(i=0;i<n;i++){
}
a[i]=element;
n++;
printf("rewriting array:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
//insertion of an element at the beginning of an array:

printf("enter the element:");
scanf("%d",&element);
for(i=n;i>0;i--){
a[i]=a[i-1];
}
a[i]=element;
n++;
printf("rewriting array:");
for(i=0;i<n;i++){
        printf("%d\t",a[i]);
}
//insertion of an element at any position:
printf("insertion of an element at any position\n");
int pos;
printf("enter the position:");
scanf("%d",&pos);
printf("enter the element:");
scanf("%d",&element);
for(i=n;i>pos-1;i--){
    a[i]=a[i-1];
}
a[i]=element;
n++;
printf("rewriting array:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}