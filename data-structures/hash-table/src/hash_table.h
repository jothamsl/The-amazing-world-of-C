
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
