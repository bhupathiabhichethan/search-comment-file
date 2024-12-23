/*
Diamond Pattern
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<stdio.h>
#include "patterns.h"
int main(){
    int n;
    name(&n);
    int i,j,k,m,p;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=1;j++){
            printf("*");
        }
        for(m=1;m<=i-1;m++){
            printf(" *");
        }
          printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=1;k++){
            printf("*");
    }
    for(m=1;m<=n-i;m++){
        printf(" *");
    }
    printf("\n");
}
}