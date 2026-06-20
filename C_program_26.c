#include<stdio.h>
void disp_biggest_4digit_div7_9(int);
int main()
{
	int x;
	disp_biggest_4digit_div7_9(x);
}
void disp_biggest_4digit_div7_9(int x)
{
    x = 9999;

    while(x >= 1000)
    {
        if(x % 7 == 0 && x % 9 == 0)
        {
            printf("Biggest 4-digit number = %d", x);
            break;
        }

        x = x - 1;
    }
}
