#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
    int data;
    struct tree *left, *right;
} tree;

tree *root = NULL;

// Function declarations
tree *create(tree *t, int ele);
void preorder(tree *t);
void inorder(tree *t);
void postorder(tree *t);
int search(tree *t, int ele);
int total(tree *t);

int ele;

int main() {
    int ch;

    do {
        printf("\n1. Create Node\n");
        printf("2. Preorder Traversing\n");
        printf("3. Inorder Traversing\n");
        printf("4. Postorder Traversing\n");
        printf("5. Search\n");
        printf("6. Total Elements\n");
        printf("7. Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter Element to Insert: ");
                scanf("%d", &ele);
                root = create(root, ele);
                printf("\nElement inserted in the tree\n");
                break;
            case 2:
                if (root == NULL) {
                    printf("Tree is empty\n");
                } else {
                    printf("Preorder Traversal: ");
                    preorder(root);
                    printf("\n");
                }
                break;
            case 3:
                if (root == NULL) {
                    printf("Tree is empty\n");
                } else {
                    printf("Inorder Traversal: ");
                    inorder(root);
                    printf("\n");
                }
                break;
            case 4:
                if (root == NULL) {
                    printf("Tree is empty\n");
                } else {
                    printf("Postorder Traversal: ");
                    postorder(root);
                    printf("\n");
                }
                break;
            case 5:
                printf("Enter Element to Search: ");
                scanf("%d", &ele);
                if (search(root, ele)) {
                    printf("Element found in the tree\n");
                } else {
                    printf("Element not found in the tree\n");
                }
                break;
            case 6:
                printf("Total Elements in the Tree: %d\n", total(root));
                break;
            case 7:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (1);
}

tree *create(tree *t, int ele) {
    if (t == NULL) {
        t = (tree *)malloc(sizeof(tree));
        t->data = ele;
        t->left = NULL;
        t->right = NULL;
        return t;
    } else if (ele < t->data) {
        t->left = create(t->left, ele);
    } else {
        t->right = create(t->right, ele);
    }
    return t;
}

void preorder(tree *t) {
    if (t != NULL) {
        printf("%d ", t->data);
        preorder(t->left);
        preorder(t->right);
    }
}

void inorder(tree *t) {
    if (t != NULL) {
        inorder(t->left);
        printf("%d ", t->data);
        inorder(t->right);
    }
}

void postorder(tree *t) {
    if (t != NULL) {
        postorder(t->left);
        postorder(t->right);
        printf("%d ", t->data);
    }
}

int search(tree *t, int ele) {
    if (t == NULL) {
        return 0;
    }
    if (t->data == ele) {
        return 1;
    } else if (ele < t->data) {
        return search(t->left, ele);
    } else {
        return search(t->right, ele);
    }
}

int total(tree *t) {
    if (t == NULL) {
        return 0;
    }
    return 1 + total(t->left) + total(t->right);
}
