#include<stdio.h>

void disp_count_sum(int);

int main()
{
    int x;
    disp_count_sum(x);
}

void disp_count_sum(int x)
{
    int n, digit, sum, count = 0;

    x = 1;

    while(x < 10000)
    {
        n = x;
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        if(sum == 14)
        {
            count = count + 1;
        }

        x = x + 1;
    }

    printf("Count = %d", count);
}
