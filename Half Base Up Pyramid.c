#include<stdio.h>
int main()
{
	for(int i=5;i>=1;i--)
	{
		printf("\n");
		for(int j=1;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}