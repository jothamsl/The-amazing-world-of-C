#include <stdio.h> 

/* Determining if integer is odd or even using AND*/
_Bool isOdd(unsigned num) 
{
    return num & 1;
}

int main(void)
{
    // Bitwise AND
   
    unsigned num = 0x15;
    unsigned mask = 0x7;

    num &= mask; // assign bitwise operation to num
    printf("%d\n", num); // Output : 5

    // 0x15 in hexedecimal || 00010101 in binary || 21 in decimal (num)
    // 0x7 in hexedecimal  || 00000111 in binary || 7 in decimal (mask)
    // Yields --------------> 00000101 in binary || 5 in decimal 

    // Bitwise OR
    unsigned val = 0x8;
    unsigned or_set = 0x1;

    val |= or_set; 
    printf("%d\n", val); // Output: 9

    // 0x8 in hexedecimal || 00001000 in binary || 8 in decimal (num)
    // 0x1 in hexedecimal || 00000001 in binary || 1 in decimal (mask)
    // Yields -------------> 00001001 in binary || 9 in decimal 
}

