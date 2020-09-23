#include <libion.h>

// Unit test for prime_ion.
int main(int argc, char *argv[])
{
    int nb;

    nb = 12;
    if(argc > 1)
    {
        prime_ion(atoi_ion(argv[1]));
    }
    else
    {
        prime_ion(nb);
    }
    return 0;
}