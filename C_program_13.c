#include<stdio.h>
void disp_reverse(int);
int main()
{
    int x;
    disp_reverse(x);
}

void disp_reverse(int x)
{
    int ones, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    while(x > 0)
    {
        ones = x % 10;
        reverse = reverse * 10 + ones;
        x = x / 10;
    }

    printf("Reverse = %d", reverse);
}
