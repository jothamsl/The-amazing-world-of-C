#include <stdio.h>
#include <string.h>

#define MAX 25

struct Books {
    char name[MAX];
    char author[MAX];
    int pages;
};

void printBook(
        struct Books *Book,
        char name[MAX],
        char author[MAX],
        int pages);


int main(void)
{
    struct Books Book1;
    struct Books *struct_pointer; // Create struct pointer

    // Store address of structure
    struct_pointer = &Book1;
    printf("struct_pointer: %p\n", struct_pointer);

    printBook(&Book1, "All the bright places", "Jennifer Niven", 300);

    return 0;
}

// Structure as function arguments
void printBook(
        struct Books *Book,
        char name[MAX],
        char author[MAX],
        int pages)
{

    strcpy(Book->name, name);
    strcpy(Book->author, author);
    Book->pages = pages;

    // Inorder to access the members of a structure using a pointer, you must
    // use the "->" operator

    printf("Book's Name: %s\n", Book->name);
    printf("Book's author: %s\n", Book->author);
    printf("No of pages: %d\n", Book->pages);
}
