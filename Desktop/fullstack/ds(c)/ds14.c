//implementation of circular queue as array:
#include<stdio.h>
#include<stdlib.h>
#define size 6
int a[size];
int r=0;
int f=0;
void push(int );
int pop();
int isfull();
int isempty();
void show();
int main(){
    int ch;
    int ele;
    do{
    
        printf("\n1.push\n2.pop\n3.show\n4.exit\n");
        printf("enter the  choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            if(isfull()){
                printf("queue is full\n");
            }
            else{
                printf("enter the element\n");
                scanf("%d",&ele);
                push(ele);
            }
            break;
            case 2:
            if(isempty()){
                printf("queue is empty:\n");
            }
            else{
                printf("removed elemet is %d",pop());
            }
            break;
            case 3:
            if(isempty()){
                printf("queue is empty:\n");
            }
            else{
                printf("elements are.......");
                show();
            }
            break;
            case 4:
            printf("exiting\n");
            return 0;
            default:
            printf("invalid choice:\n");
    }
}while(1);
}
int isfull(){
    return f==(r+1)%size;
}
int isempty(){
    return f==r;
}
void push(int ele){
    r=(r+1)%size;
    a[r]=ele;
    printf("element is added:\n");
}
int pop(){
    int ele;
    f=(f+1)%size;
    ele=a[f];
    return ele;
    printf("element is removed:\n");
    }
void show(){
    printf("\n....................................\n");
    if(f<r){
        for(int i=f+1;i<=r;i++){
                 printf("%d\t",a[i]);
        }
    }
    else{
        for(int i=f+1;i<=size;i++){
            printf("%d\t",a[i]);
        }
        for(int i=0;i<=r;i++){
            printf("%d\t",a[i]);
        }
    }
     printf("\n....................................\n");
}    

