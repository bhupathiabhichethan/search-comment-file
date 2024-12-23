#include<stdio.h>
int main(){
    int dsum(int);
    int n,sum;
for(n=6701;n<=6999;n++){
    sum=dsum(n);
    while(sum>9){
        sum=dsum(n);
    }
    if(sum==9){
        printf("%d\n",n);
    }
}
return 0;
}

int dsum(int n){
    int sum=0,d;
    while(n>0){
        d=n%10;
        sum+=d;
        n=n/10;
}
return sum;
}