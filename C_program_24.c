#include<stdio.h>
void disp_two_digit_square(int);
int main()
{
	int x;
	disp_two_digit_square(x);
}
void disp_two_digit_square(int x)
{
	int count=0,i;
	printf("Enter a number:");
	scanf("%d",&x);
	while(x>0)
	{
		i=x%100;
		if(i==16 || i==25 || i==36 || i==49 || i==64 || i==81)
		{
			count=count+1;
		}
		x=x/10;
	}
	printf("Enter the total number of two digit perfect square number:%d",count);
}
