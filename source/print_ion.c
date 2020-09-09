#include <unistd.h>

void print_ion(char *input)
{
    int i;
    char *walker;

    i = 0;
    walker = input;

    while(*walker != '\0')
    {
        i++;
        walker++;
    }
    write(1, input, i);
}