#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature in degree centigrade:");
	scanf("%g",&c);
	f=(c*9/5)+32;
	printf("Temperature in degree fahrenheit:%g F",f);
	return 0;
}