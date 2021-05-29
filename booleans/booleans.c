#include <stdio.h>
#include <stdbool.h> // Using this header file allow you to use 'bool' as a
                     // Boolean data type

int main(void)
{
    bool x = true; // equivalent to x = 1
    bool y = false; // equivalent to y = 0
    _Bool z = true; // Can be using instead of 'bool'

    if (x) // Functionally equivalent to if (x != 0) or if (x != false)
    {
        puts("This will print");
    }
    if (y) // Functionally equivalent to if (y == 0) or if (y == false)
    {
        puts("This will not print");
    }
    if (z)
    {
        puts("This will also print out");
    }
    return 0;
}
