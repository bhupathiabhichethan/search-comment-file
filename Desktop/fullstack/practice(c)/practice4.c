//sorting array and searching a element using binary search algorithm
#include<stdio.h>
    void input(int [],int);
    void output(int [],int);
    void sort(int [],int);
    int search(int [],int,int ,int);
int main(){
    
    int a[100];
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the array elements:");
    input(a,n);
   int  first=0;
   int last=(n-1);
    printf("print array elements before sorting:");
    output(a,n);
    printf("\n");
    printf("print array elements affter sorting");
    sort(a,n);
    printf("\n");
    output(a,n);
    printf("\n");
    int key;
    printf("enter the element to be searched:");
    scanf("%d",&key);
    int mid=search(a,key,first,last);
    if(mid>=0 && mid<n){
   printf("%d",mid);
}else{
    printf("element not found");}
}
void input(int a[],int x){
    int i;
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
}
void output(int b[],int y){
    int i;
    for(i=0;i<y;i++){
        printf("%d\t",b[i]);
    }
}
void sort(int c[],int z){
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
int search(int a[],int key,int first,int last){
    
    int mid;
    
    mid=(first+last)/2;
    if(key==a[mid]){
        
        return mid;
    }
    else if(key>a[mid]){
        first=mid+1;
     return search(a,key,mid+1,last);
        
    }
    else if(key<a[mid]){
        last=mid-1;
        return search(a,key,first,mid-1);
    }
    else{
        return -1;
    }
}