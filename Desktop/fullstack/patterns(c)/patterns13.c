/*
ZIGZAG PATTERN:
    *       *       *
  *   *   *   *   *   *
*       *       *       *
*/
#include<stdio.h>
#include "patterns.h"
int main(){
    int n;
    name(&n);
    int i,j;
    for(i=0;i<=3;i++){
        for(j=0;j<=n;j++){
            if((i==0 && j%4==2)||
            (i==1 && j%2==1)||
            (i==2 && j%4==0)){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }printf("\n");
    }
 
}