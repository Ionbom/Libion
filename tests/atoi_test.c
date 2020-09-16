#include <libion.h>

// Unit test for the atoi function in the libion library.
int main()
{
    char str[] = {"1234"};
    
    putstr_ion("Testing Atoi with ");
    putstr_ion(str);
    putstr_ion(": ");
    putnbr_ion(atoi_ion(str));
    putchar_ion('\n');
    return 0;
}