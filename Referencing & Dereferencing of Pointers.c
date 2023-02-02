#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("%d is value of a.\n",a);
	int *p;
	p=&a;
	b=*p;
	a=10;
	c=a;
	
	printf("Value of a:%d\nValue of b:%d\nValue of c:%d\nValue of p:%d\n",a,b,c,p);
	return 0;
}