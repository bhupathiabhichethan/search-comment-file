//union and structures comparission
#include<stdio.h>
#include<stdlib.h>
int main(){
    struct em1{
       int no;
        char name[10];
    }e1;
    union em2{
        int no;
        char name[10];
    }e2;
    //  printf("enter the eno");
    //  scanf("%d",&e1.no);
     printf("enter the eno");
     scanf("%d",&e2.no);
     printf("enter the name");
     fflush(stdin);
     gets(e2.name);
    printf("%u\n",sizeof(e1));
    printf("%u\n",sizeof(e2));
    printf("sno=%d\nname:%s",e2.no,e2.name);
}