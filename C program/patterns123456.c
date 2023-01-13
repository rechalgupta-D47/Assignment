#include<stdio.h>
int main()
{
	int rows;
	printf("Enter number of rows:");
	scanf("%d",&rows);
	

	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("*");
	    }
	printf("\n");
    }
    
    for(int i=1;i<=rows;i++)
    {
    	for(int j=rows;j>=i;j--)
    	{
    		printf("*");
		}
	printf("\n");
	}
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=rows;j++)
		{
			printf("*");
		}
	printf("\n");
	}
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}
	
	for(int i=rows;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
	
	for(int i=rows;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");
	}
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=i;j<rows;j++)
		printf(" ");
		for(int j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		printf("%d",i);
		printf("\n");
	}
	int n=1;
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
		printf("%d\t",n);
		n++;
	    }
	    printf("\n");
	}
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=i;j<rows;j++)
		printf(" ");
		for(int j=1;j<=i;j++)
		printf("* ");
		printf("\n");
	}
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=(rows-1);j>=i;j--)
		printf(" ");
		for(int j=1;j<=(2*i-1);j++)
		printf("*");
		printf("\n");	
	}
	
	for(int i=rows;i>=1;i--)
	{
		for(int j=0;j<rows-i;j++)
		printf(" ");
		for(int j=(2*i-1);j>=1;j--)
		printf("*");
		printf("\n");	
	}
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
		printf("%c",i+64);
	    printf("\n");
	}
	
	
	return 0;
}