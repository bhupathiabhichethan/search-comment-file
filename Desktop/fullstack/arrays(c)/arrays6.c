//Write a program to count total number of even , odd elements and -ve elements in an array:
#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the elements of an array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    int odd=0,even=0,negative=0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
        if(a[i]<0){
            negative++;
        }

    }
    printf("number of odd elements is %d\n even elements is %d\n",odd,even);
    printf("total number of negative elements are %d",negative);
}
