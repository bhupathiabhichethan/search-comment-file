//Write a program to put even and odd elements of array in two separate array:
#include<stdio.h>
int main(){
    int a[10],even[10],odd[10],i,n;
     int j=0,k=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the elements of an array....: ");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0){
            even[j]=a[i];
            j++;
        }
        else{
            odd[k]=a[i];
            k++;
        }
    }
    printf("even elements are...\n");
    for(i=0;i<j;i++){
    printf("%d\t",even[i]);
    }
    printf("\nodd elements are...\n");
    printf("\n");
    for(i=0;i<k;i++){
        printf("%d\t",odd[i]);
        }
           
}

