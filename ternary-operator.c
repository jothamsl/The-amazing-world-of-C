#include <stdio.h>

int main(void)
{
    /* The ternary operator "?" evaluates its first operand, and, if the resulting value is
       not equal to zero, evaluates its second operand. Otherwise, it evaluates its third
       operand */

    int a , b = 1, c = 2, d = 0;
    a = b ? c : d;

    // ^ This is equivalent to:
    if (b)
        a = c;
    else
        a = d;
    
    int x = 5; 
    int y = 42;
    printf("%i, %i\n", 1 ? x : y, 0 ? x : y); // Outputs "5, 42"

    /* The condiational operator can be nested. For example, the following code determines
     * the bigger of three numbers
     *
     * big = a > b ? (a > c ? a : c) : (b > c ? b : c);
     * */

    // The following writes even integers to one file and odd int to another file
    FILE *even, *odds; 
    int n = 10;
    int k = 0;

    even = fopen("even.txt", "w");
    odds = fopen("odds.txt", "w");

    for(k = 1; k < n + 1; k++) 
    {
        k % 2 ? fprintf(odds, "\t%5d\n", k) : fprintf(even, "\t%5d\n", k);
    }
    fclose(even);
    fclose(odds);
    return 0;
}
