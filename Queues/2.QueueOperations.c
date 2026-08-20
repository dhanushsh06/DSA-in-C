#include<stdio.h>
int queue[5];
int front = -1;
int rear = -1;

void enqueue(int value){
    if(rear == 5-1){
        printf("Queue is overflow\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d inserted\n",value);
        
    }
}    

    void dequeue()
    {
        if(front == -1 || front >= rear){
            printf("Queue is empty\n");
        }
        else{
            printf("%d removed\n",queue[front]);
            front++;
        }
    }

    void peek()
    {
        if(front == -1 || front > rear){
            printf("Queue is empty\n");
        }
        else{
            printf("First Element is: %d\n",queue[front]);
        }
    }

    void display()
    {
        if(front == -1 || front > rear){
            printf("Queue is empty\n");
        }
        else{
            printf("Queue Elements\n");
            for(int i = front; i <= rear; i++){
                printf("%d ",queue[i]);
            }
            printf("\n");
        }
    }

void main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    peek();
    display();
    dequeue();
    peek();
    display();
}