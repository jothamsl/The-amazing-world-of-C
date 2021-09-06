#include <stdio.h>
#include <stdbool.h>

#define MAX_ITEMS 26

typedef char* t_item;

int get_key(t_item item);
bool contains_item(t_item item);
void add_item(t_item item);
void delete_item(t_item item);
void print_items(void);

t_item *table[MAX_ITEMS];

int main (int argc, char **argv)
{

    return 0;
}
