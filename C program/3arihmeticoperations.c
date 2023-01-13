#include<stdio.h>
int main()
{
	float a,b,sum,dif,pro,div;
	printf("Enter any number:");
	scanf("%g",&a);
	printf("Enter another number:");
	scanf("%g",&b);
	sum=a+b;
	printf("Sum of two numbers:%g",sum);
	dif=a-b;
	printf("\nDifference of two numbers:%g",dif);
	pro=a*b;
	printf("\nProduct of two numbers:%g",pro);
	div=a/b;
	printf("\nDivision of two numbers:%g",div);
	return 0;
}