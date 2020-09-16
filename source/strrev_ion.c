#include <libion.h>

// This function reverses the order of characters in a string.
char *strrev_ion(char *str)
{
    int i;
    int j;
    char tmp[200];

    i = strlen_ion(str) - 1;
    j = 0;
    while(i >= 0)
    {
        tmp[j] = str[i];
        i--;
        j++;
    }
    tmp[j] = '\0';
    strcpy_ion(str, tmp);
    return str;
}