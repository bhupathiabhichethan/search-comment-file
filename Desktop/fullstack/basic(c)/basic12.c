//Write a program to input month number and print number of days in that month.
#include<stdio.h>
int main(){
    int n;
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    printf("enter the month number: ");
    scanf("%d",&n);
    int flag;
    if(n==2){
    if(year%4==0){
        flag=1;
        if(year%100==0){
            flag=1;
           if(year%400==0){
            flag=1;
           }
        }
        else{
            flag=0;
        }
    }
    else{
        flag=1;
    }
     else{
    flag=0;
    }   
     }
      }
    if(flag==1){
        printf("number of days are 29");
    }
    else{
        printf("no of days are 28");
    }
    else if(n==4 || n==6 || n==9|| n==11){
        printf("no of days are 30");
    }
    else{
        printf("no of days are 31");
    }
}

