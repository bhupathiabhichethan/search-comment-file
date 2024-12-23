//double linked list:
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
        n->next=n->prev=NULL;
        if(f==NULL){
            f=l=n;
        }
        else{
            n->prev=l;
            l->next=n;
        }
        l=n;
        printf("do u want to continue .....(y/n)");
        scanf(" %c",&ch);
    }while(ch!='n');
    guest=f;
printf("forwar list is .....\n");
while(guest!=NULL)
{
printf("%d\t",guest->data);
guest=guest->next;
}
printf("\n");
printf("backward list is.....\n");
    guest=l;
while(guest!=NULL)
{
printf("%d\t",guest->data);
guest=guest->prev;
}
}
