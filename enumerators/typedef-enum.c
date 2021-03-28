#include <stdio.h>

typedef enum 
{
    RED,
    GREEN,
    BLUE
} color;

enum month {
    JAN,
    FEB,
    MAR
};
typedef enum month month; // Also a typdef of same identifier

void printColor(int chosenColor)
{
    if (chosenColor == RED) 
    {
        printf("RED\n");
    }
    else if (chosenColor == GREEN)
    {
        printf("GREEN\n");
    }
    else if (chosenColor == BLUE)
    {
        printf("BLUE\n");
    }
}

int main(void)
{
    color chosenColor = GREEN; // 1
    enum month defaultMonth = MAR; // 2

    int val;
    printf("Pass in the value: ");
    scanf("%d", &val);
    printColor(val);
}
