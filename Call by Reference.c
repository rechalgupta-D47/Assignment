#include<stdio.h>
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int p,q;
	printf("Enter value of p:");
	scanf("%d",&p);
	printf("Enter value of q:");
	scanf("%d",&q);
	printf("\nValues before swap:\np=%d\nq=%d",p,q);
	swap(&p,&q);
	printf("\nValues after swap:\np=%d\nq=%d",p,q);
}