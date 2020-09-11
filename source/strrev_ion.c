#include <libion.h>

// This function reverses the order of characters in a string.
// CURRENTLY BROKEN, OUTPUTS EXTRA UNDEFINED CHARACTERS
char *strrev_ion(char *str)
{
    int i;
    int j;

    i = strlen_ion(str);
    j = 0;
    char tmp[i];
    while(i > 0)
    {
        tmp[i - 1] = str[j];
        i--;
        j++;
    }
    str = tmp;
    return str;
}