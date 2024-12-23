/*
full pyramid
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
#include "patterns.h"
int main(){
    int n;
    name(&n);
int i,j,k,m;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(k=1;k<=1;k++){
        printf("*");
    }
    for(m=1;m<=i-1;m++){
        printf(" *");
    }
    printf("\n");
}
}