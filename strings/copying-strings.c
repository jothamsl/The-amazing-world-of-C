#include <stdio.h>
#include <string.h>

int main(void)
{
    /* Copying using Pointers */

    int a = 10, b;
    char c[] = "abc", *d;

    b = a; // Integer is copied
    a = 20; // Modifying 'a' leaves 'b' unchanged - 'b' is a 'deep copy' of 'a'
    printf("%d %d\n", a, b);

    d = c; // Only copies the address of the string

    c[1] = 'x';
    // Modifies original string - d[1] = 'x' will do exactly the same thing

    printf("%s %s\n", c, d); // "axc axc" will be printed

    /* Copying using standard functions */
    char x[] = "abc";
    char y[8];

    strcpy(y, x); // think "y special equals x"
    printf("%s\n", y); // "abc" will be printed

    return 0;
}
