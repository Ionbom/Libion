#include <libion.h>

// This function will append a new element to the end of an
// existing list and return said element.
t_list  *append_elem_ion(t_list *list, void *data)
{
    t_list *newElem;
    t_list *walker;

    walker = list;
    while(walker->next != NULL)
    {
        walker = walker->next;
    }
    newElem = new_elem_ion(data);
    walker->next = newElem;
    return newElem;
}