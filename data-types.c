#include <stdio.h>

int main(void) 
{
    // Basic C data types
    // The "unsigned" keyword pushes value range from 0 to max

    // Int
    // These are simple digit values*/

    int a = 21;            // Integer values from −32,768 to 32,767
    signed int b = 249;    // Signed Integer values from −32,768 to 32,767
    unsigned int c = 4902; // Unsigned Integer values from 0 to 65,535
    
    // Char 
    // Uses ascii chart for number to letter e.g 90 -> Z
    // Can be used for specific character values uses literal
   
    char d = 85;           // Char values from −128 to 127
    signed char e = 'A';   // Signed Char values from -128 to 127
    unsigned char f = 'g'; // Unsigned Char values from 0 to 255

    // Floats & double 
    // These are irrational numbers
    // There are no signed and unsigned forms of float and double
   
    float g = 4.3;         // Float  
    double h = 4.325;      // Double 
    long i = 1;            // long are often 4 to 8 bytes
    long long j = 0;       // Guaranteed to be at least 8 bytes
}
