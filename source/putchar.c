#include <libion.h>

// This outputs a single character to the standard output.

void putchar_ion(char c)
{
    write(1, &c, 1);
}