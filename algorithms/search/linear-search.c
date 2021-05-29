#include <stdio.h> 

int lin_search(int arr[], int s, int v)
{
    for (int i = 0; i < s; i++)
        if (arr[i] == v)
            return i;
    return 1;
}

int main(void)
{
    int arr[] = {1, 5, 2, 6, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int val = 6;
    printf("Value %d found at index %d\n", val, lin_search(arr, size, val));
}
