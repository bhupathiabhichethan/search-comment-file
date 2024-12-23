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
    printf("insert data at beginig:");

}