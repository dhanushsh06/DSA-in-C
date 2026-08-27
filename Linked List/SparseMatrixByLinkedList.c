#include<stdio.h>
#include<stdlib.h>

struct node{
    int row, value, column;
    struct node *next;
};

void main(){
    struct node *head = NULL;
    struct node *temp;
    struct node *newnode;

    int matrix[4][5] = {
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0},
        {0,2,6,0,0}
    };

    printf("Orginal Matrix");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= 5; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            if(matrix[i][j] != 0){
                newnode = malloc(sizeof(struct node));

                newnode->row = i;
                newnode->column = j;
                newnode->value = matrix[i][j];
                newnode->next = NULL;

                if(head == NULL){
                    head = newnode;
                }
                else{
                    temp->next = newnode;
                }
                temp = newnode;
            }
        }
    }
    printf("\nRow Column Value\n");

    temp = head;
    while(temp != NULL){
        printf("(%d     %d     %d)\n",
            temp->row,
            temp->column,
            temp->value);

        temp = temp->next;
    }
}