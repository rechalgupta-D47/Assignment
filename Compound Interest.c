#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,ci,x,y,n;
	printf("Enter principal amount in rupees:");
	scanf("%g",&p);
	printf("Enter time in years:");
	scanf("%g",&t);
	printf("Enter rate of interest:");
	scanf("%g",&r);
	printf("Enter number of times interest applied per time period:");
	scanf("%g",&n);
	x=1+(r/100);
	y=pow(x,n);
	ci=p*y-p;
    printf("Compound Interest for %g Rs. principal amount with %g%% rate of interest for %g years is:%g Rs.",p,r,t,ci);
    return 0;
}