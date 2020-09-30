#include <libion.h>

// This function will return a count of the amount of elements
// in a given linked list.
int     listln_ion(t_list *list)
{
    int i;
    t_list *walker;

    i = 0;
    if(list)
    {
        i = 1;
        walker = list;
        while(walker->next)
        {
            i++;
            walker = walker->next;
        }
    }
    return i;
}