#include <libion.h>

// This function takes a source string,
// and copies into the destination string.

char *strcpy_ion(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}