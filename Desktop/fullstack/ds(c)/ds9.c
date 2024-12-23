//searching elemet:
struct stack{
    int data;
    struct stack *prev,*next;
}e;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct stack *f,*l,*guest,*n;
    char ch;
    int temp,found=0;
    f=l=n=NULL;
    do{
        n=(struct stack*)malloc(sizeof(struct stack));
        printf("enter data:");
        scanf("%d",&n->data);
        n->prev=n->next=NULL;
        if(f==NULL){
            f=l=n;
        }
        else{
            l->next=n;
            n->prev=l;
            l=n;
        }
        printf("do u want to continue.....(y/n)");
        scanf(" %c",&ch);
    }while(ch!='n');
    guest=f;
    printf("enter element to be searched:");
    scanf("%d",&temp);
    while(guest!=NULL){
        if(temp==guest->data){
            found=1;
            break;
        }
        else{
            guest=guest->next;
        }
    }
    if(found==0){
        printf("no such element is found:");
    }
    else{
        printf("element is found:");
    }
}