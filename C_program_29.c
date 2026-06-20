#include<stdio.h>

void disp_LCM3(int);

int main()
{
    int x;
    disp_LCM3(x);
}

void disp_LCM3(int x)
{
    int a, b, c, i;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b && a > c)
    {
        i = a;
    }
    else if(b > c)
    {
        i = b;
    }
    else
    {
        i = c;
    }

    while(1)
    {
        if(i % a == 0 && i % b == 0 && i % c == 0)
        {
            printf("LCM = %d", i);
            break;
        }

        i = i + 1;
    }
}
