//structure and accessing structure within the structure
typedef struct{
    int dd;
    int mm;
    int yy;
}date;
struct em{
    int eno;
    char ename[10];
    date doj;
}erec1;
#include<stdio.h>
int main(){
    printf("enter the eno");
    scanf("%d",&erec1.eno);
    printf("entet the ename");
    fflush(stdin);
    gets(erec1.ename);
    printf("enter the date of joining");
    scanf("%d%d%d",&erec1.doj.dd,&erec1.doj.mm,&erec1.doj.yy);
    printf("eno=%d\nename=%s\ndoj=%d-%d-%d",erec1.eno,erec1.ename,erec1.doj.dd,erec1.doj.mm,erec1.doj.yy);
}
