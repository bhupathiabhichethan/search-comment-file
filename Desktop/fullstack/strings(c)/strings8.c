//sorting the strings:
#include<stdio.h>
#include<strings.h>
int main(){
    char a[5][10];
    char temp[10];
    printf("enter the names of string: ");
    int i;
    for(i=0;i<5;i++){
        gets(a[i]);
    }
    printf("\n");
    printf("before sorting the string : ");
    for(i=0;i<5;i++){
      printf("%s\t",a[i]);
    }
    printf("\n");
    int j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
           if(strcmp(a[j],a[j+1])>0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);
            }
        }
    }
     
    printf("after sorting the names : ");
    for(i=0;i<5;i++){
        printf("%s\t",a[i]);
}
}