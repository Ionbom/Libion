#ifndef LIBION_H
#define LIBION_H

#ifndef UNISTD_H
#define UNISTS_H
#include <unistd.h>
#endif

// Counts how many characters are in a character array, then prints them.
void putstr_ion(char *input);
// Outputs a single character.
void putchar_ion(char c);
// outputs an integer to the terminal.
void putnbr_ion(int nb);

#endif