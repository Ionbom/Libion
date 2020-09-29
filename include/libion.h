#ifndef LIBION_H
#define LIBION_H

#ifndef UNISTD_H
#define UNISTS_H
#include <unistd.h>
#include <stdlib.h>
#endif

/* The t_list type contains a pointer to another t_list type
// And a void pointer. The data entered will only be a pointer to
// the actual data stored elsewhere. This does not allocate
// memory for the actual stored data. */
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

// Takes a pointer to the first character in a character array and prints the array.
void    putstr_ion(char *str);
// Outputs a single character.
void    putchar_ion(char c);
// Outputs an integer to the terminal.
void    putnbr_ion(int nb);
// Returns the length of a given character array.
int     strlen_ion(char *str);
// This function reverses the order of characters in a string.
char    *strrev_ion(char *str);
// This string function takes a source, and copies to destination.
char    *strcpy_ion(char *dest, char *str);
// This function takes a character array and outputs an integer
// // If value is out of bounds of integer type, will overflow.
int     atoi_ion(char *str);
// This function takes an integer and outputs a string.
char    *itoa_ion(int i, char *str);
// This function will print up to n fibonacci numbers.
void    fibonacci_ion(int n);
// This function will print up to n prime numbers.
void    prime_ion(int n);
// This function takes a number and two delimiters, 
// and returns a number within those limits.
int     range_ion(int value, int min, int max);
// This function will create a new linked list element,
// and set the value of the "next" pointer to null.
t_list  *new_elem_ion(void *data);
// This function will prepend a new element to an existing list.
// Then return the new element (head) of said list.
t_list  *prepend_elem(t_list *list, void *data);

#endif