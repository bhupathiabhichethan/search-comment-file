//Write a program to print all unique elements in the array:
#include<stdio.h>
int main(){
    int a[10],i,j,n;
    int freq[100];
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    printf("array elements are........ \n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    int count;
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                freq[j]=0;//zero is assigned to duplicate elements
                freq[i]=count;
            }
        }
        // if(freq[i]!=0){
            
        // }
    }
    printf("unique elements are :\n");
    for(i=0;i<n;i++){
        if(freq[i]==-1){
            printf("%d\n",a[i]);
        }
    }
}