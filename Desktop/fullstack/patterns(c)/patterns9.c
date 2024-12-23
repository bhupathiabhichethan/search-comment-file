/*
HOUR GLASS PATTERN
* * * * *
 * * * *
  *   *
    *
  *   *
 * * * *
* * * * *    
*/
#include<stdio.h>
#include "patterns.h"
int main(){
int n;
name(&n);
int i,j,m,p;
for(i=1;i<=n;i++){
  if(i==n-1){
    continue;
  }
  else if(i==n-2){
    for(j=1;j<=i-1;j++){
      printf(" ");
    }
    printf("*   *\n");
  }
  else{
    for(m=1;m<=i-1;m++){
      printf(" ");
    }
    for(p=1;p<=n-i+1;p++){
      printf("* ");
    }
    printf("\n");
  }
}
  //------lower half of the hourglass-------
  for(i=n-2;i>=1;i--){
    if(i==n-2){
      for(j=1;j<=i-1;j++){
      printf(" ");
    }
    printf("*   *\n");
    }
    else{
       for(m=1;m<=i-1;m++){
      printf(" ");
    }
    for(p=1;p<=n-i+1;p++){
      printf("* ");
    }
    printf("\n");
    }
}

}