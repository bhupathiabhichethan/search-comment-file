struct std{
    int sno;
    int phone[20];
    char name[20];
    float marks;
};
#include<stdio.h>
int main(){
    struct std srec[20];
    int n,i,j;
int m;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the details of std:%d\n",i);
        printf("enter the roll no:");
        scanf("%d",&srec[i].sno);
        printf("enter the phone numbers:");
        printf("enter the value of m:");
        scanf("%d",&m);
        for(j=0;j<m;j++){
            scanf("%d",&srec[i].phone[j]);
        }
        printf("enter the name:");
        fflush(stdin);
        scanf("%s",srec[i].name);
        printf("enter the marks:");
        scanf("%f",&srec[i].marks);
    }
    for(i=0;i<n;i++){
        printf("details of std:%d\n",i+1);
        printf("roll no:%d\n",srec[i].sno);
        printf("phone numbers of student %d is\n",i+1);
        for(j=0;j<m;j++){
            printf("%d\t",srec[i].phone[j]);
        }
        printf("\n");
        printf("name:%s\n",srec[i].name);
        printf("marks:%f\n",srec[i].marks);

    }
}