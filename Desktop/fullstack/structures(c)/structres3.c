//structure and pointers and accessing structure within the structure
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
    struct em *ptr;
    ptr=&erec1;
    printf("enter the eno");
    scanf("%d",&ptr->eno);
    printf("entet the ename");
    fflush(stdin);
    gets(&ptr->ename);
    printf("enter the date of joining");
    scanf("%d%d%d",&ptr->doj.dd,&ptr->doj.mm,&ptr->doj.yy);
    printf("eno=%d\nename=%s\ndoj=%d-%d-%d",ptr->eno,ptr->ename,ptr->doj.dd,ptr->doj.mm,ptr->doj.yy);
}
