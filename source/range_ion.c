#include <libion.h>

// This function takes a number and two delimiters, 
// and returns a number within those limits.
int range_ion(int value, int min, int max)
{
    if(value > max)
        value = max;
    else if(value < min)
        value = min;
    return value;
}