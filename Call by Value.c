#include<stdio.h>
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	printf("\nValues after swap:\na=%d\nb=%d",a,b);
}
int main()
{
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("\nValues before swap:\na=%d\nb=%d",a,b);
	swap(a,b);
}