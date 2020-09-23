#include <libion.h>

// This function will print up to n prime numbers.
void prime_ion(int n)
{
    int i, j, a;
    int notPrime;

    i = 0;
    j = 0;
    a = 0;
    notPrime = 0;
    putstr_ion("starting loop.\n");
    while(i < n)
    {
        a++;
        j = 2;
        notPrime = 0;
        while(j < a)
        {
            if(a % j == 0)
            {
                notPrime = 1;
                break;
            }
            j++;
        }
        if(!notPrime)
        {
            putnbr_ion(a);
            putchar_ion(' ');
            i++;
        }
    }
}