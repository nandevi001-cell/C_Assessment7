#include<stdio.h>
void disp_assend(int);
int main()
{
	int x;
	disp_assend(x);
}
void disp_assend(int x)
{
	x=1;
	while(x<=5)
	{
		printf("%d\n",x);
		x=x+1;
	}
}
