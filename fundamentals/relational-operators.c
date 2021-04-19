#include <stdio.h>

int main(void) {

    // EQUALS "=="

    printf("%d\n", 1==0); // Evaluates to 0
    printf("%d\n", 1 == 1); // Evaluates to 1

    int x = 5;
    int y = 5;
    int *xprt = &x, *yprt = &y;

    printf("%d\n", xprt == yprt); // Evaluates to 0, the operands hold different location addresses
    printf("%d\n", *xprt == *yprt); // Evaluates to 1, the operands point at locations that hold the
    // same value

    // NOT EQUALS "!="
    printf("%d\n", 1 != 0); // Evaluates to 1
    printf("%d\n", 1 != 1); // Evaluates to 0

    // NOT "!"
    printf("%d\n", !1);

    // GREATER THAN ">"
    printf("%d\n", 5 > 4);
    printf("%d\n", 4 > 4);
    printf("%d\n", 4 > 5);

    // LESS THAN "<"
    printf("%d\n", 5 < 4);
    printf("%d\n", 4 < 4);
    printf("%d\n", 4 < 5);

    // GREATER THAN OR EQUAL ">="
    printf("%d\n", 5 >= 4);
    printf("%d\n", 4 >= 4);
    printf("%d\n", 4 >= 5);

    // LESS THAN OR EQUAL "<="
    printf("%d\n", 5 <= 4);
    printf("%d\n", 4 <= 4);
    printf("%d\n", 4 <= 5);

    return 0;
}
