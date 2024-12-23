//accssing array elements using poiter:
#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
}
int *ptr;
ptr=&a[0];
for( int i=0;i<n;i++){
    printf("%d\t",*(ptr+i));
}
}