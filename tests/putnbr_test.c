#include <libion.h>

// Unit test for putnbr.
int main()
{
    int i;

    i = 64;
    putstr_ion("Testing putnbr_ion: ");
    putnbr_ion(i);
    putstr_ion("\n");
    return 0;
}