#include <libion.h>

// Unit test for listln_ion, Expected result is "3"
int main()
{
    t_list *list;
    char str1[] = {"This is testing value 1."};
    char str2[] = {"This is testing value 2."};
    char str3[] = {"This is testing value 3."};

    list = listnew_ion(str1);
    listappend_ion(list, str2);
    listappend_ion(list, str3);
    putnbr_ion(listln_ion(list));
    putchar_ion('\n');
    return 0;
}