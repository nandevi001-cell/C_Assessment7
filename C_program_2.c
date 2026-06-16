#include<stdio.h>
void disp_descend(int);
int main()
{
	int x;
	disp_descend(x);
}
void disp_descend(int x)
{
	x=5;
	while(x>=1)
	{
		printf("%d\n",x);
		x=x-1;
	}
}
