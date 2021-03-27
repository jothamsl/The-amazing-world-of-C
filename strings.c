#include <stdio.h>
#include <string.h>

int main(void) {
    /* Strings are one-dimensional arrays of characters and is terminated by
       a null-character '\0'

       e.g The string "abc" will have four characters 'a', 'b', 'c' and '\0'

       Strings can be created using string literals
       (which are automatically null-terminated)
       */

    char *string = "Hello world";
    printf("%s\n", string);

    /* When initializing a 'char *' to a string literal, the string itself is
     * usually allocated in read only data; the string is actually a ponter
     * to the first element of the array, which is 'H'.
     *
     * e.g string[0] = 'L'; Returns segmentation fault
     */

    char const *stringz = "Hello world"; // This is also the same as *string
    // stringz[0] = 'L'; This wont work cuz it's read-only
    printf("%s\n", stringz);

    // to create a modifiable string, you can declare a character array and
    // initialize it's contents using a string literal:
    char modifiable_string[] = "Hi, i'm modifiable";
    modifiable_string[0] = 'L'; // Re-assigning works
    printf("%s\n", modifiable_string);

    char modifiable_string2[] = {'H', 'e', 'l', 'l', 'o', ' ',
        'w', 'o', 'r', 'l', 'd', '\0'};
    printf("%s\n", modifiable_string2); // This is the same as modifiable_string

    // Tokenizing individual worlds using delimeters
    int toknum = 0;
    char src[] = "Hello,, World!";
    const char delimeters[] = ", !";

    /* strtok breaks a string into smaller strings or tokens
       using a set of delimeters
       */
    char *token = strtok(src, delimeters);
    while (token != NULL) {
        printf("%d: [%s]\n", ++toknum, token);
        token = strtok(NULL, delimeters);
    }
}
