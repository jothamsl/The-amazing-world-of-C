#include <stdio.h> 

// Func prototype
void func(void);

static int count = 5; // Global variable

int main(void)
{
    // The static storage class instructs the compiler to keep a local variable in existence during 
    // the life-span of the the program instead of creating and destroying it each time it comes and
    // goes out of scope
    
    while(count--)
    {
        func();
    }
}

void func(void)
{
    static int i = 5; // Local static variable 
    i++;

    printf("i is %d and count is %d\n", i, count);
}
