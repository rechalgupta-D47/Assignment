#include<stdio.h>
int main()
{
	int d,w,y;
	printf("Enter number of days:");
	scanf("%d",&d);
	y=d/365;
	d=d%365;
	w=d/7;
	d=d%7;
	printf("Years     Weeks     Days\n  %d        %d         %d",y,w,d);
	return 0;
	
}