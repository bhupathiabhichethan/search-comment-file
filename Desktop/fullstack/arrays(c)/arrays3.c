//prime numbers from array elements:
#include<stdio.h>
int main(){
    int a[10],i,n;
    printf("Enter the value for n");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int fact,j;
    for(i=0;i<n;i++){
        fact=0;
       for(j=1;j<=n;j++){
        if(a[i]%j==0){
            fact++;
        }
        
       }
       if(fact==2){
        printf("%d is  a prime number\n",a[i]);
    }
    else{
        printf("%d is a not prime number\n",a[i]);
    }
}
}