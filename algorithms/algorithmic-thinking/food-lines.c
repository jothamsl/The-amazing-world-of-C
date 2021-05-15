#include <stdio.h>
#include <stdlib.h>

#define STRLEN 100

char *read_file(char *path)
{
    // Open file using file path and store in *file pointer
    FILE *file = fopen(path, "r");

    // If file pointer is == to NULL, print error
    if (file == NULL)
    {
        printf("Error -> Could not find file");
        exit(-1);
    }

    // Store lines
    static char line[STRLEN];

    while (fgets(line, STRLEN, file) != NULL)
    {
        printf("This line is : %s\n", line);
    }
    return line;
}

int main(void)
{
    char *data = read_file("./input/food.txt");
    printf("%s\n", data);
}
