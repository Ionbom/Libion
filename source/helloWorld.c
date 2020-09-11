#include <libion.h>

// Main testing script to run other functions.
int main()
{
    int i;
    char hello[] = {"Hello World! I am a potato\n\0"};

    putstr_ion(hello);
    putstr_ion("Testing strlen_ion, putnbr_ion, and putchar_ion with the above string: ");
    i = strlen_ion(hello);
    putnbr_ion(i);
    putchar_ion('\n');

    putstr_ion("Testing strrev_ion (Currently broken.): ");
    putstr_ion(strrev_ion(hello));
    putchar_ion('\n');
    
    putchar_ion('\n');
    return 0;
}