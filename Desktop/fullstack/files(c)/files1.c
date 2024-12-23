//write charecter by charecter to a text file:
#include<stdio.h>
int main(){
    FILE *fp;
    char a[100];
    fp=fopen("file.txt","w");
    printf("enter the string:");
    gets(a);
    int i;
    for(i=0;a[i]!='\0';i++){
    fputc(a[i],fp);//for writing charecter by charecter to a text file we use fputc:
    }
    fclose(fp);
    printf("file saved");
}