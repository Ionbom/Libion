#include <libion.h>

// Main testing script to run other functions.
int main()
{
    int i;
    char hello[] = {"Hello World!"};
    char atoi[] = {"2147483649"};
    //char copied[20] = {"initial"};
    char copied2[40];

    putstr_ion(hello);
    putchar_ion('\n');
    putstr_ion("Testing strlen_ion, putnbr_ion, and putchar_ion with the above string: ");
    i = strlen_ion(hello);
    putnbr_ion(i);
    putchar_ion('\n');

    putstr_ion("Testing strrev_ion (Currently broken?): ");
    putstr_ion(strrev_ion(hello));
    putchar_ion('\n');

    putstr_ion("Testing Atoi with ");
    putstr_ion(atoi);
    putstr_ion(": ");
    putnbr_ion(atoi_ion(atoi));
    putchar_ion('\n');

    putstr_ion("Testing strcpy: ");
    strcpy_ion(copied2, hello);
    putstr_ion(copied2);
    
    putchar_ion('\n');
    return 0;
}