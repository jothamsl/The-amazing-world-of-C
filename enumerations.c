#include <stdio.h>

enum color
{
    RED,
    GREEN,
    BLUE
};

enum week
{
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

// Define prototype
void printColor(enum color chosenColor);
void printDayOfWeek(enum week day);

int main(void)
{
    /*
       An enumeration is a user defined data type consisting of
       integral constants and each integral constant is given a
       name. The keyword 'enum' is used to define enumerated data
       types
       */

    enum color chosenColor;
    printf("Enter a number between 0 and 2:\t");
    scanf("%d", (int *)&chosenColor);
    printColor(chosenColor);

    enum week day;
    return 0;
}

void printColor(enum color chosenColor)
{
    const char *colorName = "Invalid color";

    switch (chosenColor)
    {
        case RED:
            colorName = "RED";
            break;

        case GREEN:
            colorName = "GREEN";
            break;

        case BLUE:
            colorName = "BLUE";
            break;
    }
    printf("%s\n", colorName);
}

static const char *const dow[] = {
    [MON] = "Mon", [TUE] = "Tue", [WED] = "Wed",
    [THU] = "Thu", [FRI] = "Fri", [SAT] = "Sat", [SUN] = "Sun"
};

void printDayOfWeek(enum week day)
{
    printf("%s\n", dow[day]);
}
