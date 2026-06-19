#include<stdio.h>
void check_first_2digits_prime(int);
int main()
{
	int x;
	check_first_2digits_prime(x);
}
void check_first_2digits_prime(int x)
{
	int hundreds,temp,i,count=0;
	printf("Enter a number:");
	scanf("%d",&x);
	hundreds=x%100;
	i=1;
	while(i<=x)
	{
		if(hundreds%i==0)
		{
			count=count+1;
		}
		i=i+1;
	}
	if(count==2)
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime");
	}
}
