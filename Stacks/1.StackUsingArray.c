#include<stdio.h>
void main()
{
    int stack[25], n;
    int top = 4;
    printf("Enter the Size for Elements to store: \n");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    for(int i = 0;i < n; i++){
        scanf("%d",&stack[i]);
    }
    printf("Stack\n");
    for(int i = top; i >= 0; i--){
        printf("%d ",stack[i]);
    }
}