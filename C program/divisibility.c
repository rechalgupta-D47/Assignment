#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is divisible by 2.\n",a);
	}
	else
	{
	printf("%d is NOT divisible by 2.\n",a);
    }
	return 0;
}