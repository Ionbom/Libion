#include <libion.h>

// Unit test for strrev_ion.
int main()
{
    char str[] = "This is a test.";

    putstr_ion("Testing putstr_ion with \"");
    putstr_ion(str);
    putstr_ion("\": ");
    putstr_ion(strrev_ion(str));
    putstr_ion("\n");
    return 0;
}