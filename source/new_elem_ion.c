#include <libion.h>

// This function will create a new linked list element,
//and set the value of the "next" pointer to null.

t_list *new_elem_ion(void *data)
{
    // 1. create new pointer to elem
    t_list *newElem = (t_list*)malloc(sizeof(t_list));
    if(newElem == NULL)
    {
        putstr_ion("Error creating new list element.\n");
        return(NULL);
    }
    // 2. malloc size of data to data of elem
    // what does this malloc exactly? size of pointer? of actual data?
    newElem->data = malloc(sizeof(data));
    // 3. assign data to data of elem
    newElem->data = data;
    // 4. assign NULL to next of elem
    newElem->next = NULL;
    // 4. return pointer to elem
    return(newElem);
}