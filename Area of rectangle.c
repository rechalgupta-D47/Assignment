#include<stdio.h>
int main()
{
	float l,b,area;
	printf("Enter length of rectangle(in cm):");
	scanf("%g",&l);
	printf("Enter breadth of rectangle(in cm):");
	scanf("%g",&b);
	area=l*b;
	printf("The area of rectangle of length %g cm and width %g cm is %g sq.cm.",l,b,area);
	return 0;
}