#include<stdio.h>
int main()
{
	int sum_row,sum_col,a[3][3];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Enter element of a matrix:");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEntered Matrix is:\n");
	printf("\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<4;i++)
	{
		sum_row=0;
		sum_col=0;
		for(int j=0;j<4;j++)
		{
			sum_row=sum_row+a[i][j];
			sum_col=sum_col+a[j][i];
		}
		printf("Sum of %d row:%d",i+1,sum_row);
		printf("\n");
		printf("Sum of %d column:%d",i+1,sum_col);
		printf("\n");
	}
}