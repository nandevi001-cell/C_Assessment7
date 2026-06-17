#include<stdio.h>
void disp_sum_all_digits(int);
int main()
{
	int x;
	disp_sum_all_digits(x);
}
void disp_sum_all_digits(int x)
{
	printf("Enter a number:");
	scanf("%d",&x);
	int ones,sum=0;
	while(x>0)
	{
		ones=x%10;
		sum=sum+ones;
		x=x/10;
	}
	printf("Sum:%d",sum);
}
