#include<stdio.h>

void disp_count_HCF2(int);

int main()
{
    int x;
    disp_count_HCF2(x);
}

void disp_count_HCF2(int x)
{
    int a, b, i, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    i = 1;

    while(i <= a && i <= b)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
        }

        i = i + 1;
    }

    printf("HCF = %d", hcf);
}
