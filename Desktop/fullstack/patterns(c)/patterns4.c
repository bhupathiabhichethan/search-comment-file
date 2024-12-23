/*
Inverted Right Half Pyramid
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
    int i,j;
    printf("inverted right half pyramid:\n");
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}