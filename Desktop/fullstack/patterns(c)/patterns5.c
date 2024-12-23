/*
Inverted Left Half Pyramid
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
#include "patterns.h"
int main(){
    int n;
    name(&n);
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(k=n-i;k>=1;k--){
            printf("*");
        }
        printf("\n");
    }
}