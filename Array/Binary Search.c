#include<stdio.h>
int main()
{
    int a[45], size, Data, i, mid, l, r;

    printf("Enter the size: ");
    scanf("%d", &size);

    printf("Enter the elements in sorted way: ");
    for(i = 0; i < size; i++ ){
         scanf("%d", &a[i]);
    }
    printf("Enter the Data to search: ");
    scanf("%d", &Data);
    l = 0;
    r = size - 1;
    while(l <= r){
        mid = (l + r)/2;
        
        if(a[mid] == Data){
            printf("Data is found in the index %d", mid);
            return 0;
        }
        else if(a[mid] > Data){
            r = mid -1;
        }
        else{
            l = mid +1;
        }
    }
    printf("Element not found");
    return 0;
}