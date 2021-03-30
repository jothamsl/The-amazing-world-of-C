#include <stdio.h> 

int main(void)
{
    int x, y;
    float z, k; 
    scanf("%d %d", &x, &y);
    scanf("%f %f", &z, &k);
    printf("%d %d \n%.1f %.1f\n", x+y, x-y, z+k, z-k); 
}
