#include<stdio.h>

void check_last_digit_odd(int);

int main()
{
    int x;
    check_last_digit_odd(x);
}

void check_last_digit_odd(int x)
{
    int first, temp, div = 1;

    printf("Enter a number: ");
    scanf("%d", &x);

    temp = x;

    while(temp >= 10)
    {
        temp = temp / 10;
        div = div * 10;
    }

    first = temp;

    if(first % 2 != 0)
    {
        x = x - div;
    }

    printf("%d", x);
}
