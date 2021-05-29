#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{
    char s[10] = "Hello";

    int r, c;
    int l = strlen(s);
    printf("%d\n", l);
    r = floor(sqrt(l));
    c = ceil(sqrt(l));

    for (int i = 0; i < c; ++i)
    {
        for (int j = i; j < l; j = j + c)
            printf("%c", s[j]);
        printf("\n");
    }
    return 0;
}
