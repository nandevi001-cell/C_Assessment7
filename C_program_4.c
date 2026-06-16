#include<stdio.h>
void disp_rsum(int);
int main()
{
	int x;
	disp_rsum(x);
}
void disp_rsum(int x)
{
	x=6;
	int sum=0;
	while(x>=1)
	{
		sum=sum+x;
		x=x-1;
	}
	printf("Sum=%d",sum);
}
