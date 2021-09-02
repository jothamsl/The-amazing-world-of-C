typedef struct ht_item ht_item;
typedef struct hash_table hash_table;

struct ht_item {
    char key;
    char *value; 

};

struct hash_table {
    int max_size;
    int current_size;
    ht_item **items;   
};


