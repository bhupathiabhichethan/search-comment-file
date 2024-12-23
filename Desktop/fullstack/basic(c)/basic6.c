//Write a program to check whether a year is leap year or not:
#include<stdio.h>
int main(){
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
           if(year%400==0){
            printf("its a leap year");
           } 
           else{
            printf("its not a leap year");
           }
        }
     else{
        printf("its a leap year");
     }
    }
    else{
        printf("its a not leap year");
    }
}