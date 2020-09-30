#include <libion.h>

// Unit test for listnew_ion.
int main()
{
    char str[] = {"This is a test."};
    t_list *test;

    test = listnew_ion(str);
    putstr_ion("\"data\" field: ");
    putstr_ion(test->data);
    putstr_ion("\n\"next\" field: ");
    if(test->next == NULL)
        putstr_ion("NULL\n");
    else
        putstr_ion("Not NULL\n");
    return 0;
}