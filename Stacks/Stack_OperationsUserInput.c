#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;
void push(int value)
{
    if (top == MAX - 1){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        stack[top] = value;
        printf("%d Pushed\n", value);
    }
}

void pop()
{
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("\n%d removed from Stack\n", stack[top]);
        top--;
    }
}

void peek()
{
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("TOP of Stack is: %d\n", stack[top]);
    }
}

void display()
{
    if(top == -1){
        printf("Stack is Empty\n");
    }
    else{
        printf("Stack: ");
        for(int i = top; i >= 0; i--){
            printf("%d ", stack[i]);
        
        }
    }
}

void main()
{
    int n, value;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        scanf("%d", &value);
        push(value);
    }
    display();
    pop();
    peek();
    display();
}