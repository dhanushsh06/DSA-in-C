#include<stdio.h>
int main()
{
    int a[45], size, num, pos, i;

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

        printf("Enter the number to insert: ");
        scanf("%d", &num);
        printf("enter the position to insert: ");
        scanf("%d", &pos);

        if (pos > size){
            printf("invalid");
        }
        else{
            for(i = size-1; i >= pos-1; i--){
                a[i+1] = a[i];
            }
            a[pos-1] = num;
            size++;
            printf("After insertion:");
            for (i = 0; i < size; i++)
                 printf("%d ", a[i]);
        }
    }
    return 0;
}