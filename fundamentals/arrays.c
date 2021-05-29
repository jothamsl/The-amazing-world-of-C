#include <stdio.h>

int main(void)
{
    int arr0[5]; // Empty declared array
    printf(" arr0: mem: %p\n", &arr0);

    int arr1[5] = {2}; // Assigned array with single value
    // NOTE: The remaining array members are initialized
    // to zeros
    printf("---------------------------\n");
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
        printf(" arr1 index %i: mem => %p, value => %i\n", i, &arr1[i], arr1[i]);

    int arr2[5] = {1, 2, 3, 4, 5};
    printf("---------------------------\n");
    for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
        printf(" arr2 index %i: mem => %p, value => %i\n", i, &arr2[i], arr2[i]);


    int arr3[5] = {[2] = 1, [1] = 7, [4] = 9}; // Explicit initialization of index
    printf("---------------------------\n");
    for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++)
        printf(" arr3 index %i: mem => %p, value => %i\n", i, &arr3[i], arr3[i]);

    printf("---------------------------\n");
    int arr4[] = {1, 3, 5}; // Compiler can deduce array length for you
    int arr5[] = {[3] = 2, [10] = 4}; // length of 10
    printf("length of arr4: %i, length of arr5: %i\n", sizeof(arr4)/sizeof(arr4[0]), sizeof(arr5)/sizeof(arr5[0]));
        return 0;
}
