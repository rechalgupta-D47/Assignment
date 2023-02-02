#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			printf("%d",i);
			sum=sum+i;
		}
	}
	if(a==sum)
	printf("Entered number is perfect.");
	else
	printf("Entered number is not a perfect number.");
}