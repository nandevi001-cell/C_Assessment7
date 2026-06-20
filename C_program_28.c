#include<stdio.h>

void disp_LCM2(int);

int main()
{
    int x;
    disp_LCM2(x);
}

void disp_LCM2(int x)
{
    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a > b)
    {
        i = a;
    }
    else
    {
        i = b;
    }

    while(1)
    {
        if(i % a == 0 && i % b == 0)
        {
            printf("LCM = %d", i);
            break;
        }

        i = i + 1;
    }
}
