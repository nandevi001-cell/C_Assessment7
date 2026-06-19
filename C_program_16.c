#include<stdio.h>

void check_prime(int);

int main()
{
    int x;
    check_prime(x);
}

void check_prime(int x)
{
    int i=1, count=0;

    printf("Enter a number: ");
    scanf("%d",&x);

    while(i<=x)
    {
        if(x%i==0)
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
        printf("Not Prime");
    }
}
