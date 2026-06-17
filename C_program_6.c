#include<stdio.h>
void disp_2digit_odd_below20(int);
int main()
{
	int x;
	disp_2digit_odd_below20(x);
}
void disp_2digit_odd_below20(int x)
{
	x=11;
	while(x<=20)
	{
		if(x%2!=0)
		{
			printf("%d\n",x);
		}
		x=x+1;
	}
}
