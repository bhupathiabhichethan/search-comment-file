//writing records to a text file:
struct em{
    int eno;
    char ename[100];
    float esal;
}erec;
#include<stdio.h>
// #include<termios.h>
int main(){
    FILE *fp;
    fp=fopen("file1.txt","w");
    char ch;
    do{
    printf("enter the details of employee:");
    scanf("%d%s%f",&erec.eno,erec.ename,&erec.esal);
    fprintf(fp,"%d\t%s\t%f\n",erec.eno,erec.ename,erec.esal);
    printf("enter choice to continue ..(y/n)\n");
    fflush(stdin);
    scanf("%c",&ch);
    }while(ch!='n');
    fclose(fp);
    printf("DONE");
}