#include <libion.h>

// This function takes an integer and outputs a string.
char *itoa_ion(int num, char *str)
{
    int i;
    int isNegative;

    i = 0;
    isNegative = 0;
    if(num < 0)
    {
        isNegative = 1;
        num = -num;
    }
    while(num > 10)
    {
        str[i] = (num % 10) + '0';
        num = num / 10;
        i++;
    }
    str[i] = num + '0';
    if(isNegative)
    {
        i++;
        str[i] = '-';
    }
    i++;
    str[i] = '\0';
    strrev_ion(str);
    return str;
}