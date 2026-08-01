#include<stdio.h>
int main()
{
    int a[45], size, pos, i;

    printf("Enter the size: ");
    scanf("%d", &size);

        printf("Enter the elements: ");
        for(i = 0; i < size; i++ ){
            scanf("%d", &a[i]);
        }
        printf("Enter the position to be deleted: ");
        scanf("%d", &pos);
    
        if(pos > size){
            printf("invalid");
        }
        else{
            for (i = pos-1; i < size-1; i++){
                a[i] = a[i+1];
            }
            size--;
            printf("Array After Deletion:");
            for (i = 0; i < size; i++){
            printf("%d ", a[i]);
            }
        }
        return 0;
        }