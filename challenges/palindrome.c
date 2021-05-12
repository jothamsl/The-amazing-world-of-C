#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 10

char* invert_string(char *c)
{
    int len = strlen(c);
    char *string = (char *) malloc(len);
    strcpy(string, c);

    for (int i = 0; i < len / 2; i++)
    {
        char t = string[i];
        string[i] = string[len - 1 - i];
        string[len - 1 - i] = t;
    }
    return string;
}

int main(void)
{
    char c[MAX_LEN]; // Input string storage
    printf("Enter string : ");
    fgets(c, MAX_LEN, stdin); // Get string buffer from terminal
    c[strlen(c) - 1] = '\0'; // Gettind rid of the new line formed
    char *inverted = invert_string(c); // Get inverted string

    int palindrome = (strcmp(c, inverted) == 0);
    printf("%s %s %s\n", c, palindrome ? "==" : "!=", inverted);
    free(inverted); // Free allocated memory
}
