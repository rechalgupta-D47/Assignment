#include<stdio.h>
int main()
{
	float l,b,p;
	printf("Enter length of a rectangle in cm:");
	scanf("%g",&l);
	printf("Enter breadth of a rectangle in cm:");
	scanf("%g",&b);
	p=2*(l+b);
	printf("Perimeter of rectangle of length %g cm and breadth %g cm is %g cm.",l,b,p);
	return 0;
}