#include<stdio.h>
int main()
{
	float x,area;
	printf("Enter side of an equilateral triangle(in cm):");
	scanf("%f",&x);
	area=1.732*x*x/4;
    printf("Area of triangle with side %f cm is:%f sq.cm.",x,area);
    return 0;
}