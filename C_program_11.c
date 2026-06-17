#include<stdio.h>
void count_total_digits(int);
int main()
{
	int x;
	count_total_digits(x);
}
void count_total_digits(int x)
{
	printf("Enter a number:");
	scanf("%d",&x);
	int ones,count=0;
	while(x>0)
	{
		count=count+1;
		x=x/10;
	}
	printf("Count:%d",count);
}
