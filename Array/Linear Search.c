#include<stdio.h>
int main()
{
    int a[45], size, Data, i, found=0;

    printf("Enter the size: ");
    scanf("%d", &size);

        printf("Enter the elements: ");
        for(i = 0; i < size; i++ ){
            scanf("%d", &a[i]);
        }
        printf("Enter the Data to search: ");
        scanf("%d", &Data);
    for(i = 0; i < size; i++ )
    {
        if(a[i] == Data){
            printf("The index of Data will be %d",i);
            found = 1;
            break;
        }
    }    
        if(found == 0){
            printf("Data is not found");
        }
        return 0;
    }
