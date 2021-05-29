#include <stdio.h>
#include <stdlib.h>

typedef struct array {
    int size;
    int capacity;
    int *data;
} array;

// Initialize array
array *initialize_array(int capacity)
{
    array *arr = (array *) malloc(sizeof(array));
    arr->size = 0;
    arr->capacity = capacity;
    arr->data = NULL;
    return arr;
}

void destroy_array(array *arr)
{
    free(arr);
}

int main(void)
{
    array * arr = initialize_array(2);
    destroy_array(arr);
    printf("%d", arr->capacity);
}
