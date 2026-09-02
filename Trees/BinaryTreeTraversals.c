#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int x)
{
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void inorder(struct node *root)
{
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void preorder(struct node *root)
{
    if(root == NULL){
        return;
    }
    printf("%d ",root->data);
    inorder(root->left);
    inorder(root->right);
}

void postorder(struct node *root)
{
    if(root == NULL){
        return;
    }
    inorder(root->left);
    inorder(root->right);
     printf("%d ",root->data);
}

void main(){
    struct node *root;

    root = create(10);
    root->left = create(20);
    root->right = create(30);
    root->left->left = create(40);
    root->left->right = create(50);
    root->right->left = create(60);
    root->right->right = create(70);
    printf("Preorder: ");
    preorder(root);
    printf("\nInorder: ");
    inorder(root);
    printf("\nPostorder: ");
    postorder(root);
}