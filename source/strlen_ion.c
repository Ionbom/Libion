#include <libion.h>

// This function takes a pointer to an array of characters, and outputs it's length.
int strlen_ion(char *str)
{
    int i;

    i = 0;
    while(*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}