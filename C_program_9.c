#include<stdio.h>
void disp_2digit_ones5(int);
int main()
{
	int x;
	disp_2digit_ones5(x);	
}
void disp_2digit_ones5(int x)
{
	int ones,tens,sum,total=0;
	x=11;
	while(x<100)
	{
		ones=x%10;
		tens=x/10;
		sum=ones+tens;
		if(ones==5)
		{
			total=total+x;
		}
		x=x+1;
	}
		printf("Total sum:%d",total);
}
