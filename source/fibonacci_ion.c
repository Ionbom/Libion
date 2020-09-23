#include <libion.h>

// This function will print up to n fibonacci numbers.
void fibonacci_ion(int n)
{
    int a, b, i;

    a = 0;
    b = 1;
    i = 0;
    while(i < n)
    {
        if(i % 2 == 0)
        {
            a = a + b;
            putnbr_ion(a);
        }
        else
        {
            b = a + b;
            putnbr_ion(b);
        }
        putchar_ion(' ');
        i++;
    }
}