#include <stdio.h>
#include <stdlib.h>

// TODO: Work on secure linked list, with hash function

struct Node
{
   int data;
   struct Node *next;
   struct Node *prev;
};

typedef struct
{
   struct Node *head;
} linked_list;

/* Create New linked list */
linked_list *create_list();

/* Destroy linked list */
void destroy_list(linked_list *link);

/* Push new Node to beginning of list*/
linked_list push_node(linked_list *link, int data);

/* Append new Node to end of list */
linked_list append_node(linked_list *link, int data); // TODO

/* Pop Node from end of list */
linked_list pop_node(linked_list *link);              // TODO

/* Shift (remove) Node from beginning of list */
linked_list shift_node(linked_list *link);            // TODO

/* Counts amount of Nodes in linked list */
void link_counter(struct Node *Head, int *counter); //   TODO

/* Print out linked list nodes and their data */
void print_linked(linked_list link); //                  TODO

int main(void)
{
   struct Node n1;
   struct Node n2;
   struct Node n3;

   linked_list *LL = create_list();
   LL->head->data = 5;
   LL->head->next = &n1;
   n1.next = &n2;
   n2.next = &n3;
   n1.data = 23;
   n2.data = 52;
   n3.data = 053;



   // TODO: Work on printing out linked list
   /* print_linked(*LL); */
}

linked_list *create_list()
{
   /* Allocate memory for new linked_list*/
   linked_list *list = (linked_list *) malloc(sizeof(linked_list));

   /* Create Head Node */
   struct Node Head;
   Head.next = NULL;
   Head.prev = NULL;

   /* Make Head argument head of the linked_list */
   list->head = &Head;

   /* Initialize Head's next node to NULL */
   return list;
}

void destroy_list(linked_list *link)
{

   /* 
    * If head of the linked list has no successor, just free it
    * and the list 
    */
   if (link->head->next == NULL)
   {
      free(link->head);
      free(link);
      return;
   }

   // To store current Node considered
   struct Node *current_node = link->head;
   // To store next node of current Node
   struct Node *next_node;

   while (current_node->next != NULL)
   {
      next_node = current_node->next;
      free(current_node);
      current_node = next_node;
   }
   free(link);
}

linked_list push_node(linked_list *link, int data)
{
   /* Allocate memory for new Node */
   struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
   new_node->next = NULL;
   new_node->prev = NULL;

   /* Assign data value for new Node */
   new_node->data = data;

   /* Temporarily store current Head Node */
   struct Node current_head = *link->head;

   /*
    * Change current head Node to new Node and succeeding
    * Node after new Node to current_head vice versa
    */
   link->head = new_node;
   link->head->next = &current_head;
   current_head.prev = new_node;

   return *link;
}

void link_counter(struct Node *current_node, int *counter)
{
   if (current_node->next == NULL)
      return ;
   else
   {
      counter++;
      link_counter(current_node->next, counter);
   }
}


void print_linked(linked_list link)
{
   /* Count number of nodes in linked list */
   int counter = 0;
   link_counter(link.head, &counter);
   printf("%d\n", counter);

   //if (link.head->next != NULL)
   //{
   //}
}
