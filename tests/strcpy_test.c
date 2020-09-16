#include <libion.h>

// Unit test for strcpy.
int main()
{
    char input[] = {"Testing123"};
    char copy[256];

    putstr_ion("Testing strcpy: ");
    strcpy_ion(copy, input);
    putstr_ion(copy);
    putchar_ion('\n');
    return 0;
}