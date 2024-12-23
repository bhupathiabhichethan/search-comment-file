struct que{
    int data;
    struct que *next,*prev;
};
struct que  *f,*r;
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
                printf("enter the element\n");
                scanf("%d",&ele);
                push(ele);
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