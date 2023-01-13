#include<stdio.h>
int main()
{
	float r,d,ccf,area;
	printf("Enter radius of a circle in cm:");
	scanf("%g",&r);
	d=2*r;
	printf("Diameter of a circle with radius %g cm:%g cm",r,d);
	ccf=2*3.14*r;
	printf("\nCircumference of a circle with radius %g cm:%g cm",r,ccf);
	area=3.14*r*r;
	printf("\nArea of a circle with radius %g cm:%g sq.cm",r,area);
	return 0;
}
	