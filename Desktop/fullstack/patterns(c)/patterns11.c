/*
BUTTERFLY PATTERN:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
#include<stdio.h>
#include "patterns.h"
int main(){
    void one(int );
    int n;
    name(&n);
    int i,k,m,s;
    for(i=1;i<=n;i++){
        one(i);
        for(k=1;k<=2*(n-i);k++){
            printf(" ");
        }
        one(i);
            printf("\n");
    }
    for(m=n-1;m>=1;m--){
        one(m);
            for(s=1;s<=2*(n-m);s++){
                printf(" ");
                }
                one(m);
                    printf("\n");
    }
}
void one(int i){
    int u;
    for(u=1;u<=i;u++){
        printf("*");
    }
}