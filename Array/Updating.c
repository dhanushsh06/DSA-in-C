#include<stdio.h>
int main()
{
    int a[50], i, size, value, pos;

    printf("Enter the size: ");
    scanf("%d", &size);
    
    printf("Enter the elements of array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position to update the value: ");
    scanf("%d", &pos);
    printf("Enter new value: ");
    scanf("%d", &value);
    
    a[pos-1] = value;

    printf("After updating: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}