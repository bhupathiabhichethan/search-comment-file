//finding given string is palindrome or not:
#include<stdio.h>
#include<string.h>
int main(){
    int palindrome(char [] );
    char s[10];
    printf("enter the string:");
    gets(s);
    int flag=palindrome(s);
    if(flag==1){
        printf("given string is palindrome");
    }
    else{
        printf("its not a palindrome");
    }
}
int palindrome(char n[]){
    char a[10];
    int m=0;
    int i;
    int l=strlen(n);
    for(i=l-1;i>=0;i--){
        a[m]=n[i];
        m++;
    }
    a[m]='\0';
    if(strcmp(a,n)==0){
        return 1;
    }
    else{
        return 0;
    }
}