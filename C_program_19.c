#include<stdio.h>
void middle_2digits_prime(int);
int main()
{
	int x;
	middle_2digits_prime(x);
}
void middle_2digits_prime(int x)
{
	int temp,i,count=0,middle;
	printf("Enter a number:");
	scanf("%d",&x);
	middle=(x/10)%100;
	i=1;
	while(i<=x)
	{
		if(middle%i==0)
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
