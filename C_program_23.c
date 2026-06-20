#include<stdio.h>
void disp_single_digit_square(int);
int main()
{
	int x;
	disp_single_digit_square(x);
}
void disp_single_digit_square(int x)
{
	int count=0,ones;
	printf("Enter a number:");
	scanf("%d",&x);
	while(x>0)
	{
		ones=x%10;
		if(ones==1 || ones==4 || ones==9)
		{
			count=count+1;
		}
		x=x/10;
	}
	printf("Enter the total number of single digit perfect square number:%d",count);
}
