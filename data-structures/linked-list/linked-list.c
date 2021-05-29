#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int data;
    char *id;
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

void push_list(Node n, List *l)
{
    Node *temp = l->head;
    l->head = &n;
    l->head->next = temp;
}

void append_list(Node n, List *l)
{
    Node *next;
    Node *current = l->head;
    while (current)
    {
        next = current->next;
        if (!current->next)
        {
            current->next = &n;
            return ;
        }
        current = next;
    }
}

void shift_list(List *l)
{
    if (!l->head->next)
    {
        l->head = NULL;
        return ;
    }
    l->head = l->head->next;
}

void pop_list(List *l)
{
    if (!l->head->next)
    {
        l->head = NULL;
        return ;
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
            return ;
        }
        prev = current;
        current = next;
    }
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

Node *search_list(char *s, List *l)
{
    Node *next;
    Node *current = l->head;
    while (current)
    {
        next = current->next;
        if (strcmp(current->id, s))
        {
            return current;
        }
        current = next;
    }
    printf("Could not locate Node with id %s\n", s);
    return NULL;
}

void remove_from_list(Node n, List *l)
{
   Node *s = search_list(n.id, l);
   if (s)
   {
       Node *current = l->head;
       Node *next;
       Node *prev = NULL;

       while (current)
       {
            next = current->next;
            if (strcmp(current->id, n.id))
            {
                break;
            }
            prev = current;
            current = next;
       }
   }
}
