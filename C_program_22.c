#include<stdio.h>
void disp_total_2digit_odd(int);
int main()
{
	int x;
	disp_total_2digit_odd(x);
}
void disp_total_2digit_odd(int x)
{
	int hundreds,count=0;
	printf("Enter a number:");
	scanf("%d",&x);
	while(x>0)
	{
	hundreds=x/100;
	if(hundreds%2!=0)
	{
		count=count+1;
		}
		x=x/10;	
	}
	printf("Total number of two digit odd numbers:%d",count);
}
