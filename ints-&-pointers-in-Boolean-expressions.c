#include <stdio.h>

int main(int argc, char* argv[])
{
   
    /* The expression (argc % 4) is evaluated and leads to one of the values 0,
     * 1, 2 or 3. The first, 0 is the only value that is "false" and brings 
     * execution into the else part. All other values are "true" and go into
     * the if part*/
 
    if (argc % 4)
    {
        puts("Number of arguments is not divisible by 4");
    } else {
        puts("Number of arguments is divisible by 4");
    }

    return 0;
}
