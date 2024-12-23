/*
HOUR GLASS PATTERN:
*********
 ******* 
  *****  
   ***   
    *    
   ***   
  *****  
 ******* 
*********
*/
#include<stdio.h>
#include "patterns.h"
int main(){
    int n;
    name(&n);
    int i,j,k,l,m,s,t,u;
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(l=2;l<=n;l++){
        for(m=1;m<=n-l;m++){
            printf(" ");
        }
        for(s=1;s<=(2*l)-1;s++){
            printf("*");
        }
        printf("\n");
    }
}