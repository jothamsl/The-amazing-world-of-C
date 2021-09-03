#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "hash_table.h"

char hash_func(char *c)
{
   return tolower(c[0]); 
}

ht_item *new_ht_item(char* value)
{
    ht_item *item = (ht_item *) malloc(sizeof(ht_item));
    item->key = value[1];
    item->value = value;
    return item;
}

hash_table *new_ht()
{
    hash_table *table = (hash_table *) malloc(sizeof(hash_table));
    table->max_size = 26;
    table->current_size = 0;
    table->items = (ht_item **)calloc(table->max_size, sizeof(ht_item*));
    return table;
}

void ht_add(char * value, hash_table* table)
{
    ht_item *item = new_ht_item(value);
    table->items[table->current_size++] = item;
}

int ht_search(char *c, hash_table *table)
{
    char key = hash_func(c);
    printf("Key: %c\n current_size: %i\n", key, table->current_size);
    for (int i = 0; i < table->current_size; i++)
    {
        if (table->items[i]->key == key)
        {
            printf("%i\n", i);
            return i;
        }
    }
    return 0;
}

void ht_delete(char *c, hash_table *table)
{
    int index = ht_search(c, table); 
    printf("%i\n", index);
    table->items[index] = NULL;
    table->current_size--;
}

void ht_destroy(hash_table *table)
{
    for (int i = 0; i < table->current_size; i++)
        if(table->items[i] != NULL)
            free(table->items[i]);
    free(table->items);
}

void ht_print(hash_table *table)
{
    for(int i = 0; i < table->current_size; i++)
        printf("%s\n", table->items[i]->value);
}

int has_number(char s[])
{
    for (int i = 0; i < 2; i++)
        if (isdigit(s[i]) != 0)
        {
            printf("\033[1;31m");
            printf("One or both of the first two characters in %s are numbers not letters!\n", s);
            printf("Your input should look like this: Aapple, Dripple, Dg8ns, Azn*f\n");
            exit(0);
        }
    return 1;
}

int has_symbol(char s[])
{
    for (int i = 0; i < 2; i++)
    {
        int x = (int)s[i];
        if ((x >= 33 && x <= 47) || (x >= 58 && x <= 63) || 
            (x >= 91 && x <= 96) || (x >= 123 && x <= 126)) 
        {
            printf("\033[1;31m");
            printf("One or both of the frist two characters of %s are symbols not letters!\n", s);
            printf("Your input should look like this: Aapple, Dripple, Dg8us, Azn*f\n");
            exit(0);
        }
    }
    return 1;
}


int main(int argc, char *argv[])
{
    // Input eval
    // If amount of arguments is one, then print prompt
    if (argc == 1) {
        puts("Pass in some input SENPAI!!"); 
        return 0;
    }

    hash_table* ht = new_ht();

    int i = 1; // argv iterator
    while (argv[i] != NULL)
    {
        // Check if first two characters of argument is a number

        // Check if first two characters of argument is a symbol
        has_symbol(argv[i]);

        // Check for operation
        if (argv[i][0] == 'A')
        {
          memmove(argv[i], argv[i]+1, strlen(argv[i]));
          ht_add(argv[i], ht);  
        }
        
        else if (argv[i][0] == 'D')
        {
          memmove(argv[i], argv[i]+1, strlen(argv[i]));
          ht_delete(argv[i], ht);
        }
        i++;
    }
    ht_print(ht);
    ht_destroy(ht);
}
