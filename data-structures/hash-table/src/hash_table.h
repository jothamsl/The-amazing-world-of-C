
// Key-value pairs (items) will be stored in a struct
typedef struct {
    char *key;
    char *value;
} ht_item;


// Stores details about key-value pair size
typedef struct {
    int size;
    int count;
    ht_item **items;
} ht_hash_table;

void ht_insert(ht_hash_table *ht, const char *key, const char *value);
char *ht_search(ht_hash_table *ht, const char *key);
void ht_delete(ht_hash_table *h, const char *key);
