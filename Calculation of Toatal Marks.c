#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter marks of Hindi:");
	scanf("%d",&a);
	printf("Enter marks of English:");
	scanf("%d",&b);
	printf("Enter marks of Maths:");
	scanf("%d",&c);
	printf("Enter marks of Science:");
	scanf("%d",&d);
	printf("Enter marks of Computer:");
	scanf("%d",&e);
	f=a+b+c+d+e;
	printf("Total marks:%d",f);
	return 0;
}