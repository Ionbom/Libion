#include <libion.h>

// Unit test for strlen_ion.
int main()
{
    char str[] = {"Success."};

    putstr_ion("Testing strlen_ion with ");
    putstr_ion(str);
    putstr_ion(": ");
    putnbr_ion(strlen_ion(str));
    putstr_ion("\n");
    return 0;
}