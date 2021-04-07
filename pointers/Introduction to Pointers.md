# Introduction to Pointers 

## What are Pointers?

Pointers are variables which can store the address of another object or function. It's like an empty box which stores the location of a variable, function or structure. 

A pointer is declared like an other variable, except an asterisk (*) is placed between the type and the name of the variable to denote it's a pointer:

``` c
int *pointer; /* Inside a function (like main()), a pointer is uninitialized and doesn't point to any valid object yet*/
int *p1, *p2;
int *p3, p4; // p4 is not a pointer because it has no asterisk
```

The address-of or reference operator denoted by an ampersand (&) gives the address of a given variable which can be stored in a pointer of the same type:

```c	
int *pointer;
int value = 1;
pointer = &value; // pointer stores address of variable (value)
```

The indirection of dereference operator denoted by an asterisk (*) gets the contents of an object pointed to by a pointer.

```c
printf("Value of the pointer: %p\n", (void *) pointer);
```

Since a pointer is a mutable variable, it is possible for it to not point to a valid object, either by being set to null or simply containing an arbitrary bit pattern that isn't a valid address.

```c
pointer = 0; 
pointer = NULL;
```

