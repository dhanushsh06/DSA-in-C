#include <stdio.h>

#define MAX 10

int stack[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int value)
{
    if (top1 + 1 == top2)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top1++;
        stack[top1] = value;
    }
}

void push2(int value)
{
    if (top1 + 1 == top2)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top2--;
        stack[top2] = value;
    }
}

void pop1()
{
    if (top1 == -1)
    {
        printf("Stack 1 Underflow\n");
    }
    else
    {
        printf("Popped from Stack 1: %d\n", stack[top1]);
        top1--;
    }
}

void pop2()
{
    if (top2 == MAX)
    {
        printf("Stack 2 Underflow\n");
    }
    else
    {
        printf("Popped from Stack 2: %d\n", stack[top2]);
        top2++;
    }
}

void display()
{
    int i;

    printf("Stack 1: ");

    for (i = 0; i <= top1; i++)
    {
        printf("%d ", stack[i]);
    }

    printf("\nStack 2: ");

    for (i = MAX - 1; i >= top2; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    push1(10);
    push1(20);
    push1(30);

    push2(100);
    push2(200);
    push2(300);

    display();

    pop1();
    pop2();

    display();

    return 0;
}