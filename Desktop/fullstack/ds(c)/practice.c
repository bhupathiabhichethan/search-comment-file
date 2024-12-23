//binary tree implementation:
#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
    int data;
    struct tree* left,*right;
}tree;
tree *root=NULL;
tree *create(tree * t,int ele);
void inorder(tree *t);
void preorder(tree *t);
void postorder(tree *t);
int search(tree *t,int ele);
int total(tree *t);
int main(){
    int flag;
    int ch;
    int ele;
    do{
        printf("\n1.Create\n2.Inorder\n3.Preorder\n4.Postorder\n5.Search\n6.Total\n7.Exit\n");
        printf("choose choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter the data:");
            scanf("%d",&ele);
            root=create(root,ele);
            printf("element is added:\n");
            break;
            case 2:
            printf("inorder of tree is .....\n");
            inorder(root);
            break;
            case 3:
            printf("preorder pf tree is.....\n");
            preorder(root);
            break;
            case 4:
            printf("postorder of tree is.....\n");
            postorder(root);
            break;
            case 5:
            printf("enter the element to search:");
            scanf("%d",&ele);
            flag=search(root,ele);
            if(flag==0){
                printf("element is not found\n");
            }
            else{
                printf("element is found\n");
                }
            break;
            case 6:
             printf("total nodes in tree is...%d\n",total(root));
            
            break;
            case 7:
            printf("exiting from the program:\n");
            return 0;
            default:
            printf("invalid choice:\n");
        }

    }while(1);
    return 0;
}
tree* create(tree* t,int ele){
    if(t==NULL){
        t=(tree *)malloc(sizeof(tree));
        t->data=ele;
        t->left=NULL;
        t->right=NULL;
        return t;
        }
        else if(ele>t->data){
            t->right=create(t->right,ele);
        }
        else if(ele<t->data){
            t->left=create(t->left,ele);
            }
            return t;
    }
void inorder(tree * t){
    if(t!=NULL){
        inorder(t->left);
        printf("%d\n",t->data);
        inorder(t->right);
        }
}    
void preorder(tree * t){
    if(t!=NULL){
        printf("%d\n",t->data);
        preorder(t->left);
        preorder(t->right);
        }
        }
void postorder(tree * t){
    if(t!=NULL){
        postorder(t->left);
        postorder(t->right);
        printf("%d\n",t->data);
        }
        }
int search(tree *t,int ele){
   if(t==NULL){
    return 0;
   }
   else if(t->data==ele){
        return 1;
   }
   else if(t->data>ele){
             return search(t->left,ele);
   }
   else{
    return search(t->right,ele);
    }
}        
int total(tree * t){
    if(t==NULL){
        return 0;
    }
    return 1+ total(t->left) +total(t->right);
}