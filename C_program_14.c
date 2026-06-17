#include<stdio.h>

void disp_interchange_first_last_digit(int);

int main()
{
    int x;
    disp_interchange_first_last_digit(x);
}

void disp_interchange_first_last_digit(int x)
{
    int first, last, temp, div = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &x);

    last = x % 10;

    temp = x;

    while(temp >= 10)
    {
        temp = temp / 10;
        div = div * 10;
    }

    first = temp;

    middle = (x % div) / 10;

    result = last * div + middle * 10 + first;

    printf("Result = %d", result);
}
