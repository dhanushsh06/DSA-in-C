#include <stdio.h>

#define MAX 10

int queue[MAX];

int front1 = 0, rear1 = -1;
int front2 = MAX - 1, rear2 = MAX;

void enqueue1(int value)
{
    if (rear1 + 1 == rear2)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        rear1++;
        queue[rear1] = value;
    }
}

void enqueue2(int value)
{
    if (rear1 + 1 == rear2)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        rear2--;
        queue[rear2] = value;
    }
}

void dequeue1()
{
    if (front1 > rear1)
    {
        printf("Queue 1 Underflow\n");
    }
    else
    {
        printf("Deleted from Queue 1: %d\n", queue[front1]);
        front1++;
    }
}

void dequeue2()
{
    if (front2 < rear2)
    {
        printf("Queue 2 Underflow\n");
    }
    else
    {
        printf("Deleted from Queue 2: %d\n", queue[front2]);
        front2--;
    }
}

void display()
{
    int i;

    printf("Queue 1: ");

    for (i = front1; i <= rear1; i++)
        printf("%d ", queue[i]);

    printf("\nQueue 2: ");

    for (i = front2; i >= rear2; i--)
        printf("%d ", queue[i]);

    printf("\n");
}

int main()
{
    enqueue1(10);
    enqueue1(20);
    enqueue1(30);

    enqueue2(100);
    enqueue2(200);
    enqueue2(300);

    display();

    dequeue1();
    dequeue2();

    display();

    return 0;
}