//Write a program to count total number of notes in given amount:
#include<stdio.h>
int main(){
    int amount,n;
    int notes;
    printf("enter the amount");
    scanf("%d",&amount);
    printf("no of 10 ruppes notes in %d are/n :",amount);
    n=amount;
    notes=n/10;
    printf("%d",notes);
    printf("no of 20 ruppes notes in %d are/n :",amount);
    notes=n/20;
    printf("%d",notes);
    
    }