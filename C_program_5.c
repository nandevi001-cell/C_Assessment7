#include<stdio.h>
void disp_odd(int);
int main()
{
	int x;
	disp_odd(x);
}
void disp_odd(int x)
{
	x=1;
	while(x<10)
	{
		if(x%2!=0)
		{
			printf("%d\n",x);
		}
		x=x+1;
	}
}
