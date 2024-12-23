//sorted linked list:
struct stack{
    int data;
    struct stack *next,*prev;
}e;
#include<stdio.h>
#include<stdlib.h>
int main(){
        struct stack *f,*l,*n,*guest,*x,*y;
        char ch;
        f=n=l=NULL;
        int temp,found=0;
        do{
            n=(struct stack *)malloc(sizeof(struct stack));
            printf("enter the data:");
            scanf("%d",&n->data);
            n->next=NULL;
            n->prev=NULL;
            if(f==NULL){
                f=l=n;
            }
            else if(n->data<f->data){
                n->next=f;
                f->prev=n;
                f=n;
            }
            else if(n->data>l->data){
                l->next=n;
                n->prev=l;
                l=n;
            }
            else{
                x=f;
                y=f->next;
                while(!((n->data>x->data)&&(n->data<y->data))){
                    x=x->next;
                    y=y->next;
                }
                x->next=n;
                n->prev=x;
                y->prev=n;
                n->next=y;
            }
            printf("do you want to continue...(y/n)");
            scanf(" %c",&ch);
        }while(ch!='n');
        guest=f;
        while(guest!=NULL){
            printf("%d\t",guest->data);
            guest=guest->next;
        }
        printf("\nenter data to be delated:");
        scanf("%d",&temp);
        if(temp==f->data){
            f=f->next;
            f->prev=NULL;
        }
        else if(temp==l->data){
            l=l->prev;
            l->next=NULL;
        }
        else{
            x=f;
            y=f->next;
            while((y!=NULL) && found==0){
                if(y->data==temp){
                    found=1;
                    x->next=y->next;
                    y->next->prev=x;
                }
                else{
                    x=y;
                    y=y->next;
                }
            }
        }
        if(found==0){
            printf("no such data:");
        }
        else{
        printf("data after delation:\n");
        guest=f;
        while(guest!=NULL){
            printf("%d\t",guest->data);
            guest=guest->next;
        }
        }
}