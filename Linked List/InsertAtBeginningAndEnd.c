#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insertBeginning(struct node **head,int value){
    struct node *newnode;
    
    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = *head;
    *head = newnode;
}

void insertEnd(struct node *head,int value){
    struct node *newnode;
    struct node *temp;

    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void display(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void main(){

    struct node *head;
    struct node *second;
    struct node *third;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Original list: ");
    display(head);

    insertBeginning(&head,5);
    printf("\nAfter insertion at beginning: ");
    display(head);

    insertEnd(head,25);
    printf("\nAfter Insertion at End: ");
    display(head);
    
    struct node *temp;
    while(head != NULL){
        temp = head;
        head = head->next;
        free(temp);
    }
}