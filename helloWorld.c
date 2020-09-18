#include <libion.h>

// Main testing script to run other functions.
int main()
{
    char    hello[] = {"Hello World!"};

    putstr_ion(hello);
    putchar_ion('\n');

    putstr_ion("Testing strrev_ion: ");
    putstr_ion(strrev_ion(hello));
    putchar_ion('\n');
    return 0;
}