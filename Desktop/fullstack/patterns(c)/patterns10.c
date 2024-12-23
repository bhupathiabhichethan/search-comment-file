/*
HOUR GLASS PATTERN
* * * * *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
* * * * *
*/
#include<stdio.h>
#include "patterns.h"
int main(){
    int n;
    name(&n);
    int i,j,k,l,m,p;
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        if(i==n){
            for(k=1;k<=n;k++){
                printf("* ");
            }
            printf("\t");
            printf("\n");
        }
        else if(i==1){
            printf("*\n");
        }
        else{
            for(k=1;k<=1;k++){
                printf("* ");
        }
        for(l=1;l<(2*i)-3;l++){
            printf(" ");
        }
        printf("*\n");
    }
}
       for(m=2;m<=n;m++){
        for(p=1;p<=n-m;p++){
            printf(" ");
       } 
       if(m==5){
        for(l=1;l<=n;l++){
            printf("* ");
        }
        printf("\n");
       }
       else{
        for(int s=1;s<=1;s++){
            printf("*");
       }
       for(int d=1;d<=(2*m-3);d++){
        printf(" ");
       }
       printf("*");
       printf("\n");
}
       }
       }
