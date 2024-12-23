//implementation of queue as an array:
#include<stdio.h>
#include<stdlib.h>
#define size 5
int que[size];
int front=0,rear=0;
void push(int );
int pop();
void display();
int isfull();
int isempty();
int main(){
    int ch;
    int ele;
    do{
        printf("\n1.add\n");
        printf("2.remove\n");
        printf("3.display\n");
        printf("4.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            if(isfull()){
                printf("queue is full\n");
            }
            else{
                printf("enter element:");
                scanf("%d",&ele);
                push(ele);
            }
            break;
            case 2:
            if(isempty()){
                printf("queue is empty\n");
                }
                else{
                    printf("removed element is %d\n",pop());
                }
                break;
             case 3:
             if(isempty()){
                printf("queu is empty\n");
             }   
             else{
                printf("elements are:\n");
                display();
             }
             break;
            case 4:
             printf("exit\n");
             return 0;
             default:
             printf("invalid choice\n");
             break;
    }

}while(1);
}
int isfull(){
    return rear==size;
}
int isempty(){
    return front==rear;
}
void push(int ele){
    que[rear]=ele;
    rear++;
    printf("element is added\n");
}
int pop(){
    int ele;
    ele=que[front];
    front++;
    return ele;
}
void display()
{
    for(int i=front;i<rear;i++){
        printf("%d ",que[i]);
    }
}