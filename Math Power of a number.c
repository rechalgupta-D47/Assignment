#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	printf("Enter any number:");
	scanf("%d",&x);
	printf("Enter another number:");
	scanf("%d",&y);
	z=pow(x,y);
	printf("Value of %d^%d is %d.",x,y,z);
	return 0;
}