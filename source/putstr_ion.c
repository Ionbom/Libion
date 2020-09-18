#include <libion.h>

// This function counts how many characters are in a character array, then prints that many.
void putstr_ion(char *input)
{
    int     i;
    char    *walker;

    i = 0;
    walker = input;

    while(*walker != '\0')
    {
        i++;
        walker++;
    }
    write(1, input, i);
}