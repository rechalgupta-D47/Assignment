#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter values of array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}