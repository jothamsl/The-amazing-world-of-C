#include <stdio.h>

int main(void)
{
    /*
     * CPU's are machines built to execute programs. The fundamental building blocks
     * of a CPU are its registers and the instructions passed to it. These registers
     * can be thought of as variables.
     *
     * In a 8080 (8-bit Intel microprocessor produced in 1974), it contains 8-bit
     * registers named A, B, C, D and E. This can be represented in C as:
     */

    unsigned char A, B, C, D, E;

    // CPU's also have a program counter (PC). This can be thought of as a pointer:
    
    unsigned char *pc;

    /* 
     * To the CPU, a program is just a sequence of hexedecimal numbers. Each assembly
     * language instruction on the 8080 corresponds to 1-3 bytes in the program. 
     * Learning about which number corresponds to which instructions is where the 
     * processor data book comes in handy.
     *
     *
     * TIMING
     * ------
     * On a CPU, each instruction takes a certain amount of time and is measured in 
     * cycles. On modern processors, this information can be hard to come by as the 
     * timing depends on so many things. But on older processors like the 8080, the 
     * timing was constant and this information was often provided by the manufacturer.
     */
}
