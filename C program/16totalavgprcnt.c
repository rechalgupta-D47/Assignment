#include<stdio.h>
int main()
{
	float a,b,c,d,e,sum,avg,prcnt;
	printf("Enter marks of Hindi:");
	scanf("%f",&a);
	printf("Enter marks of English:");
	scanf("%f",&b);
	printf("Enter marks of Maths:");
	scanf("%f",&c);
	printf("Enter marks of Science:");
	scanf("%f",&d);
	printf("Enter marks of Computer:");
	scanf("%f",&e);
	sum=a+b+c+d+e;
	printf("Total marks:%g",sum);
	avg=sum/5;
	printf("\nAverage marks of five subjects:%g",avg);
	prcnt=(sum/500)*100;
	printf("\nPercentage of marks obtained:%g%%",prcnt);
	return 0;
}