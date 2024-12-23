//implementation of stack as array:
#include<stdio.h>
#include<stdlib.h>
#define N 10
int a[N];
int ele,top=0;
void push(int );
int pop();
void display();
int isFULL();
int isEMPTY();
int main(){
    int ch;
    char a;
    do{
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                if(isFULL()){
                    printf("stack is full:\n");
                }
                else{
                printf("adding a element:\n");
                printf("enter the value of element:");
                scanf("%d",&ele);
                push(ele);
                }
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
                    printf("\n");
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
int isFULL(){
    return top==N;
}
int isEMPTY(){
    return top==0;
}
void push(int ele){
    a[top]=ele;
    top++;
    printf("element is added:");
}
int pop(){
    top--;
    return a[top];
}
void display(){
    int i=top;
    printf("\n-----------------------------\n");
    while(i!=0){
        printf("%d\t",a[--i]);
    }
    printf("\n-------------------------------");
}
