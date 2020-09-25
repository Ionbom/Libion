#include <libion.h>

// Unit test for range_ion.
int main(int argc, char *argv[])
{
    int val, min, max;

    if(argc != 4)
    {
        putstr_ion("Wrong number of arguments! Please enter a value, min, and max.\n");
        return 1;
    }
    val = atoi_ion(argv[1]);
    min = atoi_ion(argv[2]);
    max = atoi_ion(argv[3]);
    putnbr_ion(range_ion(val, min, max));
    putchar_ion('\n');
    return 0;
}