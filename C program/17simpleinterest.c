#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("Enter principal amount in rupees:");
	scanf("%g",&p);
	printf("Enter time in years:");
	scanf("%g",&t);
	printf("Enter rate of interest:");
	scanf("%g",&r);
	si=p*r*t/100;
    printf("Simple Interest for %g Rs. principal amount with %g%% rate of interest for %g years is:%g Rs.",p,r,t,si);
    return 0;
}