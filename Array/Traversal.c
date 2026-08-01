#include<stdio.h>
int main()
{
    int a[45], size, i;

    printf("Enter the size: ");
    scanf("%d", &size);

    if(size > 45) {
        printf("Not Applicable");
    }
    else {
        printf("Enter the elements: ");
        for(i = 0; i < size; i++ ){
            scanf("%d", &a[i]);
        }
        printf("Elements of the array:");
        for(i = 0; i < size; i++){
            printf(" %d", a[i]);
        }
    }
    return 0;
}