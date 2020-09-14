#include <libion.h>

// This function takes a character array and outputs an integer
// If value is out of bounds of integer type, will overflow.

int atoi_ion(char *str)
{
    int out;

    out = 0;
    while(*str != '\0' && *str <= ' ')
    {
        str++;
    }
    while(*str != '\0' && *str >= '0' && *str <= '9')
    {
        out = (out * 10) + (*str - '0');
        str++;
    }
    return out;
}
