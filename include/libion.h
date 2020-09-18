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
// Outputs an integer to the terminal.
void putnbr_ion(int nb);
// Returns the length of a given character array.
int strlen_ion(char *str);
// This function reverses the order of characters in a string.
char *strrev_ion(char *str);
// This string function takes a source, and copies to destination.
char *strcpy_ion(char *dest, char *str);
// This function takes a character array and outputs an integer
// // If value is out of bounds of integer type, will overflow.
int atoi_ion(char *str);
// This function takes an integer and outputs a string.
char *itoa_ion(int i, char *str);

#endif