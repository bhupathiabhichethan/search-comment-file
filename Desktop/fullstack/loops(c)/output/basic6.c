//Write program to find sum of even numbers between 1 to n:
#include<stdio.h>
int main(){
    int n,i,count=0,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
for(i=1;i<=n;i++){
        if(i%2==0){
            count=count+i;
    }
    else{
        sum=sum+i;
    }
}
printf(" sum of even numbers is :%d",count);
printf(" sum of odd numbers is :%d",sum);

}