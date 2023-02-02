#include<stdio.h>
int main()
{
	long int l1,b1,h1,l2,b2,h2,v1,v2,num;
	l1=10;
	b1=50;
	h1=25;
	l2=2;
	b2=5;
	h2=1;
	v1=l1*b1*h1*1000000;
	v2=l2*b2*h2;
	num=v1/v2;
	printf("Number of bricks in a wall of length %ld m,breadth %ld m and height %ld m where dimensions of brick is length %ld cm,breadth %ld cm and height %ld cm is %ld sq.cm",l1,b1,h1,l2,b2,h2,num);
	return 0;
}