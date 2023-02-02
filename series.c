#include<stdio.h>
#include<math.h>
int main()
{
	int p,q,add=0;
	printf("enter a number:");
	scanf("%d",&p);
	for(int i=1;i<=p;i++)
	{
		q=pow(i,i+1);
		add=add+q;
	}
	printf("%d",add);
	return 0;
}