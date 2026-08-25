#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;
void push(int x){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));

    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void pop(){
    struct node *temp;
    if(top == NULL){
        printf("Stack Underflow\n");
    }
    else{
        temp = top;
        printf("%d poped\n",top->data);
        top = top->next;
        free(temp);
    }
}

void peek(){
     if(top == NULL){
        printf("Stack Underflow\n");
    }
    else{
        printf("Top element: %d\n",top->data);
    }
}

void display(){
    struct node *temp = top;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void main(){
    push(15);
    push(20);
    push(25);
    push(30);

    peek();
    display();

    pop();
    pop();
    peek();
    display();
}