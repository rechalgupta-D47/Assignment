#include<stdio.h>
int main()
{
	int m[4][4];
	//Matrix i.e. 2D array insertion.
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("Enter element of a matrix:");
			scanf("%d",&m[i][j]);
		}
	}
	//Printing of inserted matrix.
	printf("\nMatrix of 2D Array looks like this:\n");
	printf("\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of a Matrix looks like this:\n");
	printf("\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%d\t",m[j][i]);
		}
		printf("\n");
	}
}