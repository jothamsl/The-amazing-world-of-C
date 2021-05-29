#include <stdio.h>

typedef struct mate mate; // This can be defined so that the 'left' and 'right'
                          // members that refer to other object of type mate

typedef struct mate {
    int value;
    struct mate *left;
    struct mate *right;
} partner;

int main(void)
{   
    struct mate p; // Creates new struct called p
    partner r;     // Also creates a new struct called r
}
