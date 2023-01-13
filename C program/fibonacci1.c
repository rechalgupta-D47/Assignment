#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,sum=0;
	printf("Enter last number of fibonacci series:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+a;
		c=a+b;
		printf("%d\t",a);
		a=b;
		b=c;
	}
	printf("%d",sum);
	return 0;
}