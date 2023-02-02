#include<stdio.h>
int main()
{
	int n,product=1;
	printf("Enter a number to find its factorial:");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		product=product*i;
	}
	printf("Factorial of the given number is:%d",product);
	return 0;
}