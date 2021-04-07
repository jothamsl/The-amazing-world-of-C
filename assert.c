#include <stdio.h> 
#include <assert.h>

int main(void) {
    /*
     * The macro "assert" allows diagnostic information to be written to the standard
     * error file. In other words, it is used to add diagnostics in a C program
     */

    int a;
    char str[50];

    printf("Enter an integer: ");
    scanf("%d", &a);

     /* 
      * If evaluation is equal to true -> do nothing 
      * If evaluation is equal to false -> return an error messge
      */

    assert(a >= 10); 
    printf("Integer enetered is %d\n", a);
}
