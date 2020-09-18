#include <libion.h>

// Recursive function that will take an integer and output it to the terminal.
// Uses an unsigned int to prevent overflow when -2147483648 is entered.
void putnbr_ion(int nb)
{
    unsigned int    i;

    i = 0;
    if(nb < 0)
    {
        putchar_ion('-');
        i = nb * -1;
    }
    else
    {
        i = nb;
    }
    if(i >= 10)
    {
        putnbr_ion(i / 10);
    }
    putchar_ion((i % 10) + '0');
}