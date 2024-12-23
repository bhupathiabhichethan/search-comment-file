//coping one string to another:
#include<string.h>
#include<stdio.h>
int main(){
    char st[100],dst[100],dt[100],s[100];
    printf("enter string: ");
    gets(st);
    puts(st);
    //using function:
    printf("copied string is: ");
    strcpy(dst,st);
    puts(dst);
    //n words only copy:
    strncpy(dt,st,5);
    printf("copied string is: ");
    puts(dt);
    printf("\n");
    int l=0;
    printf("copied string is: ");
    while(st[l]!='\0'){
        s[l]=st[l];
        l++;
    }
    s[l]='\0';
    printf("%s",s);
}