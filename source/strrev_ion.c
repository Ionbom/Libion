#include <libion.h>

// This function reverses the order of characters in a string.
// CURRENTLY BROKEN, OUTPUTS EXTRA UNDEFINED CHARACTERS

// Remake? copy og string, go to end, put back into original backwards?

char *strrev_ion(char *str)
{
    int i;
    int j;
    char tmp[200];

    i = strlen_ion(str);
    j = 0;
    while(i > 0)
    {
        tmp[i] = str[j];
        i--;
        j++;
    }
    str = tmp; // NEEDS STRCPY, changes str adress to tmp, which is unterminated.
    //strcpy_ion(str, tmp); doesn't work, still odd characters?
    return str;
}