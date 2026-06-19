#include<stdio.h>

void check_prime_and_sum14(int);

int main()
{
    int x;
    check_prime_and_sum14(x);
}

void check_prime_and_sum14(int x)
{
    int i=1, count=0, sum=0, ones;

    printf("Enter a number: ");
    scanf("%d",&x);

    i = 1;

    while(i <= x)
    {
        if(x % i == 0)
        {
            count = count + 1;
        }
        i = i + 1;
    }

    int temp = x;

    while(temp > 0)
    {
        ones = temp % 10;
        sum = sum + ones;
        temp = temp / 10;
    }

    if(count == 2 && sum == 14)
    {
        printf("Prime & Sum of Digits is 14");
    }
    else if(count != 2 && sum == 14)
    {
        printf("Not Prime but Sum of Digits is 14");
    }
    else if(count == 2 && sum != 14)
    {
        printf("Prime & Sum of Digits is not 14");
    }
    else
    {
        printf("Not Prime & Sum of Digits is not 14");
    }
}
