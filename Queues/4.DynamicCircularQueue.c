#include <stdio.h>
#include <stdlib.h>

int *queue;
int n;
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if ((rear + 1) % n == front)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % n;
    }

    queue[rear] = value;

    printf("%d inserted\n", value);
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d deleted\n", queue[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % n;
    }

    printf("\n");
}

int main()
{
    printf("Enter queue size: ");
    scanf("%d", &n);

    queue = (int *)malloc(n * sizeof(int));

    if (queue == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    enqueue(40);
    enqueue(50);
    enqueue(60);

    display();

    free(queue);

    return 0;
}