#include <stdio.h> 

int main(void)
{
    /* 
     * When logical operations like AND (&&), NOT (!), OR (||) etc are performed in C,
     * you can easily evaluate these operations simply and at a high level. But when
     * dealing with programs that deal with hardware, you often have to manipulate 
     * individual bits in numbers.
     *
     *
     * For example:
     * Here are all possible results of an AND operation between two one-bit numbers:
     *
     * -----------------
     * x  |  y  | result
     * -----------------
     * 0  |  0  |   0
     * 1  |  0  |   0
     * 0  |  1  |   0
     * 1  |  1  |   1
     *
     * The result of and is only one if both values are one. When you comnine two numbers
     * with the AND operator, each bit of one number is evaluated with AND along with
     * the corresponding bit of the other number.
     *
     *         |        Binary          | Hex
     * --------|------------------------|-----
     * x       | 0  1  1  0  1  0  1  1 | 0x6B
     * --------|------------------------|-----
     * y       | 1  1  0  1  0  0  1  0 | 0xD2
     * --------|------------------------|-----
     * x AND y | 0  1  0  0  0  0  1  0 | 0x42
     * 
     * In C, the logical AND operation is a single ampersand (&);
     *
     * The OR operation works similarly, the difference is that the result will be one if
     * either x or y is a one.
     *
     * -----------------
     * x  |  y  | result
     * -----------------
     * 0  |  0  |   0
     * 1  |  0  |   1
     * 0  |  1  |   1
     * 1  |  1  |   1
     *
     *         |        Binary          | Hex
     * --------|------------------------|-----
     * x       | 0  1  1  0  1  0  1  1 | 0x6B
     * --------|------------------------|-----
     * y       | 1  1  0  1  0  0  1  0 | 0xD2
     * --------|------------------------|-----
     * x AND y | 1  1  1  1  1  0  1  1 | 0xFB
     * 
     * In C, the logical OR operation is the vertical bar (|);
     */

    int v = 0b01101011;
    int r = 0b11010010;
    printf("v: %d, r: %d\n", v, r);
    printf("AND Operation: %d\n", v & r);
    printf("OR Operation: %d\n", v | r);
}
