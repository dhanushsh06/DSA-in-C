#include<stdio.h>
#include<stdlib.h>

int top = -1;
int *stack;
int capacity = 2;

void push(int value)
{
    if(top == capacity - 1){
        capacity = capacity * 2;
        stack = realloc(stack, capacity*sizeof(int));
    }
        top++;
        stack[top] = value;
        printf("%d pushed\n",value);
}

void pop()
{
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("%d removed from top of the stack\n",stack[top]);
        top--;
    }
}

void peek()
{
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("\nTop Element is %d \n",stack[top]);
    }
}

void display()
{
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack: ");
        for(int i = top; i >= 0; i--){
            printf("%d ",stack[i]);
        }
    }
}
void main()
{
    stack = malloc(capacity*sizeof(int));
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    peek();
    pop();
    display();
    peek();
    push(50);
    display();
    free(stack);
}