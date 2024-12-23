//findind string length:
#include<stdio.h>
#include<string.h>
int main(){
    char st[100];
    printf("enter the string: ");
    gets(st);
    //string length using function:
   int l=strlen(st);
    printf("string length is :%d\n",l);
//string length without using function:
int length=0,i=0;
    while(st[i]!='\0'){
        length++;
        i++;
    }
    printf("length of string is %d",length);
}