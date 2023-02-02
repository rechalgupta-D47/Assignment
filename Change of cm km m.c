#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter length in centimeter:");
	scanf("%g",&a);
	b=a/100;
	printf("Length in meter:%g m",b);
	c=a/1000;
	printf("\nLength in kilometer:%g km",c);
	return 0;
	
}