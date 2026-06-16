#include<stdio.h>
void disp_sum(int);
int main()
{
	int x;
	disp_sum(x);
}
void disp_sum(int x)
{
	x=0;
	int sum=0;
	while(x<=5)
	{
		sum=sum+x;
		x=x+1;
	}
	printf("sum=%d",sum);
}
