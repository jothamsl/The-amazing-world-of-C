#include <stdio.h>

// Enumeration types can also be declared without giving them a name
enum { buffersize = 256, };

int main(void)
{
    static unsigned char buffer [buffersize] = {0};
    return 0;
}
