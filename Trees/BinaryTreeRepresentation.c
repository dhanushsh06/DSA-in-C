#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int x){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));

    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void display(struct node *root){
    if (root == NULL){
        return;
    }

    if(root->left!=NULL|| root->right!=NULL){
        printf("%d -> ",root->data);
        if(root->left != NULL){
            printf("L:%d ",root->left->data);
        }
        if(root->right !=NULL){
            printf("R:%d",root->right->data);
        }
        printf("\n");
    }
    display(root->left);
    display(root->right);
}

void main()
{
    struct node *root;
    root = create(10);

    root->left = create(20);
    root->right = create(30);
    root->left->left = create(40);
    root->left->right = create(50);
    root->right->left = create(60);
    root->right->right = create(70);

    display(root);
}