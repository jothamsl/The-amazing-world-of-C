#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node Node;

struct List
{
    Node *head;
};
typedef struct List List;

List *initialize_list()
{
    Node *node = (Node *) malloc(sizeof(Node));
    List *linked_list = (List *) malloc(sizeof(List));
    if (linked_list)
    {
        node->data = 0;
        node->next = NULL;
    }

    linked_list->head = node;
    return linked_list;
}

void destroy_list(List *l)
{
    if (!l->head->next)
    {
        free(l->head);
        free(l);
        return;
    }

    Node *next;
    Node *current = l->head;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }
    free(l);
}

List push_list(Node n, List *l)
{
    Node *temp = l->head;
    l->head = &n;
    l->head->next = temp;
    return *l;
}

List append_list(Node n, List *l)
{
    Node *next;
    Node *current = l->head;
    while (current)
    {
        next = current->next;
        if (!current->next)
        {
            current->next = &n;
            return *l;
        }
        current = next;
    }
    return *l;
}

List shift_list(List *l)
{
    if (!l->head->next)
    {
        l->head = NULL;
        return *l;
    }
    l->head = l->head->next;
    return *l;
}

List pop_list(List *l)
{
    if (!l->head->next)
    {
        l->head = NULL;
        return *l;
    }

    Node *next;
    Node *prev;
    Node *current = l->head;
    while (current)
    {
        next = current->next;
        if (!current->next)
        {
            prev->next = NULL;
            return *l;
        }
        prev = current;
        current = next;
    }
    return *l;
}

int list_length(List l)
{
    int c = 0;
    Node *n = l.head;
    while (n)
    {
        n = n->next;
        c++;
    }
    return c;
}

Node *search_list(int d, List *l)
{
    Node *next;
    Node *current = l->head;
    while (current)
    {
        next = current->next;
        if (current->data == d)
        {
            return current;
        }
        current = next;
    }
    printf("Could not locate Node with value %d\n", d);
    return NULL;
}
