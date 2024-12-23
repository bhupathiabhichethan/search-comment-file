//Write a program to delete all duplicate elements from an array:
#include<stdio.h>
int main(){
  int a[10],i,j,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array elements are.....\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    int flag[100];
    for(i=0;i<n;i++){
        flag[i]=-1;
    }
    int count;
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                flag[j]=0;
            }
        }
        if(flag[i]!=0){
            flag[i]=count;
        }
    }
    printf("\n");
    for(i=0;i<n;i++){
        if(flag[i]!=0){
            printf("%d\t",a[i]);
        }
    }
}