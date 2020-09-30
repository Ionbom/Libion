#include <libion.h>

// Unit test for listprepend_ion
int main()
{
    t_list *list;
    char str1[] = {"This is test string 1.\n"};
    char str2[] = {"This is another test string.\n"};

    list = listnew_ion(str1);
    list = listprepend_ion(list, str2);
    putstr_ion(list->data);
    putstr_ion(list->next->data);
    return 0;
}