#include <libion.h>

// Unit test for itoa_ion.
int main()
{
    int     i;
    char    str[256];

    i = -0;
    putstr_ion("Testing itoa_ion with ");
    putnbr_ion(i);
    putstr_ion(": ");
    itoa_ion(i, str);
    putstr_ion(str);
    putstr_ion("\n");
    return 0;
}