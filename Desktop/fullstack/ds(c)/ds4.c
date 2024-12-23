//single linked list:
  struct stack{
    int data;
    struct stack *next;
};
#include<stdio.h>
#include<stdlib.h>
int main(){
    struct stack *f,*l,*n,*guest;
    f=l=n=NULL;
    char ch;
    do{
         n=(struct stack*)malloc(sizeof(struct stack));
        printf("Enter data:");
        scanf("%d",&n->data);
        n->next=NULL;
        if(f==NULL)
        f=n;
        else{
            l->next=n;
        }
        l=n;
        printf("do u want to continue....(y/n)");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch!='n');
    guest=f;
    while(guest!=NULL){
        printf("%d\t",guest->data);
        guest=guest->next;
        }

}
