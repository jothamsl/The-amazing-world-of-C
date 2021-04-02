#include <stdio.h>
#include <stdlib.h>

int linearSearch(int x, int y, int arr[]); // Function prototype

int main(void)
{
    // x   : search value
    // y   : array size
    // arr : array

    int x, y;
    printf("Enter array size: ");
    scanf("%d", &y);

    int *arr = (int *) malloc(y * sizeof(int)); // allocate space in memory for array
    printf("Enter array values: ");
    for (int i = 0; i < y; i++)
        scanf("%d", &arr[i]);

    printf("Enter search value: ");
    scanf("%d", &x); // Take search value

    int res = linearSearch(x, y, arr);    
    if (res) 
        printf("Value found at index %d, position %d\n", res, res+1);
    else 
        printf("Value not found");
    return 0;
}

int linearSearch(int x, int y, int arr[])
{
    for (int i = 0; i < y; i++)
        if (arr[i] == x)
            return i;
    return 1;
}
