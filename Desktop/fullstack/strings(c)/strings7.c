//comparission of two strings:
#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    printf("Enter the first string:");
    gets(a);
    printf("Enter the second string:");
    gets(b);
    //using string function:
    /*if(strcmp(a,b)==0){
        printf("Both strings are equal\n");
    }
    else if(strcmp(a,b)>0){
        printf("first string is greater then second string\n");
    }
    else{
        printf("second string is greater than first string\n");
    }*/
    //without using string function:
        int i=0;
        int flag=0;
        while((a[i]!='\0') && b[i]!='\0')
            {
                if(a[i]>b[i]){
                    flag=1;
                }
                else if(a[i]<b[i]){
                  flag=-1;
                    }
              i++;
                
            }
            if(flag==0){
                printf("both are equal");
            }
            else if(flag==1){
                printf("string1 is greater than string2");
            }
            else{
                printf("string2 is greater than string1");
            }
}