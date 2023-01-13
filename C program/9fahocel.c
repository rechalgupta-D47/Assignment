#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature in degree fahrenheit:");
	scanf("%g",&f);
	c=(f-32)*5/9;
	printf("Temperature in degree celsius:%g C",c);
	return 0;
}