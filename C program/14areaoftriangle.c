#include<stdio.h>
int main()
{
	float x,y,z=0.5,area;
	printf("Enter height of a triangle(in cm):");
	scanf("%g",&x);
	printf("Enter base of a triangle(in cm):");
	scanf("%g",&y);
	area=z*x*y;
    printf("Area of triangle with base %g cm and height %g cm is:%g sq.cm.",y,x,area);
    return 0;
}