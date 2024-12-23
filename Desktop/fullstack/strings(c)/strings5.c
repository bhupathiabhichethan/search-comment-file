//contatination of two strings:
#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(b);
    //using function:
    strcat(a,b);
    printf("concatination of two string: ");
    puts(a);
    printf("\n");
    int i,k,l;
    i=k=l=0;
    while(a[i]!='\0'){
        l++;
        i++;
    }
    while(b[i]!='\0'){
        k++;
        i++;
    }
    int j;
    for(j=0,i=l;b[j]!='\0';l++,j++){
        a[i]=b[j];
       
    }
    a[i]='\0';
    printf("concatination of two string: ");
    puts(a);
}