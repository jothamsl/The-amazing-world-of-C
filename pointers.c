#include <stdio.h>

int main(void)
{
    // The address of a variable can be obtained using &
    int val = 3;

    printf("%i\n", val); // 3
    printf("%p\n", &val); // 0x.....

    // Pointers are variables which store the address of another object.
    int x = 4;
    int *y = &x;

    printf("Address of y is %p \n", y);

    // The value in the address of a variable can be obtained using *
    int *val2 = &val;
    printf("%i\n", *val2); // 3
    return 0;
}
