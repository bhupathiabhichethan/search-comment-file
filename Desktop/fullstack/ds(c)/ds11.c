//implementation of stack using linked list:
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
struct stack *top = NULL;
int ele;
void push(int );
int pop();
void display();
int isEMPTY();

int main(){
    int ch;
    char a;

    do{
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        printf("enter the choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("adding a element:\n");
                printf("enter the value of element:");
                scanf("%d",&ele);
                push(ele);
                break;

            case 2:
                printf("delating an element:\n");
                if(isEMPTY()){
                    printf("stack is empty:\n");
                }
                else{
                    printf("delated element is %d",pop());
                }
                break;

            case 3:
                if(isEMPTY()){
                    printf("stack is empty:\n");
                }
                else{
                    printf("stack elements are .....\n");
                    display();
                }
                break;

            case 4:
                printf("exiting the program:\n");
                return 0;
                break;

            default:
                printf("invalid choice:\n");        
    }
    printf("do you want to continue.....\n");
    scanf(" %c",&a);
}while(a!='n');
}
int isEMPTY(){
return (top==NULL);
}
void push(int ele)
{
struct stack *n;
n=(struct stack*)malloc(sizeof(struct stack));
n->data=ele;
n->next=NULL;
if(top==NULL){
    top=n;
}
else{
    n->next=top;
    top=n;
}
printf("element is added:\n");
}
int pop(){
    struct stack *temp=top;
    int ele=top->data;
    top=top->next;
    free(temp); 
    return ele;
}
void display(){
    struct stack *guest;
    guest=top;
    while(guest!=NULL){
        printf("%d\t",guest->data);
        guest=guest->next;
        }
}