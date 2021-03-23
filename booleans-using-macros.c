#include <stdio.h>

/* C of all versions, will effectively treat any value other than 0 as true
* for comparison operators and the integer value 0 as false. If you don't 
* have '_Bool' or 'bool', you could simulate a Boolean data type in C using
* '#define' macros.*/ 

#define bool int 
#define true 1 
#define false 0

int main(void)
{

#include <stdbool.h> // Using this header file allow you to use 'bool' as a
    bool x = true; // equivalent to x = 1
    bool y = false; // equivalent to y = 0

    if (x) // Functionally equivalent to if (x != 0) or if (x != false)
    {
        puts("This will print");
    }
    if (y) // Functionally equivalent to if (y == 0) or if (y == false)
    {
        puts("This will not print");
    }

    return 0;
}
