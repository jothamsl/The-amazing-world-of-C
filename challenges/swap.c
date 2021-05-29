#include <stdio.h>

void swap(int *pa, int *pb) {      //  pa -> a: 21  | pb -> b: 17
    int p = *pa;                   //  p: 21
    *pa = *pb;                     //  pa -> a: 17  | pb -> b: 17
    *pb = p;                       //  pa -> a: 17  | pb -> b: 21
    printf("swap: a = %d, b = %d\n", *pa, *pb);
}

int main(void) {
    int a = 21, b = 17;

    swap(&a, &b);
    printf("Main: a = %d, b = %d\n", a, b);
    return 0;
}

