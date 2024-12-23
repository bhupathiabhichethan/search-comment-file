//double linked circular list;
struct stack{
    int data;
    struct stack *next,*prev;
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
        n->next=NULL; 
        n->prev=NULL;
        if(f==NULL){
        f=n;
        // f->prev=n;
        }
        else{
            l->next=n;
            n->prev=l;
            n->next=f;
            f->prev=n;
        }
        l=n;
        printf("do u want to continue.....(y/n)");
        scanf(" %c",&ch);
    }while(ch!='n');
    printf("forward list is .....\n");
    guest=f;
    // printf("list is.....\n");
    do{
        printf("%d\t",guest->data);
        guest=guest->next;
    }while(guest!=f);
    printf("\n");
    printf("backward list is .....\n");
    guest=l;
    printf("list is.....\n");
    do{
        printf("%d\t",guest->data);
        guest=guest->prev;
    }while(guest!=l);
}