#include <libion.h>

// This function will create a new linked list element,
//and set the value of the "next" pointer to null.

t_list *new_elem_ion(void *data)
{
    t_list *newElem = (t_list*)malloc(sizeof(t_list));
    if(newElem == NULL)
    {
        putstr_ion("Error creating new list element.\n");
        return(NULL);
    }
    newElem->data = data;
    newElem->next = NULL;
    return(newElem);
}