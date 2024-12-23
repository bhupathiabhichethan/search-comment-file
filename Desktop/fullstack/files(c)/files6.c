//Reading records from a text file:
struct em{
    int eno;
    char ename[100];
    float esal;
}erec;
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("file1.txt","rt");
    if(fp==NULL){
        printf("unable to open the source file");
        return 1;
    }
    int i=0;
    while(fscanf(fp,"%d%s%f",&erec.eno,erec.ename,&erec.esal)!=EOF)
    {
        printf("details of emoloyee %d is:\n\n",i+1);
        i++;
        printf("empolye sno:%d\nemploye_name:%s\nemploye_salary:%f\n",erec.eno,erec.ename,erec.esal);
    }
    fclose(fp); 
    printf("DONE");
}