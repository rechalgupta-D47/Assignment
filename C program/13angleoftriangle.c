#include<stdio.h>
int main()
{
	int w,x,y,z=180;
	printf("Enter first angle of triangle:");
	scanf("%d",&w);
	printf("Enter second angle of triangle:");
	scanf("%d",&x);
	y=z-(w+x);
    printf("Third angle of triangle is:%d",y);
    return 0;
}