#include <libion.h>

// Unit test for new_elem.
int main()
{
    char str[] = {"This is a test.\n"};
    t_list *test;

    test = new_elem_ion(str);
    putstr_ion(test->data);
    return(0);
}