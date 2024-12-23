//dynamic memory allocation using malloc and realloc function:
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,n=0;
    int m=5,num;
    int i;
    a=(int *)malloc(m*sizeof(int));
    printf("enter the value of num:");
    scanf("%d",&num);
    while(num!=0){
        if(n>=m-1){
            m=m+5;
            printf("reallocating memory\n");
            a=(int *)realloc(a,m*sizeof(int));
        }
        *(a+n)=num;
        n++;
        scanf("%d",&num);
        }

        for(i=0;i<n;i++){
        printf("%d\t",*(a+i));
        }
}