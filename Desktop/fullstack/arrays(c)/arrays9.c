//deelation of an element from an array:
#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the value of n:\t\t");
    scanf("%d",&n);
    printf("enter the elements of an array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        //deleting an element at the begining;
       int i;
        for(i=0;i<n;i++){
            a[i]=a[i+1];
        }
        n--;
        printf("deleting an  element at begigning of an array\n");
        printf("rewriting the array:\n");
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }
printf("\n");
       //deleting an element at the end of an array;
       printf("deleting of an element at the end of an array\n");
       n--;
       for(i=0;i<n;i++){
        printf("%d\t",a[i]);
       }
       printf("\n");
      printf("delating an element at any position\n");
      int pos;
      printf("enter the position(1 to %d): ",n);
      scanf("%d",&pos);
      if(pos<1 || pos >n){
        printf("position is invalid");
      }
      else{
      for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
      }
      }
      n--;
      if(pos<1 || pos >n){
    return 1;
      }
      else{
      printf("rewriting the array");
      for(i=0;i<n;i++){
        printf("%d\t",a[i]);
      }
      }


}