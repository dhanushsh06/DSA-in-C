#include<stdio.h>
void main()
{
    int queue[5];
    int Front = 0;
    int rear = 4;

    printf("Enter 5 queue Elements\n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&queue[i]);
    }
    printf("Queue Element\n");
    for(int i = Front; i <= rear; i++){
        printf("%d ",queue[i]);
    }
}