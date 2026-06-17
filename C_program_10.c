#include<stdio.h>
void disp_2digit_odd_sum_tens7(int);
int main()
{
	int x;
	disp_2digit_odd_sum_tens7(x);
}
void disp_2digit_odd_sum_tens7(int x)
{
	x=11;
	int ones,tens,sum,total=0;
	while(x<100)
	{
		ones=x%10;
		tens=x/10;
		sum=ones+tens;
		if(tens==7 && x%2!=0)
		{
			total=total+x;
		}
		x=x+1;
	}
	printf("Total sum:%d",total);
}
