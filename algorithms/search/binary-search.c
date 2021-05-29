#include <stdio.h>

int binary_search(const int *arr, int v, int low, int max)
{
    int mid = (low + max) / 2;

    while (arr[mid] != v)
    {
    }
};

int main(void)
{
    int data[] = { 1, 3, 5, 7, 10 }, v = 7, l = data[0], m = data[(sizeof(data)/4)-1];
    binary_search(data, v, l, m);
}
