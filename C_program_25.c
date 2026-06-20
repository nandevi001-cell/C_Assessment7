#include<stdio.h>
void disp_single_digit_prime(int);
int main()
{
	int x;
	disp_single_digit_prime(x);
}
void disp_single_digit_prime(int x)
{
	int count=0,ones;
	printf("Enter a number:");
	scanf("%d",&x);
	while(x>0)
	{
		ones=x%10;
		if(ones==2 || ones==3 || ones==5 || ones==7)
		{
			count=count+1;
		}
		x=x/10;
	}
	printf("Enter the total number of single digit prime number:%d",count);
}
