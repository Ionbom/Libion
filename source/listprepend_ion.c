#include <libion.h>

// This function will prepend a new element to an existing list.
// Then return the new element (head) of said list.
t_list  *listprepend_ion(t_list *list, void *data)
{
    t_list *newHead;
    newHead = listnew_ion(data);
    newHead->next = list;
    return newHead;
}
