#include <libion.h>

int main()
{
    int i;
    char hello[] = {"Hello World!\n\0"};

    putstr_ion(hello);
    putstr_ion("Testing strlen_ion, putnbr_ion, and putchar_ion with the above string: ");
    i = strlen_ion(hello);
    putnbr_ion(i);

    putchar_ion('\n');
    return 0;
}