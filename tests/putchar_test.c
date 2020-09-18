#include <libion.h>

// Unit test for putchar_ion.
int main()
{
    char    c;

    c = 'A';
    putstr_ion("Testing putchar_ion: ");
    putchar_ion(c);
    putstr_ion("\n");
    return 0;
}