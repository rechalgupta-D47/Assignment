#include<stdio.h>
int main()
{
    int n,sum=0; float avg=0;
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
        avg=avg+(a[i]/n);
        sum=sum+a[i];
        printf("%d\t",a[i]);
    }
    printf("\nSum of elements of array:%d",sum);
    printf("\nAverage of elements of array:%f",avg);
    return 0;
}