#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "hash_table.h"

// Initializes new hash_table item
static ht_item *ht_new_item(const char *k, const char *v)
{
    // Allocate memory of size ht_item and store address in pointer i
    ht_item *i = malloc(sizeof(ht_item));
    // set key of i to copy of entered key (*k) pointer
    i->key = strdup(k);
    // set value of i to copy of entered value (*v) pointer
    i->value = strdup(v);
    return i;
}

// Initializes new hash_table
ht_hash_table *ht_new()
{
    // Allocate memory of size ht_hash_table and store address in pointer *ht
    ht_hash_table *ht = malloc(sizeof(ht_hash_table));

    // Set max size of ht_item in hash_table
    ht->size = 53;
    // Keep count of amount of ht_item's in hash_table
    ht->count = 0;
    // Allocate memory of size ht_item for each ht_item in the hash_table
    ht->items = calloc((size_t) ht->size, sizeof(ht_item*));
    return ht;
}

// Delete ht_item by freeing memory location
static void ht_del_item(ht_item *i)
{
    free(i->key);
    free(i->value);
    free(i);
}

// Delete hash_table
void ht_del_hash_table(ht_hash_table *ht)
{
    // Loop through each ht_item in hash_table
    for (int i = 0; i < ht->size; i++)
    {
        ht_item *item = ht->items[i];
        // if ht_item is not equal to null : free it's key value pairs
        if (item != NULL)
        {
            ht_del_item(item);
        }
    }
    // Free all hash_table items then free hash_table
    free(ht->items);
    free(ht);
}

// Hashing function
static int ht_hash(const char *s, const int a, const int m)
{
    long hash = 0;
    const int len_s = strlen(s);
    for (int i = 0; i < len_s; i++)
    {
        hash += (long) pow(a, len_s - (i+1)) * s[i];
        hash = hash % m;
    }
    return (int) hash;
}

int main(void)
{
    return 0;
}
