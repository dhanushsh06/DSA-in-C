#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void main(){
    
    struct node *head;
    struct node *second;
    struct node *third;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    printf("Forward Traversal: ");
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("\nBacward Traversal: ");
    temp = third;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }

}