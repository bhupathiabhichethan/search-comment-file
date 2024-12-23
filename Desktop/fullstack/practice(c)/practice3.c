//sorting array and searching a element using linear search algorithm
#include<stdio.h>
int main(){
    int  input(int [],int);
    int  output(int [],int);
    int sort(int [],int);
    int search(int [],int);
    int a[100];
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the array elements:");
    input(a,n);
    printf("print array elements before sorting:");
    output(a,n);
    printf("\n");
    printf("print array elements affter sorting");
    sort(a,n);
    printf("\n");
    output(a,n);
    printf("\n");
    int flag=search(a,n);
    int i;
if(flag>=0 && flag<=(n-1)){
  printf("element found at position %d",flag+1);
}
else{
    printf("element not found");
}
}
int input(int a[],int x){
    int i;
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
}
int output(int b[],int y){
    int i;
    for(i=0;i<y;i++){
        printf("%d\t",b[i]);
    }
}
int sort(int c[],int z){
    int i,j,temp;
    for(i=0;i<z;i++){
        for(j=0;j<z-1;j++){
            if(c[j]>c[j+1]){
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
}
int search(int a[],int n){
    int i;
    int key;
    printf("enter element to be searched:");
    scanf("%d",&key);
    int flag=0;
    for(i=0;i<n;i++){
        if(a[i]==key){
           flag=1;
           break;
        }
        else{
            flag=0;
        }
    }
    if(flag==1){
        return i;
    }
    else{
      return -1;
      
    }
}