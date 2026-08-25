#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *rear = NULL;
struct node *front = NULL;


void enqueue(int x){
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if(rear == NULL){
        rear = front = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue(){
    struct node *temp;

    if(front == NULL){
        printf("Queue Underflow\n");
    }
    else{
        temp = front;
        printf("\n%d removed\n",front->data);
        front = front->next;
    
        if(front == NULL){
            rear == NULL;
        }
        free(temp);
    }
}

void display(){
    struct node *temp = front;
    
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();
    dequeue();
    display();
}