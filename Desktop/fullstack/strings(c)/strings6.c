//contatination of more than two strings using string function and without using string function:  
#include<stdio.h>
#include<string.h>
int main(){
    void add(char [] ,char []);
    char a[10],b[10],c[10],d[10];
    printf("enter the first string: ");
    gets(a);
    printf("enter the second string: ");
    gets(b);
    printf("enter the third string: ");
    gets(c);
    printf("enter the four string: ");
    gets(d);
    add(a,b);
    add(b,c);
    add(c,d);
   
}
//using string function:
/*void add(char a[],char b[]){
    strcat(a,b);
 printf("concatination of two strings is : ");
    puts(a);
}*/
//without using string function:
/*
void add(char a[],char b[])
{
    int l,m;
    l=m=0;
    int i,j;
    i=0;
    while(a[i]!='\0'){
        l++;
        i++;
    }
    // printf("length of string is : %d",l);
    while(b[i]!='\0'){
        m++;
        i++;
    }
    // printf("length of string is : %d",m);
    j=l;
int k=0;
    while(b[k]!='\0'){
        a[j]=b[k];
        j++;
        k++;
    }
    a[j]='\0';
    printf("concatination of string is : %s\n",a);
    // puts(a);

}*/
