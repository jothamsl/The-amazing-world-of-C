#include <stdio.h>
#include <math.h>

/*
 * There are two simple ways in C to define constants
 * Using the "#define" preprocessor
 * Using the "const" keyword
 */

#define PI 3.14159265
#define RADIUS 4
#define NEWLINE '\n'

const int LENGTH = 10;
const int BREADTH = 20;

int main(void)
{
    int circArea = PI * pow(RADIUS, 2);
    printf("Area of circle: %d\n", circArea);

    int squaArea = LENGTH * BREADTH;
    printf("Area of square: %d\n", squaArea);

    printf("%c", NEWLINE);
    return 0;
}
