#include <unistd.h>

void print_ion(char *input);

int main()
{
    write(1, "Hello World!\n", 13);
    print_ion("Hello World!\n");
    return 0;
}