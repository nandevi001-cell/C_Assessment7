#include<stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
	int x;
	disp_2digit_even_sum6(x);
}
void disp_2digit_even_sum6(int x)
{
	int count=0;
	while(x<=9)
	{
		if(x==2 || x==3|| x==5|| x==7)
		{
			count=count+1;
		}
		x=x+1;
	}
	printf("Total number of single digit prime numbers:%d",count);
}
