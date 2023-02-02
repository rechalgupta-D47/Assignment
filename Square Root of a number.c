#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,z;
	printf("Enter the number to find its square root:");
	scanf("%g",&x);
	y=sqrt(x);
	printf("Square root of entered number i.e. %g : %g\n",x,y);
	z=pow(x,0.5);
	printf("Square root of entered number i.e. %g : %g",x,z);
	return 0;
}