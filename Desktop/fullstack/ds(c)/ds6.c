//single linked circular list;
struct stack{
    int data;
    struct stack *next;
};
#include<stdio.h>
#include<stdlib.h>
int main(){
    struct stack *f,*l,*guest,*n;
    char ch;
    f=l=n=NULL;
    do{
        n=(struct stack*)malloc(sizeof(struct stack));
        printf("enter the data:");
        scanf("%d",&n->data);
        n->next=f;
        if(f==NULL)
        f=n;
        else{
            l->next=n;
        }
        l=n;
        printf("do u want to continue.....(y/n)");
        scanf(" %c",&ch);
    }while(ch!='n');
    guest=f;
    printf("list is.....\n");
    do{
        printf("%d\t",guest->data);
        guest=guest->next;
    }while(guest!=f);
}