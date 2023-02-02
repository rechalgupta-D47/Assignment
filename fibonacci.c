#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,sum=0;
	printf("Enter number of terms of fibonacci series:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	    sum=sum+a;
		c=a+b;
		printf("%d\t",a);
		a=b;
		b=c;
	}
	printf("\nSum of %d terms of fibonacci series is %d.",n,sum);
	return 0;
}