#include<stdio.h>
int main()
{
    int arr[10]={3,4,42,52,6,7,9},index=4,element=67,size=7,capacity=10;
    for ( int i=0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    if(size>=capacity)
    {
        printf("Invalid Insertion");
    }
    else{
        for(int i=(size-1);i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }
    printf("\nValue of array after insertion of 67 at index 4:\n");
    for ( int i=0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nValue of array after deletion of value at index 2:\n");
    for (int i = 2; i < 10; i++)
    {
        arr[i]=arr[i+1];
    }
    for ( int i=0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
    return 0;
} 