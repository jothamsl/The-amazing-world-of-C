#include <stdio.h>

int main(void)
{
    /*
     * Storages classes define the scope and life-time of
     * variables and functions within a c program.
     *
     * There are four different storage classes:
     * - auto
     * - register
     * - static
     * - extern
     */

    /*
     * Auto
     * ----
     *
     * The auto storage class is the default storage class
     * for all local variables.
     *
     * NOTE: 'auto' can only be used within functions (local variables)
     */

    {
        int mount;
        auto int month;
    }

    /*
     * Register
     * --------
     *
     * The register storage class is used to define local variables that should
     * be stored in a register instead of RAM.
     *
     * The register should only be used for variables that require quick access
     * such as counters.
     *
     */

    {
        register int miles;
    }

    /*
     * Static
     * ------
     *
     *  The static storage class instructs the compiler to keep a local variable
     *  in existence during the life-time of the program instead of creating
     *  and destroying it each time it comes into and goes out of scope.
     *  */

    {
        static int i = 5;
    }

    /*
     * Extern
     * ------
     *
     *  The extern storage class is used to give a reference of a global variable that
     *  is visible to all the program files
     *
     *  The extern modifier is most commontly used when there are two or more
     *  files sharing the same global variables or functions.
     *  */

    {
        extern int count;
    }
}


