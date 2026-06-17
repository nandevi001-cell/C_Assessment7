#include<stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
	int x;
	disp_2digit_even_sum6(x);
}
void disp_2digit_even_sum6(int x)
{
	int ones,tens,sum;
	x=11;
	while(x<100)
		{
	ones=x%10;
	tens=x/10;
	sum=ones+tens;
			if(ones%2==0 && sum==6)
			{
				printf("%d\n",x);
			}
			x=x+1;
		}
}
