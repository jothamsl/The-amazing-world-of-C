#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d) 
{
    int l1, l2;
    if (a > b) 
        l1 = a;
    else 
        l1 = b; 
    
    
    if (c > d)
        l2 = c;
    else 
        l2 = d;
        
    if (l1 > l2)
        return l1;
    else 
        return l2;
}
