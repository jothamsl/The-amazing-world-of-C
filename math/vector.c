#include <stdio.h> 
#include <stdlib.h>

#define MAX_VEC_CAPACITY 400

typedef struct vector {
    int *data;
    size_t size;
    size_t capacity;
} vector;

/* 
 * Initialize_vector
 *
 * Allocates memory for vector
 * @param: void *vals -> Input data for vector
 */

vector initialize_vect(int *vals, int s)
{
    vector *vec = (vector *) malloc(sizeof(vector)); 
    vec->capacity = MAX_VEC_CAPACITY;
    vec->data = vals;
    vec->size = s;
    if (vec->size > MAX_VEC_CAPACITY)
        printf("\033[0;31mVector has exceeded MAX_VEC_CAPACITY of %d\n\033[0m", MAX_VEC_CAPACITY), exit(1);
    return *vec;
}

/* 
 * Destroy Vector
 *
 * Destroys a vector by deallocating the memory of it
 * @param: vector *v -> Pointer to vector
 */

void destroy_vect(vector *v)
{
    free(v);
}

/* 
 * Sum vectors
 *
 * Returns Array of summed values
 * @param: vector vec1 & vector vec2 -> Input vectors with same size
 */

int *vect_sum(vector vec1, vector vec2)
{
    if (vec1.size != vec2.size)
    {  
        printf("\033[0;31mCannot sum vec1 of size %zu and vec2 of size %zu\n\033[0m", vec1.size, vec2.size);
        exit(1);
    }

    int size = vec1.size;
    int *res = (int *) malloc(size * size); 
    for (int i = 0; i < size; i++)
    {
        res[i] = (int)vec1.data[i] + (int)vec2.data[i];
    }
    return res;  
}

/* 
 * Difference of vectors
 *
 * Returns Array of minused values
 * @param: vector vec1 & vector vec2 -> Input vectors with same size
 */

int *vect_minus(vector vec1, vector vec2)
{
    if (vec1.size != vec2.size)
    {  
        printf("\033[0;31mCannot minux vec1 of size %zu and vec2 of size %zu\n\033[0m", vec1.size, vec2.size);
        exit(1);
    }

    int size = vec1.size;
    int *res = (int *) malloc(size * size); 
    for (int i = 0; i < size; i++)
    {
        res[i] = (int)vec1.data[i] - (int)vec2.data[i];
    }
    return res;  
}

/* 
 * Display vector 
 *
 * Displays vector representation in array format
 * @param: vector v -> Pointer of vector to display 
 */

void display_vec(vector *v)
{
    printf("[");
    for (int i = 0; i < v->size; i++) {
        if (i == v->size-1)
            printf("%d]\n", v->data[i]), exit(0);
       printf("%d, ", v->data[i]); 
    }
}

int main(void)
{
    int val1[] = {0, 8, 3, 7}, size1 = sizeof(val1)/sizeof(int);
    int val2[] = {1, 5, 0, 9}, size2 = sizeof(val2)/sizeof(int);
    vector veck1 = initialize_vect(val1, size1);
    vector veck2 = initialize_vect(val2, size2);
    vector sum = initialize_vect(vect_minus(veck1, veck2), veck1.size);
    display_vec(&sum);
    destroy_vect(&sum);
}
