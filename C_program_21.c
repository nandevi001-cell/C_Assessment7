#include<stdio.h>
void disp_total_odd_digits(int);
int main()
{
	int x;
	disp_total_odd_digits(x);
}
void disp_total_odd_digits(int x)
{
	int ones,count=0;
	printf("Enter a number:");
	scanf("%d",&x);
	while(x>0)
	{
	ones=x%10;
		if(ones%2!=0)
		{
			count=count+1;
		}
		x=x/10;
	}
	printf("Total number of odd digits in the number:%d",count);
}
